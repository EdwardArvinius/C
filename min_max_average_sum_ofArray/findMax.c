//findMax.c
#include <limits.h>

extern int ArraySize;
extern int Array[];

int Max_Global(){

    int tempMax = INT_MIN;

    for(int i = 0; i < ArraySize; i++){
        if(Array[i] > tempMax){
            tempMax = Array[i];
        }
    }
    return tempMax;
}

