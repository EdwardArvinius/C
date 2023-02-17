// findMin.c
#include <limits.h>

extern int ArraySize;
extern int Array[];

int Min_Global(){

    int tempMin = INT_MAX;

    for(int i = 0; i < ArraySize; i++){
        if(Array[i] < tempMin){
            tempMin = Array[i];
        }
    }
    return tempMin;
}
