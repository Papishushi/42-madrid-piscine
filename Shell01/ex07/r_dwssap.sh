#!/bin/sh
cat /etc/passwd | grep -v "#" | awk 'NR%2==0' | cut -d ':' -f 1 | rev | sort | awk "NR >= $FT_LINE1 && NR <= $FT_LINE2" | xargs | sed 's/ /, /g' | tr "\n" "."
