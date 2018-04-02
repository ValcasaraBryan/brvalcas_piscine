ifconfig | grep "inet " | cut -d' ' -f2 > tmp
if [ -s tmp ]
then
	cat tmp
else
	echo "I am lost!
fi
rm tmp
