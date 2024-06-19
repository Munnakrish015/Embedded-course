#include <stdio.h>

int main(){
	
int rem,num,sum = 0,ornum;

printf("enter any number:");
scanf("%d",&num);
ornum  = num;
while(num>0){

rem = num%10;
sum = sum + rem;
num/=10;
}
printf("entered number = %d",ornum);
printf("sum number = %d",sum);

return 0;
}