#include <stdio.h>
#include <math.h>
using namespace std;
//Source: https://www.geeksforgeeks.org/handshake-problem/
// Function to calculate the number of handshakes
// that can occur in a group of n people
// Each person shakes hands with every other person exactly once

//Idea: For each person, they can shake hands with (n-1) others.
//Since each handshake involves two people, we divide the total by 2
//This is simple mathematical formula: nC2 = n(n-1)/2 to calculate combinations of 2 from n
int handshake(int n)
{
    return (n * (n - 1)) / 2;
}
int main()
{
    printf("____________________________________________________________");
    printf("\nHandshake Problem\n");
    int n;
    printf("Enter number of people: ");
    scanf("%d", &n);
    while (n < 2)
    {
        printf("Number of people must be at least 2. Enter again: ");
        scanf("%d", &n);
    }
    int result = handshake(n);
    printf("Number of handshakes: %d\n", result);
    printf("____________________________________________________________");
    return 0;
}