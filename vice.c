#include<stdio.h>
#include "defs.h"

int main()
{
    AllInit();

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

    int num = 2;
    int nuts = 4;

    ASSERT(num==nuts);

    return 0;
}