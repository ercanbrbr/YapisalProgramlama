#include <stdio.h>
#include <stdlib.h>
void menu(){
    int a;
    do{
        if(a!=1&&a!=(-1)){
            printf("Hatal� Girdiniz.\n");
        }
        printf("1-Oyuna Basla (1)\n");
        printf("2-Oyunu Bitir (-1)\n");
        printf("Secim Gir..:");
        scanf("%d",&a);
        if(a==1){
            oyun();
        }
        else if(a==(-1)){
            break;
        }
    }while(1);
}
void oyun(){
    int sayi=7;
    int tahmin;
    do{
        printf("Tahmin..:");
        scanf("%d",&tahmin);
        if(sayi>tahmin){
            printf("\nB�y�k Gir");
        }
        else if(sayi<tahmin){
            printf("\nK�c�k Gir");
        }
    }while(tahmin!=sayi);
    printf("\nDogru Bildiniz.\n");
}
int main()
{
    menu();
}
