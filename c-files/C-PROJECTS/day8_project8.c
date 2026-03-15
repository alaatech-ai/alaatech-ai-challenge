#include <stdio.h>
#include <stdlib.h>

int main() {
	
int a=0, b=1, sum=0;

while(a<=100)	{
	if(a%2 != 0){
     printf(" %d ",a);
 }
	 sum=b+a;
	 a=b;
     b=sum; 
     
}

int first = 1;
while(first<500){
	if(first%2 != 0){
		printf(" %d ", first);
	}
	first=first*3;
}
	
		return 0;
} 
