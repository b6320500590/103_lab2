#include<stdio.h>

int main()
{
    char name;
    int day, arm=92;

    scanf("%c", &name);
    fflush(stdin);
    scanf("%d", &day);

    if(name >= 'A' && name <= 'I')
    {
        if(day%2 == 1)
        {
            if(day%10 != 5)
                printf("(^_^)");
            else
                printf("%c(^_^)/", arm);
        }
        else
        {
            if(day%10 != 5)
                printf("{@_@}");
            else
                printf("%c{@_@}/", arm);
        }
    }

    else if(name >= 'J' && name <= 'R')
    {
        if(day%2 == 1)
        {
            if(day%10 != 5)
                printf("(*o*)");
            else
                printf("%c(*o*)/", arm);
        }
        else
        {
            if(day%10 != 5)
                printf("{*v*}");
            else
                printf("%c{*v*}/", arm);
        }
    }

    else if(name >= 'S' && name <= 'Z')
    {
        if(day%2 == 1)
        {
            if(day%10 != 5)
                printf("(T_T)");
            else
                printf("%c(T_T)/", arm);
        }
        else
        {
            if(day%10 != 5)
                printf("{x_x}");
            else
                printf("%c{x_x}/", arm);
        }
    }

    return 0;
}

