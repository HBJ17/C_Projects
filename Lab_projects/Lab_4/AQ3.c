#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *url;
    url = (char*)malloc(200 * sizeof(char));

    printf("Enter URL: ");
    scanf("%s", url);

    char shortURL[8];
    strncpy(shortURL, url, 7);
    shortURL[7] = '\0';

    printf("Short URL: %s\n", shortURL);

    free(url);

    return 0;
}