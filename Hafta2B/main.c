#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yas,kan,test;
    printf("Kisinin Yasi..:");
    scanf("%d",&yas);
    printf("Kisinin Kan Basinci..:");
    scanf("%d",&kan);
    printf("Kisinin Test Sonuclari..:");
    scanf("%d",&test);
    if(kan<100){
        printf("Kisi Sagliklidir");
    }
    else{
        if(yas>50){
            printf("Kisi Hastadir");
        }
        else if(yas>35&&test>150){
            printf("Kisi Hastadir");
        }
        else if(yas<=35&&test<100){
            printf("Kisi Sagliklidir");
        }
    }


    int a;
    scanf("%d",&a);
    if(a<1000||a>9999){
        printf("Hatali Girdiniz!");
    }
    else{
        a=a+(a/10);
        if(a%2==0){
            printf("Sayi Cift");
        }
        else{
            printf("Sayi Tek");
        }
    }
}
