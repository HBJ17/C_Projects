#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct patient {
	char name[50];
	int age;
	char symptoms[50];
};

int main() {
	int n,i;
	
	printf("Enter the number of Patients = ");
	scanf("%d",&n);
	
	struct patient *p = malloc(n * sizeof(struct patient));
	
	for (i = 0; i < n; i++) {
        printf("\nEnter details for patient %d \n", i + 1);
	
        printf("Name: ");
        getchar();
        fgets(p[i].name, sizeof(p[i].name), stdin);
        

        printf("Age: ");
        scanf("%d", &p[i].age);

        printf("Symptoms: ");
        getchar();
        fgets(p[i].symptoms, sizeof(p[i].symptoms), stdin);
	
	
	if(strstr(p[i].symptoms, "cold") && strstr(p[i].symptoms, "cough") && strstr(p[i].symptoms, "body pain")) {
		printf("Patient has Fever\n");
	}
	else if (strstr(p[i].symptoms, "cold") && strstr(p[i].symptoms, "cough")) {
		printf("Patient has Flu\n");
	}
	else{
		printf("Condition not identified\n");
	}
}
	
	printf("\nPatient Records\n");
    for (i = 0; i < n; i++) {
        printf("Patient %d\n", i + 1);
        printf("Name: %s\n", p[i].name);
        printf("Age: %d\n", p[i].age);
        printf("Symptoms: %s\n", p[i].symptoms);
    }
    
    free(p);
    
    
	return 0;
}




