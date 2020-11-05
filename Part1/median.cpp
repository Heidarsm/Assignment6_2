#include<stdint.h>
#include<iostream>

uint8_t getMedian(uint8_t currArray[], int arraySize);
void testFunction();

int main()
{
    testFunction();
    return 0;
}


uint8_t getMedian(uint8_t currArray[], int arraySize)
{
    int i,j;
    uint8_t tmp;
    
    //INSERTION SORT
    for(i = 1; i < arraySize; i++)
    {
        tmp = currArray[i];
        j = i;

        while(j > 0 && currArray[j - 1] > tmp)
        {
            currArray[j] = currArray[j - 1];
            j--;
        }
        currArray[j] = tmp;
    }
    
    //since division by 2 of any odd number will always yield X.5, we can assume that it will be rounded up to X + 1 which would be the median of the array;
    return currArray[(arraySize/2)];

}

void testFunction()
{
    uint8_t testArray[5];
    int temp;

    for (int i = 0; i < 5; i++)
    {
        std::cin>>temp;
        testArray[i] = temp;
    }
    printf("The input array is: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",testArray[i]);
    }
    printf("\n");
    int arraySize = sizeof(testArray) / sizeof(uint8_t);

    int returnValue = getMedian(testArray, arraySize);
    printf("The median is: %d \n", returnValue);

    // I originally intended to use sizeof() inside the median function, but when i did the calculateions there it always returned the size of the first array i inserted into the function
    // so in this case I always got arraySize = 5, even though I inserted an array of size 11. So i changed the function to take in array and it's size,
    // calculated the size outside the function and sent it to the median function and that worked.


    // uint8_t returnValue;

    // uint8_t array1[] = {9,8,7,6,5,4,3,2,1};
    // int arraySize1 = sizeof(array1) / sizeof(uint8_t);

    // uint8_t array2[] = {254,132,21,0,32,53,64};
    // int arraySize2 = sizeof(array2) / sizeof(uint8_t);

    // uint8_t array3[] = {2,3,1};
    // int arraySize3 = sizeof(array3) / sizeof(uint8_t);

    // uint8_t array4[] = {4,3,2,63,42,12,0,12,133,232,69};
    // int arraySize4 = sizeof(array4) / sizeof(uint8_t);

    // uint8_t array5[] = {1,232,233,234,235};
    // int arraySize5 = sizeof(array5) / sizeof(uint8_t);

    // returnValue = getMedian(array1, arraySize1);
    // printf("The median is: %d \n", returnValue);

    // returnValue = getMedian(array2, arraySize2);
    // printf("The median is: %d \n", returnValue);

    // returnValue = getMedian(array3, arraySize3);
    // printf("The median is: %d \n", returnValue);

    // returnValue = getMedian(array4, arraySize4);
    // printf("The median is: %d \n", returnValue);

    // returnValue = getMedian(array5, arraySize5);
    // printf("The median is: %d \n", returnValue);

    


}