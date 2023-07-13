#include <stdio.h>
#include <cstdlib>
#include <ctime>
 
void shuffle(int* arr, int N)
{
    srand(time(NULL));
 
    for (int i = N - 1; i >= 1; i--)
    {
        int j = rand() % (i + 1);
 
        int tmp = arr[j];
        arr[j] = arr[i];
        arr[i] = tmp;
    }
}
 
int main()
{
    int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
 
    shuffle(arr, 10);
 
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);
 
    printf("\n");
 
    return 0;
}
