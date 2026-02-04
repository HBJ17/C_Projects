#include <stdio.h>

float highest(float t[],int n) {
    float max = t[0];

    for(int i=1;i<n;i++) {
        if (t[i] > max) {
            max = t[i];
        }
    }
    return max;
}

float lowest(float t[],int n) {
    float min = t[0];

    for(int i=1;i<n;i++) {
        if (t[i] < min) {
            min = t[i];
        }
    }
    return min;
}

int main() {
    float t[30];
    int i;

    for(i=1;i<=30;i++) {
        printf("Day %d Temperature = ",i);
        scanf("%f",&t[i]);
    }

    printf("Highest Temperature Recorded = %f", highest(t,30));
    printf("\nLowest Temperature Recorded = %f", lowest(t,30));

    return 0;
}

