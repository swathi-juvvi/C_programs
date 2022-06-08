#include <stdio.h>
int main(){
int array[100],n,i,j,temp;
printf("Enterthe count of the elements\n");
scanf("%d", &n);
printf("Enter the elements\n");
for (i=0;i<n-1;i++){
scanf("%d", &array[i]);
}
for (i=0;i<n-1;i++){//externel loop
	for (j=0;j<n-i-1;j++){
      		if (array[j] > array[j+1]){//internel loop for comparision
        		temp=array[j];
        		array[j]=array[j+1];
        		array[j+1]=temp;
     		 }
    	}
}
printf("Sorted list in order:\n");
for (i=1;i<n;i++){
     printf("%d\n", array[i]);
}

return 0;
}

