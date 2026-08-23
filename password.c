#include <stdio.h>
#include <string.h>

int main() 
{
    char password[20];

    printf("Enter password: ");
    scanf("%19s", password);

    if (strcmp(password, "1234") == 0) 
	{
        printf("Access Granted!\n");
    } else 
	{
        printf("Wrong Password!\n");
    }

    return 0;
}
