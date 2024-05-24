#include <stdio.h>

//Zadanie 6:
//Zapytaj użytkownika o 1 liczbę N.
//Po otrzymaniu tej liczby stwórz tablicę o rozmiarze tej liczby.
//Poproś użytkownika o wypełnienie tej tablicy (pytaj go po kolei o każdą zmienną).
//Użytkownik poda Ci N liczb całkowitych.
//Posortuj te liczby od największej do najmniejszej i je wypisz w tej kolejności.

int main(int argc, char** argv) {
    int n;
    printf("Podaj liczbe N: ");
    scanf("%d", &n);
    if(n <= 0) {
        printf("Wielkość tablicy musi być większa od 0");
        return -1;
    }
    int d[n], temp = 0;
    for(int i = 0; i < n; i++) {
        printf("Podaj liczbe nr %d ", i + 1);
        scanf("%d", &d[i]);
    }
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(d[j] > d[i]) {
                temp = d[i];
                d[i] = d[j];
                d[j] = temp;
            }
        }
    }
    printf("Posortowana tablica:\n");
    for(int k = 0; k < n; k++) {
        printf("%d\n", d[k]);
    }
    return 0;
}

