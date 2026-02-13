#include<stdio.h>
int main() {
float weight, height, bmi;
printf("hello! pls enter ur weight in kg and height in meters:\n");
scanf("%f %f", &weight, &height);
bmi= weight / (height*height);
printf(" ur bmi is:%.2f\n", bmi);
if (bmi<18.5){
printf("Underweight, u should eat more healthy\n");
}
else if ( bmi>=18.5 && bmi<=24.9){
printf("perfect body! stay healthy\n");
}
else if (bmi>= 25 && bmi <=29.9){
printf("over weight! eat more healthy meals\n");
}
else {
 printf(" please visit ur doctor!\n");
}
printf(" ty to visit my program!\n");

return 0;
}
