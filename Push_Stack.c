#include <stdio.h>
#include <stdlib.h>

#define Max_Stack 100 

int stack[Max_Stack]; 
int top = -1; 

void push(int x) {
    if (top == Max_Stack - 1) {
        printf("Overflow\n");
    } else {
        top++;
        stack[top] = x;
        printf("%d pushed to stack\n", x);
    }
}

void printStack() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    
    printf("Stack elements are:\n");
    for (int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}

int main() {
    int choice, value, numElements;

    while (1) {
        printf("1. Push multiple elements\n2. Print Stack\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("How many elements do you want to push? ");
                scanf("%d", &numElements);
                
                for (int i = 0; i < numElements; i++) {
                    printf("Enter value %d: ", i + 1);
                    scanf("%d", &value);
                    push(value);
                }
                break;
            case 2:
                printStack();
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
