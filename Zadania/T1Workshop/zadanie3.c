#include <stdio.h>
//Poproś użytkownika o podanie 1 liczby całkowitej N.
//Wypisz ciąg fibonacziego do liczby N.

int fib(int *prev, int *now, int n) {
    int result = 0;
    for(int i = 1; i < n; i++) {
        result = *prev + *now;
        *prev = *now;
        *now = result;
    }
    return result;
}

int main(int argc, char** argv) {
    int prev = 0;
    int now = 1;
    int n = 0;
    printf("Podaj liczbe N: ");
    scanf("%d", &n);
    if(n == 0) {
        printf("F = 0");
        return 0;
    } else if (n == 1 || n == 2) {
        printf("F = 1");
        return 0;
    }
    printf("Odpowiedz: %d\n", fib(&prev, &now, n));
}

