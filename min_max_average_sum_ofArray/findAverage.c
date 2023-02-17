// findAverage.c
extern int ArraySize;
extern int Array[];

float Avg_Global(){

    float intTot = 0.0;
    float Avg = 0.0;

    for(int i = 0; i < ArraySize; i++){
            intTot = intTot + Array[i];
    }

    return intTot / ArraySize;
}
