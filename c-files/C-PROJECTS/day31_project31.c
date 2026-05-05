#include <stdio.h>
#include <string.h>

 int main(){
 
int n = 50;
printf("%d\n", *&n); 

char* s ="hi!";
printf("%p\n", s);
printf("%p\n", &s[1]);
printf("%p\n", &s[2]);
printf("%s\n", s);

char* d = "hello";
printf("%c\n", *d);
printf("%c\n", *(d+1));
printf("%c\n", *(d+2));
printf("%c\n", *(d+3));


    char t[100]; 
    char f[100]; 

    printf("t: ");
    scanf("%s", t); 

    printf("f: ");
    scanf("%s", f);

    if (strcmp(t, f) == 0) {
        printf("same\n");
    } else {
        printf("diff\n");
    }



return 0;
}
