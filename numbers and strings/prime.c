#include<stdio.h>
int main(){
int n,i;
printf("enter a number");
scanf("%d",&n);
for(i=2;i<=n;i++){
	if(n%i==0){
		printf("not a  prime number%d\n",i);//prime numbers are only divisible by one and itself
	}
	else
	{
	printf("prime number%d\n",i);//prime numbers are only divisible by 1 and itself.
	}
}
return 0;
}
