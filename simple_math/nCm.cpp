#include<stdio.h>
#include<math.h>
using namespace std;
// A upgraped version of handshake problem
// Now we calculate how many ways we can choose a combination group of m objects from n objects
// Combination formula: nCm = n! / (m! * (n - m)!)
int nCm(int n, int m)
{
    if (m > n) return 0; // Not possible to choose more objects than available
    if (m == 0 || m == n) return 1; // Only one way to choose none or all objects
    if (m == 1) return n; // n ways to choose one object from n

    // Calculate nCm using the formula: n! / (m! * (n - m)!)
    long long numerator = 1;
    long long denominator = 1;

    // Calculate numerator as n * (n-1) * ... * (n-m+1)
    for (int i = 0; i < m; i++)
    {
        numerator *= (n - i);
        denominator *= (i + 1); // Calculate m! simultaneously
    }

    return numerator / denominator;
}
int main()
{
    printf("____________________________________________________________");
    printf("\nCalculate nCm (combinations of m from n)\n");
    int n, m;
    printf("Enter total number of objects (n): ");
    scanf("%d", &n);
    while (n < 0)
    {
        printf("Number of objects must be non-negative. Enter again: ");
        scanf("%d", &n);
    }
    printf("Enter number of objects to choose (m): ");
    scanf("%d", &m);
    while (m < 0 || m > n)
    {
        printf("Number of objects to choose must be between 0 and n. Enter again: ");
        scanf("%d", &m);
    }
    int result = nCm(n, m);
    printf("Number of ways to choose %d objects from %d objects: %d\n", m, n, result);
    printf("____________________________________________________________");
    return 0;
}
