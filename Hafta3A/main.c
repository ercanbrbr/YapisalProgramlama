#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ay;
    printf("Bir sayi giriniz..:");
    do{
        scanf("%d",&ay);
        if(ay==1||ay==3||ay==5||ay==7||ay==8||ay==10||ay==12){
            printf("%d. Ay 31 gundur",ay);
        }
        else if(ay==2||ay==4||ay==6||ay==9||ay==11){
            printf("%d. Ay 30 gundur",ay);
        }
        else{
            printf("\nHATA! Tekrar Gir..:");
        }

    }while(ay>12);
}
