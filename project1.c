/*Output:
Please enter a 3 digits positive integer:  777
The sum is: 14
*/

#include<stdio.h>

void main(){
	
	int n,sum;
	
	printf("Please enter a 3 digits positive integer:  ");
	scanf("%d",&n);
	
	if(n%1000==0){
		if(n%10==0&&n%1000==0){
			sum=n%10+n%1000;
			printf("The sum is: &d",sum);
		}
	}
}
