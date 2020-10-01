#define LIMIT 100
void display()
{
int stack[LIMIT], top, i;
if(top == -1)
{
printf("Stack underflow\n"); // Stack is empty
}
else if(top > 0)
{
printf("The elements of the stack are:\n");
for(i = top; i >= 0; i--) // top to bottom traversal
{
printf("%d\n",stack[i]);
}
}
}