cat /etc/passwd | grep -v "^#" | sed -n 'n;p' | rev | sort -r | cut -d ':' -f7 | awk "NR>=$FT_LINE1 && NR<=$FT_LINE2" | paste -s -d "," - | sed 's/,/, /g' | sed 's/$/./' | tr -d '\n'
