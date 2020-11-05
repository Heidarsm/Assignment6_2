#include "median.h"
#include<stdint.h>
#include<iostream>

int main()
{

    //test array
    int test[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int retVal;

    retVal = getMedian(test, size);

    printf("The median is: %d \n", retVal);

    return 0;
}