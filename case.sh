echo "enter your name"
read name
echo "enter your age"
read age
echo "enter your dob"
read dob
echo "$name $age $dob">>data
while :
do
echo "enter your choice"
read choice
case $choice in 
1)echo $name;;
2)echo $age;;
3)echo $dob;;
*)exit;;
esac
done

