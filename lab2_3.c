#include<stdio.h>
#include<string.h>

int main()
{
    int a, b, c, x, y, z, i;
    char eng[3];

    scanf("%d %d %d", &a, &b, &c);
    fflush(stdin);
    gets(eng);

    if(a<b && a<c && )
        x = a;
    else if(b<a && b<c)
        x = b;
    else if(c<a && c<b)
        x = c;

    if(a>b && a<c)
        y = a;
    else if(b>a && b<c)
        y = b;
    else if(c>a && c<b)
        y = c;

    if(a>b && a>c)
        z = a;
    else if(b>a && b>c)
        z = b;
    else if(c>a && c>b)
        z = c;

    if(eng[0]=='A' && eng[1]=='B' && eng[2]=='C' )
        printf("%d %d %d", x, y, z);
    else if(eng[0]=='A' && eng[1]=='C' && eng[2]=='B' )
        printf("%d %d %d", x, z, y);
    else if(eng[0]=='B' && eng[1]=='A' && eng[2]=='C' )
        printf("%d %d %d", y, x, z);
    else if(eng[0]=='B' && eng[1]=='C' && eng[2]=='A' )
        printf("%d %d %d", y, z, x);
    else if(eng[0]=='C' && eng[1]=='A' && eng[2]=='B' )
        printf("%d %d %d", z, x, y);
    else if(eng[0]=='C' && eng[1]=='B' && eng[2]=='A' )
        printf("%d %d %d", z, y, x);

    return 0;
}
