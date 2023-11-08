#include<stdio.h>
#include "defs.h"

int main()
{
    AllInit();

    U64 playBitBoard = 0ULL;

    playBitBoard |= (1ULL << SQ64(D2));
    playBitBoard |= (1ULL << SQ64(D3));
    playBitBoard |= (1ULL << SQ64(D4));

    // printf("Start:\n")
    // PrintBitBoard(playBitBoard);

    // printf("D2 Start:\n\n")


    // printf("\n");
    // PrintBitBoard(playBitBoard);


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

    // int count = CNT(playBitBoard);

    // printf("Count: %d\n",count);

    // int index = POP(&playBitBoard);
    // printf("index:%d\n",index);
    // PrintBitBoard(playBitBoard);

    // int count = CNT(playBitBoard);
    // printf("Count: %d\n",count);

    // int sq64 = 0;
    // while(playBitBoard){

    // }

    return 0;
}