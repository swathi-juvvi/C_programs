#include<stdio.h>
int main(){
char operator1;
int n1,n2,c;
printf("enter two numbers for performing operations");
scanf("%d\n %d\n",&n1,&n2);
printf("enter any arithmatical operator1");
scanf("\n%c",&operator1);
switch(operator1){
	case '+':
		printf("%d",n1+n2);
		break;
	case '-':
		printf("%d",n1-n2);
		break;
	default:
		printf("operator is not correct");
}
return 0;
}

