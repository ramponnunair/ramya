echo "enter your name"
read name
input="/home/student/Desktop/qqq/data"
a=grep $name $input | cut -d" " -f1
b=grep $name $input | cut -d" " -f2
c=grep $name $input | cut -d" " -f3
d=grep $name $input | cut -d" " -f
e=grep $name $input | cut -d" " -f1

