#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int a,sayi,tahmin;
    do{
        sayi=rand();
        printf("%d",sayi);
        do{
            printf("Tahmin Gir..:");
            scanf("%d",&tahmin);
            if(tahmin<sayi){
                printf("Daha Büyük Tahmin Yap\n");
            }
            else if(tahmin>sayi){
                printf("Daha Küçük Tahmin Yap\n");
            }
        }while(sayi!=tahmin);
        printf("Tebrikler Bildiniz!\nDevam(1) Bitir(-1)");
        scanf("%d",&a);
    }while(a==1);
}
