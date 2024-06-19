#include <stdio.h>

int main(){
	
int rem,num,rvs = 0,ornum;

printf("enter any number:");
scanf("%d",&num);
ornum =num;
while(num>0){

rem = num%10;
rvs = rvs * 10 + rem;
num/=10;
}
if (ornum == rvs)
printf("Palindrome number");
else 
printf("not palindrome");

return 0;
}