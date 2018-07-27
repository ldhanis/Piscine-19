/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 16:05:05 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/19 17:10:39 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	t_btree *ret_item;

	ret_item = NULL;
	if (root)
	{
		if (root->left)
			ret_item = btree_search_item(root->left, data_ref, cmpf);
		if (!ret_item && cmpf(root->item, data_ref) == 0)
			ret_item = root;
		if (!ret_item && root->left)
			ret_item = btree_search_item(root->right, data_ref, cmpf);
	}
	return (ret_item);
}
