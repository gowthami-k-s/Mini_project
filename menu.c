#include <stdio.h>
int main()
{
    char op;
    int i=1;
    int item,quant,price=0;
    float total=0;
    printf("<---------WElOCOME TO HOTEL--------->\n");
    printf("Select what you want to eat \n");
    do
    {
        printf("1. Starter\n2. Main course\n3. Dessert\n4. Exit\n");
        scanf(" %c",&op);
        switch(op)
    {
        case '1':
        printf("You have chosen starter\n");
        printf("1.Gobi 65 = 100\n2.Chicken 65 = 120\n3.Chilli chicken = 150\n");
        printf("Item: ");
        scanf("%d",&item);
        printf("Quantity: ");
        scanf("%d",&quant);
        if(item==1)
        {
            price=100*quant;
            printf("Price: %d\n",price);
        }
        else if(item==2)
        {
            price=120*quant;
            printf("Price: %d\n",price);
        }
        else if(item==3)
        {
            price=150*quant;
            printf("Price: %d\n",price);
        }
        else
        {
            printf("Noo item mentioned");
        }
        break;
        case '2':
        printf("You have chosen main course\n");
        printf("1.Chicken biryani = 200 \n2.Naan and Butter chicken = 180\n3.Thali = 320\n");
        printf("Item: ");
        scanf("%d",&item);
        printf("Quantity: ");
        scanf("%d",&quant);
        if(item==1)
        {
            price=200*quant;
            printf("Price: %d\n",price);
        }
        else if(item==2)
        {
            price=180*quant;
            printf("Price: %d\n",price);
        }
        else if(item==3)
        {
            price=320*quant;
            printf("Price: %d\n",price);
        }
        else
        {
            printf("Noo item mentioned");
        }
        break;
        case '3':
        printf("You have chosen desserts\n");
        printf("1.Ice cream = 50 \n2.Gulaab jamun = 60 \n3.Falooda = 100\n");
        printf("Item: ");
        scanf("%d",&item);
        printf("Quantity: ");
        scanf("%d",&quant);
        if(item==1)
        {
            price=50*quant;
            printf("Price: %d\n",price);
        }
        else if(item==2)
        {
            price=60*quant;
            printf("Price: %d\n",price);
        }
        else if(item==3)
        {
            price=100*quant;
            printf("Price: %d\n",price);
        }
        else
        {
            printf("Noo item mentioned");
        }
        break;
        case '4':
        printf("<--THANK YOU VISIT AGAIN-->\n");
        break;
        default:
        printf("No items listed");
        break;
    }
    total+=price;
    i++;
}while(i != 4);
    printf("==========================\n");
    printf("Total bill with gst = %g\n",(float)total-(total*0.18));
    printf("==========================\n");
}