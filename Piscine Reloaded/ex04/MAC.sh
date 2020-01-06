ifconfig | grep 'ether*' | sed '/media/d' | tr -d ' ' | tr -d '	' |cut -c 6-42
