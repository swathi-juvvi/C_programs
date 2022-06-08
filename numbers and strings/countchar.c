#include<stdio.h>
#include<string.h>
int main(){
char char1,str[120]={'i','n','n','m','i','n','d','s','\0'};
int i,count=0;
//finding the frequency of the character specified from a given string 
for(i=0;i<strlen(str);i++){
	if(str[i]=='i'){
		count++;
	}
}
printf("heighest frequency of character %d",count);
return 0;
}
