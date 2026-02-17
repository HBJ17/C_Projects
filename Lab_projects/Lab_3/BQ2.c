#include <stdio.h>

int main() {
    float a[6]={137.4,155.2,149.3,160.0,155.6,149.7};
    float b[6]={80.9,92.62,97.93,100.25,68.95,120.0};
    float angle[6]={0.78,0.89,1.35,0.90,1.25,1.75};
    float area,max=0;
    int i,largest=0;

    for(i=0;i<6;i++) {
        area = 0.5*a[i]*b[i]*angle[i]; 
        printf("Plot %d Area = %.2f\n",i+1,area);
        if(area>max) {
            max=area;
            largest=i;
        }
    }

    printf("Largest Plot = %d",largest+1);
    return 0;
}
