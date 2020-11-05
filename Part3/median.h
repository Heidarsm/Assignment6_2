template<typename T>
T getMedian(T* currArray, int arraySize)
{
    int i,j;
    T tmp;

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
    return currArray[(arraySize/2)];
}


