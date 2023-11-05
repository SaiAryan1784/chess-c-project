#include<stdio.h>
#include "defs.h"

int main()
{
    AllInit();

    U64 playBitBoard = 0ULL;

    printf("Start:\n")
    PrintBitBoard(playBitBoard);

    playBitBoard |= (1ULL << SQ64(G2));

    printf("D2 Start:\n\n")
    PrintBitBoard(playBitBoard);

    // for(index = 0; index < BRD_SQ_NUM; ++index){
    //     if(index%10==0) printf("\n");
    //     printf("%5d", Sq64ToSq120[index]);
    // }

    // printf("\n");
    // printf("\n");

    // for(index = 0; index < 64;++index){
    //     if(index%8==0)printf("\n");
    //     printf("%5d",Sq64ToSq120[index]);
    // }

    return 0;
}