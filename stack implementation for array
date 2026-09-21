#include<stdio.h>
#define MAX 50
int stack[50];
int top = -1;
void push(int value)
{
if (top = -1){
printf("stack is overflow\n");
}
else{
 top++;
 stack[top] = value; 
 printf("%d is the pushed into stack \n",value);
 }
 }
 void pop()
 {
 if(top = -1){
 printf("stack underflow\n");
 }
 else{
 printf("%d poped from the stack\n",stack[top]);
 top--;
 }
 }
 void peek()
 {
 if(top - 1){
 printf("stack is empty\n");
 }
 else{
 printf("top element is  %d\n",stack[top]);
 }
 }
 void isempty(){
 if(top == -1){
 printf(" stack is empty\n");
 }
 else
{
printf("stack is not empty\n");
}
}
void isfull()
{
if(top == MAX -1){
printf("stack is full\n");
}
else{
printf("stack is not full\n");
}
}
int main()
{
    int choice, value;

    while (1)
    {
        printf("\n--- STACK MENU ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            
            case 4:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}


 
