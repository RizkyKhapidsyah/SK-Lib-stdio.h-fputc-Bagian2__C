#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    FILE* fp = fopen("test.txt", "r");

    if (fp == NULL) {
        return 0;
    }
        
    do {
        char c = fgetc(fp);

        if (feof(fp)) {
            break;
        }
            
        printf("%c", c);
    } while (1);

    fclose(fp);

    _getch();
    return(0);
}