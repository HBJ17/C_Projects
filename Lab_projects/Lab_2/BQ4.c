#include <stdio.h>

void sort(int a[], int n)
{
    int temp;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main()
{
    int a[20], b[20], c[40];
    int n1, n2, n3;

    printf("Enter size of list 1: ");
    scanf("%d", &n1);

    printf("Enter elements of list 1:\n");
    for(int i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of list 2: ");
    scanf("%d", &n2);

    printf("Enter elements of list 2:\n");
    for(int i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    sort(a, n1);
    sort(b, n2);

    for(int i = 0; i < n1; i++)
        c[i] = a[i];

    for(int i = 0; i < n2; i++)
        c[n1 + i] = b[i];

    n3 = n1 + n2;

    sort(c, n3);

    printf("Merged sorted list:\n");
    for(int i = 0; i < n3; i++)
        printf("%d ", c[i]);

    return 0;
}
