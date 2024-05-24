#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    if(argc != 4) {
        printf("Nie podano wystarczającej ilości argumentów");
        return -1;
    }
    int n1 = atoi(argv[1]), n2 = atoi(argv[3]);
    int wynik = 0;
    if(*argv[2] == '*') {
        wynik = n1 * n2;
    } else if(*argv[2] == '/') {
        if(n2 == 0) {
            printf("Nie dziel przez 0");
            return -1;
        }
        wynik = n1 / n2;
    } else if(*argv[2] == '+') {
        wynik = n1 + n2;
    } else if(*argv[2] == '-') {
        wynik = n1 - n2;
    }
    printf("Wynik: %d", wynik);
}