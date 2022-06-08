#include<stdio.h>
int main(){
char str[100];
int i,n=0;
printf("enter a string\n");
scanf("%s",str);
i=0;
while(str[i]!='\0'){
n=n+1;
i=i+1;
}
printf("length of the string is %d",n);
return 0;
}

