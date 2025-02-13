#include <stdio.h>
#include <time.h>

void fibonacci(int n) {
    int a = 0, b = 1, next;
    printf("Fibonacci Series: %d %d ", a, b);
    for (int i = 2; i < n; i++) {
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int n = 10;
    clock_t start = clock();
    fibonacci(n);
    clock_t end = clock();
    printf("Execution Time: %lf seconds\n", (double)(end - start) / CLOCKS_PER_SEC);
    return 0;
}