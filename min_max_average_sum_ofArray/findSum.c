// findSum.c
extern int ArraySize;
extern int Array[];

int Sum_Global(){
    int Sum = 0;
    for(int i = 0; i < ArraySize; i++){
        Sum = Sum + Array[i];
    }

    return Sum;
}
