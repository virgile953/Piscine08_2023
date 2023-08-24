cat /etc/passwd | grep '^[^#]'|awk 'NR % 2==0' | tail -n +5 | head -n 10 | cut -d : -f1 | rev | sort -r |tr '
' ' ' | sed 's/ /, /g' |sed 's/..$/./'
