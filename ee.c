#include<stdio.h>
int main()
{
char x;
printf("who is the cricket captain of india\na.Dhoni\nb.Virat\nc.Rohit\nd.Jadeja");
scanf("%s",&x);
switch(x)
{
case 'a':
printf("former captain");
break;
case 'b':
printf("correct answer");
break;
case 'c':
printf("wrong answer");
break;
case 'd':
printf("wrong answer");
break;
default:
printf("choose any of the option");
}
}
