#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int half;
int menu()
{
    int a;
    int r1,r2;
    int s1,s2;
    do{
        printf("1-Kuvvet Bul\n");
        printf("2-Toplam Bul\n");
        printf("3-Cikis\n");
        scanf("%d",&a);
        if(a==1){
            printf("S1 ve S2 Girin..:");
            scanf("%d %d",&s1,&s2);
            printf("%d'in %d kuvveti = %d \n\n",s1,s2,kuvvet(s1,s2));
        }
        else if(a==2){
            r1=(rand()%100)+1;
            r2=(rand()%101)+100;
            printf("%d + %d = %d \n\n",r1,r2,toplam(r1,r2));
        }
        else if(a==3){
            break;
        }
        if(a!=1&&a!=2&&a!=3){
            printf("Hatali Girdiniz.\n");
        }
    }while(1);
}
int kuvvet(int a,int b){
    if(b==1){
        return a;
    }
    else{
        return a*kuvvet(a,(b-1));
    }
}
int toplam(int a,int b){
    if(b==0){
        return 0;
    }
    else{
        return a+toplam(a,(b-1));
    }
}
int main()
{
    menu();
}
