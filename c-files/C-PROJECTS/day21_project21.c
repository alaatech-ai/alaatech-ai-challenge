#include <stdio.h>
#include <stdlib.h>
void address (int *a, int *b){
	int temp = *a;
	 *b = temp;
	 *a = *b;
}
int main() {
	int x, y, i;
	printf("enter ur 2 numbers:");
	scanf(" %d %d", &x, &y);
	address(&x, &y);
	printf("after swap: x=%d, y=%d \n", x,y);
	
	int arr[5];
	int *ptr = arr;
	printf("enter 5 nbrs for the array: \n");
	for(i=0; i<5; i++){
		scanf("%d", (ptr+i));
	}
	printf("ur nbs re:\n");
	for(i=0; i<5; i++){
		printf("address: %p, value: %d", (ptr+i), *(ptr+i));
	}
	
		return 0;
}
