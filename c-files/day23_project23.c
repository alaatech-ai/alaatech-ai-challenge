#include <stdio.h>
#include<stdbool.h>

int main() {
char sentence[100];
fgets(sentence, 100, stdin);
char *p = sentence ;
bool flowing = true;
while( *p ){
   if( *p == ' '){
       char prev = *(p-1);
       char next = *(p+1);
       if (prev >= 'A' && prev <= 'Z') prev += 32;
       if (next >= 'A' && next <= 'Z') next += 32;
       if (prev != next) {
           flowing = false;
           break;
       }
    
   }
    
    p++;
}
if(flowing ){
    printf("true\n");
}
else{
    printf("false\n");
}

    return 0;
}
