/*Output:
10 9 8 7 6
 9 8 7 6
  8 7 6
   7 6
    6
*/

#include<stdio.h>

void main(){
	
	
int i,j,k;

for(i=10; i>=6; i--){
	for(k=10; k<5; k++){
		printf("_");
		
	}
	for(j=i; j>=6;j--){
		printf("%d ",j);
		
	}
	printf("\n");
	
}	
}
