#include<stdio.h>
int main(){
int a=456,rev,sum=0;
while(a!=0){
rev=a%10;
sum=rev*10+sum;
a=a/10;
}
printf("%d",sum);
}
