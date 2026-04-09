#include <stdio.h>
#define max 100

int arr[max],n;

int add() {
    printf("Enter the number of elements you want to add = ");
    scanf("%d",&n);

    for(int i=0; i<n; i++) {
        printf("Enter element %d = ",i+1);
        scanf("%d",&arr[i]);
    }

    return 0;
}

int display() {
    for(int i=0; i<n; i++) {
        printf("%d ",arr[i]);
    }

    return 0;
}

int insert() {
    int pos,val;

    printf("Enter the Element you want to insert = ");
    scanf("%d",&val);
    printf("Enter the position where you want to insert the element = ");
    scanf("%d",&pos);

    for(int i=n-1; i>=pos; i--) {
        arr[i+1] = arr[i];
    }
    arr[pos] = val;
    n++;

    return 0;
}

int delete() {
    int pos;

    printf("Enter the position of the element you want to delete = ");
    scanf("%d",&pos);

    for(int i=pos; i<n-1; i++) {
        arr[i] = arr[i+1];
    }
    n--;

    return 0;
}

int search() {
    int val;
    printf("Enter the element you want to search = ");
    scanf("%d",&val);

    for(int i=0; i<n; i++) {
        if(arr[i] == val) {
            printf("Element found at position %d",i+1);
            return 0;
        }
    }
    printf("Element not found.");
    return 0;
}

int main() {
    int choice;

    while(1) {
        printf("\n1. Add\n2. Display\n3. Insert\n4. Delete\n5. Search\n6. Exit\n");
        printf("Enter your choice = ");
        scanf("%d",&choice);

        switch(choice) {
            case 1:
                add();
                break;
            case 2:
                display();
                break;
            case 3:
                insert();
                break;
            case 4:
                delete();
                break;
            case 5:
                search();
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice.");
        }
    }
}