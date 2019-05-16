#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\\n Yeni Satýra Geçer \n");

    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d \n",(a+b));

    int c,d,f;
    scanf("%d %d %d",&c,&d,&f);
    c-=1;
    d+=2;
    f*=3;
    double avg=(float)(c+d+f)/3;
    printf("%.2f",avg);
    return 0;
}
