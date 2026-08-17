#include <stdio.h>

int main() {
    long long n;
    int steps = 0;

    printf("Enter a positive integer: ");
    if (scanf("%lld", &n) != 1 || n <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }

    while (n > 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        steps++;
    }

    printf("Number of steps required: %d\n", steps);
    return 0;
}