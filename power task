#include <stdio.h>
//
int power(int a, int n) {
    if (n != 0)
        return (a * power(a, n - 1));
    else
        return 1;
}

int main() {
    int a, n, res;
    printf("Please, enter the base number: ");
    scanf("%d", &a);
    printf("Please, enter the power number: ");
    scanf("%d", &n);
    res = power(a, n);
    printf("%d^%d = %d", a, n, res);
    return 0;
}
