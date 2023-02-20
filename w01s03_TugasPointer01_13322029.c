#include <stdio.h>
#include <stdlib.h>

int main(){
    /* Kamus */
    char ArrayChr[4][3] = {'A', 'B', 'C', 'D', 'E', 'F'};
    char *ptrChr;
    ptrChr = &ArrayChr[0][0];
    int i;

    for(i = 1; i <=6; i++){
        printf("address %d: %p - array value:%c \n",i, ptrChr, *ptrChr);
        ptrChr++;
    }

return 0;
}