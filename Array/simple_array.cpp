#include<stdio.h>
#include<math.h>
using namespace std;
// A simple implementation of array in C++

int sumOfArray(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int maxInArray(int arr[], int n)
{
    int maxVal = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
        }
    }
    return maxVal;
}
int minInArray(int arr[], int n)
{
    int minVal = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < minVal)
        {
            minVal = arr[i];
        }
    }
    return minVal;
}
int main()
{
    printf("____________________________________________________________");
    printf("\nSimple Array Implementation\n");
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    while (n <= 0)
    {
        printf("Number of elements must be positive. Enter again: ");
        scanf("%d", &n);
    }
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("You entered the following elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nSum of array elements: %d", sumOfArray(arr, n));
    printf("\nMaximum element in array: %d", maxInArray(arr, n));
    printf("\nMinimum element in array: %d", minInArray(arr, n));
    printf("\n____________________________________________________________");
    return 0;
}