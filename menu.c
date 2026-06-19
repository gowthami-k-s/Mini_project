#include <stdio.h>
int main()
{
    char op;
    int item,quant;
    printf("<---------WElOCOME TO HOTEL--------->\n");
    printf("Select what you want to eat \n");
    printf("1. Starter\n2. Main course\n3. Dessert\n4. Exit\n");
    scanf("%c",&op);
    switch(op)
    {
        case '1':
        printf("You have chosen starter\n");
        printf("1.Gobi 65 = 100\n2.Chicken 65 = 120\n3.Chilli chicken = 150");
        printf("Item: ");
        scanf("%d",&item);
        printf("Quantity: ");
        scanf("%d",&quant);
        if(item==1)
        {
            int price=100*quant;
            printf("Price: %d\n",price);
        }
        else if(item==2)
        {
            int price=120*quant;
            printf("Price: %d\n",price);
        }
        if(item==3)
        {
            int price=150*quant;
            printf("Price: %d\n",price);
        }
        break;
        case '2':
        printf("You have chosen main course\n");
        printf("1.Chicken biryani = 200 \n2.Naan and Butter chicken = 180\n3.Thali = 320");
        printf("Item: ");
        scanf("%d",&item);
        printf("Quantity: ");
        scanf("%d",&quant);
        if(item==1)
        {
            int price=200*quant;
            printf("Price: %d\n",price);
        }
        else if(item==2)
        {
            int price=180*quant;
            printf("Price: %d\n",price);
        }
        if(item==3)
        {
            int price=320*quant;
            printf("Price: %d\n",price);
        }
        break;
        case '3':
        printf("You have chosen desserts\n");
        printf("1.Ice cream = 50 \n2.Gulaab jamun = 60 \n3.Falooda = 100");
        printf("\nItem: ");
        scanf("%d",&item);
        printf("Quantity: ");
        scanf("%d",&quant);
        if(item==1)
        {
            int price=50*quant;
            printf("Price: %d\n",price);
        }
        else if(item==2)
        {
            int price=60*quant;
            printf("Price: %d\n",price);
        }
        if(item==3)
        {
            int price=100*quant;
            printf("Price: %d\n",price);
        }
        break;
        default:
        printf("<--THANK YOU VISIT AGAIN-->\n");
        break;
    }
}