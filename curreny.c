#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    float inr;
    int i;

    char *currency[] = 
	{
        "USD", "EUR", "GBP", "JPY", "AUD", "CAD"
    };

    float rate[] = 
	{
        0.012,    // USD
        0.011,    // EUR
        0.0095,   // GBP
        1.75,     // JPY
        0.018,    // AUD
        0.016     // CAD
    };

    printf("Enter amount in INR: ");
    scanf("%f", &inr);

    srand(time(NULL));
    printf("\nINR %.2f converted to 6 currencies:\n\n", inr);

    for (i = 0; i < 6; i++) 
	{
        printf("%s : %.2f\n", currency[i], inr * rate[i]);
    }

    return 0;
}
