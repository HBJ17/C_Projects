#include <stdio.h>
#define max 10
int stack[max];
int top = -1;

void push(int value) {
    if(top == max -1) {
        printf("Stack overflow\n");
    } else {
        top++;
        stack[top] = value;
    }
}

void pop() {
    if(top == -1) {
        printf("Stack Underflow\n");
    } else {
        printf("Popped value = %d\n", stack[top]);
        top--;
    }
}

void peek() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Top element: %d\n", stack[top]);
    }
}

int main() {
    printf("\nMenu\n");
    printf("1. View stack\n");
    printf("2. Push\n");
    printf("3. Pop\n");
    printf("4. Peek\n");
    printf("5. Exit\n");

    int choice, value;
    while(1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                if(top == -1) {
                    printf("Stack is empty\n");
                } else {
                    printf("Stack elements: ");
                    for(int i = top; i >= 0; i--) {
                        printf("%d ", stack[i]);
                    }
                    printf("\n");
                }
                break;
            case 2:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 3:
                pop();
                break;
            case 4:
                peek();
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}