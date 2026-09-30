#include <stdio.h>

int main(void) {
    
    int a, b, c, largest;

    printf("Type three numbers:");
    scanf("%d %d %d", &a, &b, &c);

    largest = a;

    if (b > largest)
        largest = b;
    if (c > largest)
        largest = c;

    printf("The biggest number is: %d\n", largest);

    return 0;
}
