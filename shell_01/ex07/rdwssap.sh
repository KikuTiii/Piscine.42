cat /etc/passwd | cut -d ":" -f1 | sed -e '/^[ \t]*#/d'| sed -n "2~2p" | rev | sort -r |sed -n "${FT_LINE1},${FT_LINE2}p" |tr '\n' ',' | sed 's/,/, /g' | sed -r 's/, $//g' | sed 's/$/./'
