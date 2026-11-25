#include <stdio.h>
#include <windows.h>

int main() {
    int n;
    double S;
    long long operations = 0;

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    printf("Enter n: ");
    scanf("%d", &n);

    operations++;
    if (n < 1) {
        printf("Error: n має бути натуральним числом\n");
        return 1;
    }

    S = 0;
    operations++;
    int i = 1;
    operations++;

    for (; i <= n; i++) {
        operations += 2;

        double factorial = 1;
        operations++;

        int j = 1;
        operations++;

        for (; j <= 2 * i; j++) {

            operations += 3;

            factorial *= j;
            operations += 2;
            operations++;
        }

        operations += 2;


        double term = 0.5 / factorial;
        operations += 2;

        operations += 2;
        if (i % 2 == 1) {
            S += term;
            operations += 2;
        }
        else {
            S -= term;
            operations += 2;
        }

        operations++;
    }

    operations++;

    operations += 6;
    
    printf("S = %.7f\n", S);
    printf("Operations = %lld\n", operations);

    return 0;
}