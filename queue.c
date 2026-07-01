#include <stdio.h>
int main()
{
    //Implementation of Queue using array
    int arr[5];
    int op,size = 0;
    while(1)
    {
        printf("1. Insertion\n2. Deletion\n3. Printing the Queue\n4. Exit\nEnter Your choice : ");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
            //Insertion of elements into Queue
            if(size >= 5)
            {
                printf("\"Queue is full\"\n");
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
            //Deletion of elements from Queue
            if(size <= 0)
            {
                printf("\"Queue is empty\"\n");
                printf("\n");
                break;
            }
            printf("\"Deleted element: %d\"\n", arr[0]);
            printf("\n");
            for(int i=0 ; i<size ; i++)
            {
                arr[i]=arr[i+1];
            }
            size--;
            break;
            case 3:
            //Print Queue elements
            if(size == 0)
            {
                printf("\"Queue is empty\"\n");
                printf("\n");
                break;
            }
            printf("Elements of Queue : ");
            for(int i=0 ; i<size ; i++)
            {
                printf("%d ",arr[i]);
            }
            printf("\n\n");
            break;
            case 4:
            //Exit Queue
            printf("\"Exiting.......\"\n");
            return 0;
            default:
            printf("\"Invalid input\"\n");
            printf("\n");
            break;
        }
    }
} 