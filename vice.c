#include<stdio.h>
#include "defs.h"

int main(){
    AllInit();
    int index = 0;
    U64 playBitBoard = 0ULL;

    for(int index=0;i<64;index++){
        printf("Index: %d",index);
        PrintBitBoard(SetMask[index]);
        printf("\n");
    }

    return 0;
}