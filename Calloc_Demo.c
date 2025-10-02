#include<stdio.h>
#include<stdlib.h>

int main()
{
    int length = 0;
    int *Arr = NULL;

    printf("Enter The Number Of Elements :\n");
    scanf("%d",&length);

    // Step 1 : Allocate the memory.
    Arr = (int*)calloc(length , sizeof(int));
    if(Arr==NULL)
    {
        printf("Unable To Allocate Memory\n");
    }
    else
    {
        printf("Memory Gets Successfully Allocated\n");
    }
    
    // Step 2 : Use the memory.

    // Step 3 : Free the memory.
    free(Arr);

    return 0;
}