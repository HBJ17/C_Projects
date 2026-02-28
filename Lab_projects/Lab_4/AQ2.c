#include <stdio.h>

char* getDomain(char *email)
{
    while(*email != '\0')
    {
        if(*email == '@')
        {
            return email + 1;
        }
        email++;
    }
    return NULL;
}

int main()
{
    char email[100];
    char *domain;

    printf("Enter email: ");
    scanf("%s", email);

    domain = getDomain(email);

    if(domain != NULL)
        printf("Domain = %s", domain);
    else
        printf("Invalid email");

    return 0;
}