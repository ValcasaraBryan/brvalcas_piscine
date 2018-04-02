ldapsearch -xLLL uid=z* | grep "cn:z*" | cut -c5- | sort -r -f
