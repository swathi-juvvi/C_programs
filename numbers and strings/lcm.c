#include<stdio.h>
int main(){
int a,b,c,i=1,lcm;
printf("enter the numbers required for finding gcd");
scanf("%d\n %d\n",&a,&b);
while(i<=a && i<=b){
	if(a%i==0 && b%i==0){
		c=i;
	}
	++i;
}
//the product of two numbers is equal to product of lcm and gcd
//lcm=product of two numbers/gcd
lcm=(a*b/c);
printf("lcm of two numbers is %d",lcm);
return 0;
}
