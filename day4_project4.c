#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, i, j;
	printf("input ur nb:");
	scanf("%d", &n);
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(i==0 || i==n-1 || j==0 || j==n-1 || i==j){
				printf("+");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	int a, p, q;
	printf("input ur nb:");
	scanf("%d", &a);
	for(p=0; p<a; p++){
		for(q=0; q<=i; q++){
			printf("+");
		}
		printf("\n");
	}
	
	
	
	
	
	return 0;
}
