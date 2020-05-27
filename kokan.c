#include "stdio.h"
#include "string.h"

int main() {
    char R[100], mem;
    scanf("%s", R);
    int lenght = strlen(R);
    int i = 0;
    do 
    {
        mem = R[lenght - i - 1];
        R[lenght - i - 1] = R[i];
        R[i] = mem;
        i++;
    } while (i != (lenght / 2));
    printf("%s", R);
    return 0;
}
