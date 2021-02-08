#include<stdio.h>

int main()
{
    char promotion;
    float time;

    scanf("%c", &promotion);
    fflush(stdin);
    scanf("%f", &time);

    if(promotion=='A')
    {
        if(time>200)
            printf("%.2f", 199+(((int)time-200)*3)+(((time-(int)time)/0.6)*3));
        else
            printf("199.00");
    }
    else
    {
        if(time>400)
            printf("%.2f", 299+(((int)time-400)*2)+(((time-(int)time)/0.6)*2));
        else
            printf("299.00");
    }

    return 0;
}

