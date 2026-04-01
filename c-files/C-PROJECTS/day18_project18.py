#include <stdio.h>
#include <stdlib.h>
int main(){
int i, j, r, c;
printf("enter ur 2 d array:");
scanf("%d %d", &r, &c);
int A[r][c];
for(i=0; i<r; i++){
	for(j=0; j<=i; j++){
		if(j==0 || j==i)
		    A[i][j]=1;
		else
		   A[i][j]=A[i-1][j]+A[i-1][j-1];
	    printf("%d\t", A[i][j]);
	}
	printf("\n");
}
return 0;
} 
