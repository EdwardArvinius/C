//---main.c---

#include <stdio.h>
#include <stdlib.h>

#include "findSum.h"
#include "findAverage.h"
#include "findMax.h"
#include "findMin.h"

int Array[10] = {1,2,3,4,5,6,7,8,9,10};
int ArraySize = (sizeof(Array)/ sizeof(int));

int main()
{
    printf("Sum: %i\n", Sum_Global());
    printf("Average: %f\n", Avg_Global());
    printf("FindMax: %i\n", Max_Global());
    printf("FindMin: %i\n", Min_Global());
}
