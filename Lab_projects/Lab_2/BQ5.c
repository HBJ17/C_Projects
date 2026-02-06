#include <stdio.h>

int runnerUp(int score[], int n)
{
    int temp;


    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(score[j] > score[j + 1])
            {
                temp = score[j];
                score[j] = score[j + 1];
                score[j + 1] = temp;
            }
        }
    }


    return score[n - 2];
}

int main()
{
    int n;
    int score[20];

    printf("Enter number of teams: ");
    scanf("%d", &n);

    printf("Enter team scores:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &score[i]);

    printf("Runner-up score is: %d", runnerUp(score, n));

    return 0;
}
