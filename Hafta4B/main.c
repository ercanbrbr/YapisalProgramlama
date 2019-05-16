#include <stdio.h>
#include <stdlib.h>
void menu(){
    int a;
    do{

        printf("1-Asal Sayi Bulma \n");
        printf("2-En Kucuk Sayi Bulma\n");
        printf("3-Cikis\n");
        scanf("%d",&a);
        if(a==1){
            asal();
        }
        else if(a==2){
            min();
        }
        else if(a==(3)){
            break;
        }
        if(a!=1&&a!=2&&a!=3){
            printf("Hatali Girdiniz.\n");
        }
    }while(1);
}
void asal(){
    int a,b;
    int asal=0;
    printf("\n\nAlt ve Ust Sinir Giriniz..:");
    scanf("%d",&a);
    scanf("%d",&b);
    for(int i=a;i<=b;i++){
        asal=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                asal+=1;
            }
        }
        if(asal==2){
            printf("%d ",i);
        }
    }
    printf("\n");
}
void min(){
    int a,b,c,mini;
    printf("Uc Sayi Giriniz..:");
    scanf("%d %d %d",&a,&b,&c);
    mini=a;
    if(b<mini){
        mini=b;
    }
    if(c<mini){
        mini=c;
    }
    printf("\nEn Kucuk Sayi..: %d \n",mini);
}
int main()
{
    menu();
}
