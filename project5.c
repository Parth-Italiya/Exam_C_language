/*Output:
enter array size1: 1
enter array size2: 1
enter array elemnents: 5
enter array elemnents: 10
the sum is : 15
*/

#include<stdio.h>

void main(){
	
	int a[5],b[5],sum,size1,size2,*ptr,i,j;
	


	printf("enter array size1: ");
	scanf("%d",&size1);

	printf("enter array size2: ");
	scanf("%d",&size2);	
	
	for(i=0; i<size1; i++){
		printf("enter array elemnents: ");
		scanf("%d",&a[i]);
	}
	for(j=0; i<size2;  i++){
		printf("enter array elemnents: ");
		scanf("%d",&b[i]);
	}
	sum=a[i]+b[i];
	printf("the sum is : %d",sum);
	
}
