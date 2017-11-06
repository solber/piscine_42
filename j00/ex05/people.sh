ldapsearch -xLLL 'uid=z*' cn | grep "^cn:" | cut -d ":" -f 2 | sed 's/ //' | sort -rf
