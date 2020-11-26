#!/bin/sh
grep -v '^#' /etc/passwd|awk 'NR%2==1' | awk -F: '{print $1}' |rev|sort -r| awk -v L1="$FT_LINE1" -v L2="$FT_LINE2" 'NR>=L1&&NR<=L2'| tr '\n' ','|sed 's/,$/./'
