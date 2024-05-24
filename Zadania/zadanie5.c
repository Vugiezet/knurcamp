#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

//Stwórz strukturę czlowiek która będzie zawierała poniższe pola:
//imie
//        wiek
//zawod
//        Stwórz funkcję zapisującą do pliku strukturę człowiek (nazwa pliku podana jako argument programu numer 2).
//Pod 1 argumentem podaj rodzaj operacji.
//Np: ODCZYT i ZAPIS
//        A 2 argument tego programu to nazwa pliku na którym mamy wykonać tą operację.
//Stwórz funkcję odczytującą strukturę z pliku i zwracającą te dane jako strukturę.
//Stwórz funkcję wypisującą zawartość struktury w konsoli.
//Wywołaj ją po odczytaniu pliku.

struct czlowiek {
    char* imie;
    int wiek;
    char* zawod;
};

void fileFunction(char* operation, char* fileName, struct czlowiek* czl) {
    if(strcmp("ZAPIS", operation) == 0) {
        FILE* plik = fopen(fileName, "w");
        char string[1025];
        sprintf(string, "Imie: %s\nWiek: %d\nZawód: %s", czl->imie, czl->wiek, czl->zawod);
        fwrite(string, strlen(string), 1, plik);
        fclose(plik);
    } else if(strcmp("ODCZYT", operation) == 0) {
        char bufor[1025];
        FILE* plik = fopen(fileName, "r");
        fread(bufor, sizeof(char), 1025, plik);
        printf("%s", bufor);
        fclose(plik);
    }
}

int main(int argc, char** argv) {
    if(argc != 3) {
        printf("Za mało argumentów");
        return -1;
    }
    struct czlowiek czl, *p_czl = &czl;
    czl.wiek = 2137;
    czl.imie = "Knasdfasdfasdfasdfadfsasdfasdfasdfdfasasdfasdfur";
    czl.zawod = "Dla rodziny";
    fileFunction(argv[1], argv[2], p_czl);
    return 0;
}