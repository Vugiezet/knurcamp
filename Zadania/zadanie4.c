#include <stdio.h>
//Zadanie 4:
//Poproś użytkownika o podanie 2 stringów.
//Połącz te 2 stringi ze sobą i zapisz je do pliku dupa.txt.

int main(int argc, char** argv) {
    char stringFirst[1024];
    char stringScnd[1024];
    FILE* plik = fopen("menel.txt", "w");
    printf("Podaj pierwszy string: ");
    scanf("%s", stringFirst);
    printf("Podaj drugi string: ");
    scanf("%s", stringScnd);
    printf("%s\n%s", stringFirst, stringScnd);
    fprintf(plik, "%s%s", stringFirst, stringScnd);
    fclose(plik);
    return 0;
}
