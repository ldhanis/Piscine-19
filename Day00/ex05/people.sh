ldapsearch -Q -LLL "(cn=z*)"| awk "/^cn:/ {print}" | sort -r | cut -c5-999

