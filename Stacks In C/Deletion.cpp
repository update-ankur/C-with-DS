#include <stdio.h>
#define LIMIT 100
void pop()
{
int stack[LIMIT], top, element;
if(top == -1)
{
printf("Stack underflow\n");
}
else
{
element=stack[top];
printf("The deleted item is %d\n",stack[top]);
top--; // The element below the topmost element is deleted
}
}
