#!/bin/bash
i=0
second_left=5
path=./temp

NAME_LIST="$1
	$2
	$3
	$4
	$5"
	
echo "start the project after 5 second"
while [ $second_left -gt 0 ];
do
	echo -n "please wait for $second_left second..."
	sleep 1
	let second_left--
	echo -ne "\r	\r"
done

for name in $NAME_LIST
do
	if [ ! -z $name ]; then
		let i++
	else
		break
	fi
done


if [ -f $path ];then
    rm -rf $path
fi

touch $path 

case $i in
0) echo "There is nothing" ;;
1) grep "$1" -r * > $path ;; 
2) grep "$1\|$2" -r * > $path ;;
3) grep "$1\|$2\|$3" -r * > $path ;; 
4) grep "$1\|$2\|$3\|$4" -r * > $path ;;
5) grep "$1\|$2\|$3\|$4\|$5" -r * > $path ;; 
esac

#echo -ne "\c\b"
clear

sed -i '/Binary file/d' $path

cat $path
