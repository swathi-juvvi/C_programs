#include<stdio.h>
#include<string.h>
int main(){
int i,count=0;
char str[100],char1;
printf("enter a string and character tp find the count\n");
//finding the count of the speecified character by specified string taken from the user 
scanf("%s %c",str,&char1);
for(i=0;i<strlen(str);i++){
	if(str[i]==char1){
		count++;
	}
}
printf("frequency of character is %d\n",count);
return 0;
}
