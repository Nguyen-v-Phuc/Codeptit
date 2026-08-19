#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int i;

int fib(int n)
{
    if (n == 1 || n == 2) return 1;
    int a = 0, b = 1, c;
    for (i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main()
{
    int T;
    scanf("%d", &T);
    while(T--) {
        int a, b;
        scanf("%d %d", &a, &b);
        for(i = a; i <= b; i++) {
            if(i > a) printf(" ");
            printf("%d", fib(i));
        }
        printf("\n");
    }
    return 0;
}
