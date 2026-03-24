#include <stdio.h>
#include <stdlib.h>
#include<math.h>
double addition(double x,double y){ double total = x + y;
return total;
}
double substraction(double x, double y){double total = x-y;
return total;
}
double multiplication(double x, double y){double total = x*y;
return total;
}
double division(double x, double y){double total = x/y;
return total;
}
int main(){
   double a,b;
   char choice;
   char operation;
   do{
   
   printf("\ninput two numbers:");
   scanf("%lf %lf", &a, &b);
   printf("enter ur arithmetic operation:");
   scanf(" %c", &operation);
   switch(operation){
     case'+':
       printf("%.2lf\n", addition(a, b));
       break;
     case'-':
       printf("%.2lf\n", substraction(a, b));
       break;
     case'*':
       printf("%.2lf\n", multiplication(a, b));
       break;
       case'/':
         if(b==0){
           printf("error, please enter another number!\n");
       }
       else{ 
       printf("%.2lf\n", division(a, b));
       }
         break;
       }
   
  printf("\ndo u want to continue? (y/n)");
  scanf(" %c", &choice);
  } while(choice == 'y' || choice == 'Y');
  
  printf("\ngoodbye!\n");
  
  
  
  
  return 0;
}
