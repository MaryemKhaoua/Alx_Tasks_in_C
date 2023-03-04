#include <stdio.h>

int main()
{
    int N1, N2, N3, swap;
    printf("Enter 3 numbers you want to sort in ascending order: ");
    scanf("%d %d %d", &N1, &N2, &N3);

    if (N1 > N2)
    {
        swap = N1;
        N1 = N2;
        N2 = swap;
    }
    if (N2 > N3)
    {
        swap = N2;
        N2 = N3;
        N3 = swap;
    }
    if (N1 > N2)
    {
        swap = N1;
        N1 = N2;
        N2 = swap;
    }

    printf("The sorted numbers in ascending order are: %d %d %d", N1, N2, N3);
    return 0;
}
