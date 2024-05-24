#include <stdio.h>
#include <string.h>

//Zadanie 7 (6 z +):
//Zapytaj użytkownika o 1 liczbę N.
//Po otrzymaniu tej liczby stwórz tablicę o rozmiarze tej liczby.
//Poproś użytkownika o wypełnienie tej tablicy (pytaj go po kolei o każdą zmienną).
//Użytkownik poda Ci N stringów.
//Posortuj te stringi w zależności od długości, wypisz je po kolei od najkrótszego do najdłuższego.

int main(int argc, char** argv) {
    int n;
    char temp[64];
    printf("Podaj liczbe N: ");
    scanf("%d", &n);
    char arr [n][64];
    for(int i = 0; i < n; i++) {
        printf("Podaj string nr: %d ", i);
        scanf("%s", arr[i]);
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(strlen(arr[i]) < strlen(arr[j])) {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
    for(int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}