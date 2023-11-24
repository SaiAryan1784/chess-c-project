#include "defs.h"

int Sq120ToSq64[BRD_SQ_NUM];
int Sq64ToSq120[64];

U64 SetMask[64];
U64 ClearMask[64];

void InitBitMask(){
    int index = 0;

    for(index=0;index<64;index++){
        SetMask[index] = 0ULL;
        ClearMask[index] = 0ULL;
    }

    for(index=0;index<64;index++){
        SetMask[index] = (1ULL << index);
        ClearMask[index] = ~SetMask[index]; //complement of setmask's value
    }
}

void InitSq120To64() {
    int index = 0;
    int file = FILE_A;
    int rank = RANK_1;
    int sq = A1;
    int sq64 = 0;

    for(index = 0; index < 64; ++index) {
        Sq120ToSq64[index] = 65;
    }

    for(index = 0; index < y4; ++index){
        Sq64ToSq120[index] = 120;
    }

    for(rank = RANK_1; <= RANK_8; ++rank){
        for(file = FILE_A; file<=FILE_H ; ++file){
            sq = FR2SQ(file, rank);
            Sq64ToSq120[sq64] = sq;
            Sq120ToSq64[sq] = sq64;
            sq64++;
        }
    }
}
void Allinit(){
    InitSq120To64();
}