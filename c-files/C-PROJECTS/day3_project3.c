#include<stdio.h>
int main(){
for (int i=0; i<10; i++)	
	printf(" hello\n");
	
	int cups = 1;
	while(cups<=8){
		printf("drinking cup numb %d\n", cups);
		cups++;
	}
	int num;
	do{
		printf("enter 10 to stop");
		scanf("%d", &num);
	}while(num != 10);
	
	return 0;
} 
