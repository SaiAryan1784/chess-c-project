#include<stdio.h>
#include "defs.h"

int main(){
    AllInit();
    
    int PieceOne = rand();
    int PieceTwo = rand();
    int PieceThree = rand();
    int PieceFour = rand();

    printf("PieceOne:%X\n",PieceOne);
    printf("PieceTwo:%X\n",PieceTwo);
    printf("PieceThree:%X\n",PieceThree);
    printf("PieceFour:%X\n",PieceFour);

    int key = PieceOne ^ PieceTwo ^ PieceThree ^ PieceFour ;
    int TempKey = PieceOne;
    TempKey ^= PieceTwo;
    TempKey ^= PieceThree;
    TempKey ^= PieceFour;

    
    return 0;
}