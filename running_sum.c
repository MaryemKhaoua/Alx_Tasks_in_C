#include <stdio.h>

int main() {
    int Nbr, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &Nbr);

    while(Nbr >= 0)
    {
        sum += Nbr;
        printf("Running sum: %d\n", sum);
        printf("Enter a number: ");
        scanf("%d", &Nbr);
    }

    printf("final result: %d\n", sum);

    return 0;
}