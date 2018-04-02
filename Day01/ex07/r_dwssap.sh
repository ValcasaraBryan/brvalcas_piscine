cat /etc/passwd | sed -n 'n;p' | grep -v '#' | sed -e 's/:.*//g' | rev | sort -r | sed -n "$FT_LINE1, $FT_LINE2 p" | sed -e 's/$/, /g' | xargs | sed -e 's/,$/./g' | tr -d '\n'
