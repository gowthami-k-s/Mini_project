#include <stdio.h>
int main()
{
    //Implementation of stack using array
    int arr[10],i;
    int op,size = 0;
    while(1)
    {
        printf("1. Insertion\n2. Deletion\n3. Printing the Stack\n");
        printf("4. Search element\n5. Exit\nEnter Your choice : ");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
            //Insertion of elements into Stack
            if(size >= 10)
            {
                printf("\"Stack is full\"\n");
                printf("\n");
                break;
            }
            int data;
            printf("Enter the element to insert: ");
            scanf("%d",&data);
            arr[size++] = data;
            printf("\n");
            break;
            case 2:
            //Deletion of elements from Stack
            if(size <= 0)
            {
                printf("\"Stack is empty\"\n");
                printf("\n");
                break;
            }
            printf("\"Deleted element: %d\"\n", arr[size - 1]);
            printf("\n");
            size--;
            break;
            case 3:
            //Print Stack elements
            if(size == 0)
            {
                printf("\"Stack is empty\"\n");
                printf("\n");
                break;
            }
            printf("Elements of Stack : ");
            for(i=0 ; i<size ; i++)
            {
                printf("%d ",arr[i]);
            }
            printf("\n\n");
            break;
            case 4:
            //search element in stack
            if(size == 0)
            {
                printf("\"Queue is empty\"\n");
                printf("\n");
                break;
            }
            int n;
            printf("Enter element to search : ");
            scanf("%d",&n);
            for(i=0 ; i<size ; i++)
            {
                if(n == arr[i])
                {
                    printf("Element found\n");
                    printf("\n");
                    break;
                }
            }
            printf("Element not found\n");
            printf("\n");
            break;
            case 5:
            //Exit stack
            printf("\"Exiting.......\"\n");
            return 0;
            default:
            printf("\"Invalid input\"\n");
            printf("\n");
            break;
        }
    }
} 