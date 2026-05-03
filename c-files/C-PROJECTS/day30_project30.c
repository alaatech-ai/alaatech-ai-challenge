#include <stdio.h>
#include <math.h>
double delta(double a, double b, double c){
	return (b*b)-(4*a*c);
}
void res (double a, double b, double c){
double d = delta(a, b, c);
if(d>0){
	double x1 =( -b-sqrt(d))/2*a;
	 double x2 = (-b+sqrt(d))/ 2*a;
	printf("x1= %.2lf\n x2= %.lf\n", x1, x2);
	
}
else if(d == 0){
	double x= -b/(2*a);
	printf("x= %.2lf\n", x);
}
else{
	printf("no real solutions\n");
}
}
int main(){
double a, b, c;
printf("enter ur quadratic equation:\n");
scanf("%lf %lf %lf", &a, &b, &c);
 if(a!=0){
 	res(a, b, c);
 }
 else{
 	printf("error plz check ur eq!");
 }
	
	
	
	
	
	return 0;
}
