#include<stdio.h>
int main(){
int n,sum=0,rev;
printf("enter a number");
scanf("%d",&n);
while(n!=0){
	rev=n%10;
	sum=sum*10+rev;;
	n=n/10;
}
printf("%d",sum);
return 0;
}

