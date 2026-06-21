#include <stdio.h>
int main()
{
    char op;
    int item,quant;
    int price=0;
    int g=0,c=0,cc=0,cb=0,nb=0,t=0,ic=0,gj=0,f=0;
    float total=0,gst=0;
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
            g+=quant;
        }
        else if(item==2)
        {
            price=120*quant;
            c+=quant;
        }
        else if(item==3)
        {
            price=150*quant;
            cc+=quant;
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
            cb+=quant;
        }
        else if(item==2)
        {
            price=180*quant;
            nb+=quant;
        }
        else if(item==3)
        {
            price=320*quant;
            t+=quant;
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
            ic+=quant;
        }
        else if(item==2)
        {
            price=60*quant;
            gj+=quant;
        }
        else if(item==3)
        {
            price=100*quant;
            f+=quant;
        }
        else
        {
            printf("Noo item mentioned");
        }
        break;
        case '4':
        printf("\n");
        break;
        default:
        printf("No items listed");
        break;
        }
        total+=price;
    }while(op != '4');
    printf("Bill summary\n");
    if(g>0)
    {
        printf("Gobi 65 X %d = %d\n",g,g*100);
    }
    if(c>0)
    {
        printf("Chicken 65 X %d = %d\n",c,c*120);
    }
    if(cc>0)
    {
        printf("Chilli chicken X %d = %d\n",cc,cc*150);
    }
    if(cb=0)
    {
        printf("Chicken biryani  X %d = %d\n",cb,cb*200);
    }
    if(nb>0)
    {
        printf("Naan and Butter chicken X %d = %d\n",nb,nb*180);
    }
    if(t>0)
    {
        printf("Thali X %d = %d\n",t,t*320);
    }
    if(ic>0)
    {
        printf("Ice cream   X %d = %d\n",ic,ic*50);
    }
    if(gj>0)
    {
        printf("Gulaab jamun X %d = %d\n",gj,gj*60);
    }
    if(f>0)
    {
        printf("Falooda X %d = %d\n",f,f*100);
    }
    printf("==========================\n");
    printf("<--THANK YOU VISIT AGAIN-->\n");
    printf("Sub total = %g\n",total);
    gst=total*0.18;
    printf("Gst = %g\n",gst);
    printf("Total bill with gst = %g\n",total+gst);
    printf("==========================\n");
}