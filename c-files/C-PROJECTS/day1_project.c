#include<stdio.h>
#include<math.h>
int main() {
double a,b,c,d, x1, x2;
printf("enter a b c:\n");
scanf("%lf %lf %lf", &a ,&b ,&c);
printf("enter ur quadratic equation:%.2lf x²+ %.2lfx +%.2lf \n");
d=(b*b)-(4*a*c);
if(d>0){
x1=(-b-sqrt(d))/(2*a);
x2=(-b+sqrt(d))/(2*a);
printf("two solutions: x1= %.2lf and x2=%.2lf\n");
}
else if(d==0){
x1=x2=(-b/2*a);
printf("one solution: x1=%.2lf",x1);
}
else {
printf("no real solution");
}


return 0;
}
