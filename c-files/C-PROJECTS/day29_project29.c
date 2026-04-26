#include <stdio.h>
#include <stdlib.h>
int npw(int base, int power){
     int res = 1;
	if(power == 0){
		return 1;
	}
	else{
		for(int i = 1; i<= power; i++){
			res *= base;
		}
		return res;
	}
	
}
int main(){
	int base, power;
	printf("enter 2 integers: nb and power:\n");
	scanf("%d %d", &base, &power);
	printf("npw(%d, %d)=%d", base, power, npw(base, power));
	
	return 0;
}
