#include<stdio.h>
int main(){
int a,b,c,i=1;
printf("enter the numbers required for finding gcd");
scanf("%d\n %d\n",&a,&b);
while(i<=a && i<=b){
	if(a%i==0 && b%i==0){
		c=i;
	}
	++i;
}
printf("gcd of two numbers is %d",c);
return 0;
}
