#include <stdio.h>
int main()
{
    int i, N, nbr, sum = 0;
    printf("Enter the number of elements :  ");
    scanf("%d", &N);
    printf("Enter %d numbers : \n", N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &nbr);
        sum += (nbr * nbr);
    }
     printf("The sum of squares of the %d numbers is: %d\n", N, sum);
    return 0;

}