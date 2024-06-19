#include<stdio.h>

int main()
{

int i,num,factors=1;
printf("enter any number :");
scanf("%d",&num);

if (num<2)
	printf("enter number more than 2");

for (i=1;i<=num/2;i++)
{

if (num%i==0){

	factors++;
	}
}
if (factors == 2)
printf("this number is a prime number");
else 	
printf("this number is not a prime number");
return 0;


}