#include <stdio.h>

int sumMultiples(int num){
    int sum=0;
    for(int i=1;i<=num;i++)
        if(i%3==0 || i%5==0)
            sum+=i;
    return sum;
}

int main() {
    int num;
    int result;
    printf("Enter number = ");
    scanf("%d",&num);

    result = sumMultiples(num);
    printf("Result = %d",result);

    return 0;
}