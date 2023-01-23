#include <stdio.h>
int main()
 {

    int n, i, sum = 0;

    printf("\n Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) 
    {
        sum += i;
    }

    printf("\n Sum = %d", sum);
    return 0;
}
