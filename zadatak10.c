#include "stdio.h"
#include "string.h"

void main() {
    
    FILE* fp1 = fopen("recenice.txt", "r");
    FILE* fp2 = fopen("sadrze.txt", "w");
    
    char recenica[300]="";
    char rec[50];
    
    int m;
    int tacno = 0;
    
    scanf("%d", &m);
    printf("\n");
    //recenice u fajlu razdvaja tacka "."
    do {
        fscanf(fp1, "%s", &rec);

        strcat(recenica, rec);
        strcat(recenica, " ");

        for (int i = 0; i < strlen(rec); i++) {
            if (rec[i] == '.') {
                if (strlen(recenica) > m) { 
                    printf("%s", recenica); //debug
                    fprintf(fp2, "%s", recenica);
                }
                for (int j = 0; j < strlen(recenica); j++) {
                    recenica[j] = 0;
                }
            }
            else tacno = 1;
        }
    } while (!feof(fp1));

    fclose(fp1);
    fclose(fp2);
}
