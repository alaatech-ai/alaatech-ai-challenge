#include <stdio.h>
#include <stdlib.h>

int main(){
	int A[10], i, evensum=0, countsum=0;
	for(i=0; i<10; i++){
		printf("enter an array:\n");
		scanf("%d", &A[i]);
		if(A[i]%2==0){
			evensum += A[i];
			countsum++;
		}
	}
	if(countsum>0){
		float avgev=(float)evensum/countsum;
		printf("Average: %f\n", avgev);
	}
	else{
		printf("no even nb\n");
	}
	int oddsum=0, countodd=0;
	for(i=0; i<10; i++){
		oddsum+=A[i];
		countodd++;
	}
	if(countodd!=0){
		float avgodd=(float) oddsum/countodd;
		printf("Avverage: %f\n", avgodd);
	}
		else{
			printf("no odd nb");
		}
	float avgall = (float)(evensum+oddsum)/10;
	printf("Avg of all ele: %f\n", avgall);
	
	int min, cntm=0;
	for(i=0; i<10; i++){
		if(i==0){
			min=A[i];
			cntm=1;
		}
		else if(A[i]<min){
			min=A[i];
			cntm=1;
		}
		else if(A[i]==0){
		cntm++;
		}
	}
	printf("the min is: %d\n", min);
	printf("the nb of times occures: %d\n", cntm);
	
	return 0;
}
