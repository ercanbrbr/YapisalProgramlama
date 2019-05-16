#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int half;
int menu()
{
    int a;
    int r1,r2;
    do{
        if(a!=1&&a!=2&&a!=3){
            printf("Hatali Girdiniz.\n");
        }
        printf("1-Asal Sayi\n");
        printf("2-Carpim bulma\n");
        printf("3-Cikis\n");
        scanf("%d",&a);
        if(a==1){
            printf("Sayi Gir..:");
            int sayi;
            scanf("%d",&sayi);
            half=sayi/2;
            int mi=asal(sayi,half);
            if(mi==1){
                printf("Sayi Asal\n\n");
            }
            if(mi==0){
                printf("Sayi Asal Degil\n\n");
            }
        }
        else if(a==2){
            srand(time(NULL));
            r1=1+(rand()%20);
            srand(time(NULL));
            r2=2+(rand()%98);
            printf("Sayi Bir..: %d Sayi Iki..: %d \n",r1,r2);
            printf("Sonuc..:%d \n\n\n",carpim(r1,r2));
        }
        else if(a==3){
            break;
        }
    }while(1);
}
/*int asal(int s1){
    if(half==1)
    {
        return 1;
    }
    else if(s1 %half==0)
    {
         return 0;
    }
    else{
         half =half -1;
         asal(s1);
    }
}*/
int asal(int s1,int yari){
    if(s1<2){
        return 0;
    }
    if(yari==1){
        return 1;
    }
    if(s1%yari==0){
        return 0;
    }
    return asal(s1,yari-1);
}
int carpim(int a,int b){
    if(b==0){
        return 0;
    }
    return (a+carpim(a,(b-1)));
}
int main()
{
    menu();
}
