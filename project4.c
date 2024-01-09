/*Output1:
enter any number: 7
The number is not devisible by 3 and 5
Output2:
enter any number: 15
The number is devisible by 3 and 5
*/

#include<stdio.h>

void main(){
	
	int n;
	
	printf("enter any number: ");
	scanf("%d",&n);
	
	if(n%3==0 && n%5==0){
		printf("The number is devisible by 3 and 5");
	}else{
		printf("The number is not devisible by 3 and 5");
	}
	
}
