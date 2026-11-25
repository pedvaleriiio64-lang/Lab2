#include <stdio.h>
#include <windows.h>

int main() {
    int n;
    double S;
    double term;
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

    S = term = 0.25;
    operations += 2;

    int i = 2;
    operations++;

    for (; i <=n; i++){
        operations += 2;

        term = -term / ((2 * i)*(2 * i - 1));
        operations += 7;
        S += term;
        operations += 2;

        operations++;
    }
    operations++;

    // Це опепрації для виведдення результатів і тд
    operations += 6;
    
    printf("S = %.7lf\n", S);
    printf("Operations = %lld\n", operations);

    return 0;
}