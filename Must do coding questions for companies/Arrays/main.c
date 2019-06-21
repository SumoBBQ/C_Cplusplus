#include <stdio.h>
#define LENGHT 10000001
unsigned int arr[LENGHT];
unsigned int startIdx, endIdx;

void printResult(char result)
{
    if (result == 0)
        printf("-1\n");
    else
    {
        printf("%d %d\n", startIdx, endIdx);
    }

}

void sumSubArr(unsigned int arr[], unsigned len, unsigned int sum)
{
    //unsigned int sumArr = 0;
    for (unsigned int i = 0; i < len; i++)
    {
        startIdx = i + 1;
        endIdx = -1;
        unsigned int j;
        j = i;
        unsigned int sumArr = 0;
        while (sumArr < sum)
        {
            sumArr += arr[j];
            if (sumArr == sum)
                {
                    endIdx = j + 1;
                    break;
                }
            if ((j == len) && (sumArr < sum))
                break;
            j++;
        }
        if (endIdx != -1)
            break;
    }
    if (endIdx == -1)
        printResult(0);
    else
        printResult(1);
}

int main()
{
    unsigned int numTest;
    scanf("%d", &numTest);
    unsigned int j;
    for (j = 0; j < numTest; j++)
    {
        unsigned int len;
        scanf("%d", &len);
        unsigned int sum;
        scanf("%d", &sum);

        unsigned int i;
        for (i = 0; i < len; i++)
        {
            scanf("%d", &arr[i]);
        }
        sumSubArr(arr, len, sum);
    }
}
