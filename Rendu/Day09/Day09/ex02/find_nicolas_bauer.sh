cat contacts_easy.txt | grep -i "nicolas\t" | grep -i "bauer\t" | rev | cut -d $'\t' -f2 | rev | grep -v "192.168.0" | grep -v "583-682932-1"
