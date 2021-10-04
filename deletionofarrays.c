
//Deleting the array and printing it.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int u;
    printf("Enter no. of elements for the array:\n");
    scanf("%d",&u);
    int arraydelete[u],i,pos;
    printf("Enter the elements to the array:\n");
    for (i=0;i<u;i++)
    scanf("%d",&arraydelete[i]);
    printf("\nDisplaying the array data...\n");
    for(i=0;i<u;i++)
    printf("%d ",arraydelete[i]);
    // Logic
    printf("\nEnter the position:\n");
    scanf("%d",&pos);
    if ((pos>u)&&(pos<0))
    {
    printf("INVALID!!!");
    exit(1);
    }
    else
    {
        for(i=pos;i<u;i++)
        arraydelete[i]=arraydelete[i+1];
        u--;
    }
    printf("\nDisplaying the deleted array data...\n");
    for(i=0;i<u;i++)
    printf("%d ",arraydelete[i]);

    return 0;
}