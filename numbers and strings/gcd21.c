#include<stdio.h>
int main(){
int a,b,c,i=1,d,e,f,lcm;
printf("enter the numbers required for finding gcd");
scanf("%d\n %d\n %d\n %d\n %d\n",&a,&b,&c,&d,&e);
while(i<=a && i<=b && i<=c && i<=d && i<=e){
	if(a%i==0 && b%i==0 && c%i==0 && d%i==0 && e%i==0){
		f=i;
	}
	++i;
}
lcm=(a*b*c*d*e)/f;
printf("gcd of two numbers is %d",lcm);
return 0;
}
