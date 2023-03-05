#include <iostream>
int main()
{
    char A[15];
    char B[15];
    std::cin >> A;
    int i, j;
    for (i = 0; A[i] != '\0'; i++)
    {
    }
    i--;
    int l = i;
    // method-1
    for (j = 0; i >= 0; i--, j++)
    {
        B[j] = A[i];
    }
    B[j] = '\0';

    // method-2
    char t;
    int k;
    for (k = 0; l > k; k++, l--)
    {
        t = A[k];
        A[k] = A[l];
        A[l] = t;
    }
    std::cout << B << std::endl;
    std::cout << A << std::endl;
}