#include<stdio.h>

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int c, int d) {
    if (c == 0 || d == 0)
     return 0;
  
  return (c / gcd(c, d)) * d;
    
}

int main() {
    int x, y;
    printf("Enter 2 numbers:\n");
    
    if (scanf("%d %d", &x, &y) != 2) {
        printf("Invalid input!\n");
        return 1;
    }

    printf("GCD: %d\n", gcd(x, y));
    printf("LCM: %d\n", lcm(x, y));
  
    return 0;
}
