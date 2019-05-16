#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct cls{
    char name[50];
    float no;
    float maas;
};
void funk1(struct cls a[]){
    int i=0;
    for(i;i<5;i++){
        scanf("%s",&a[i].name);
        scanf("%f",&a[i].no);
        scanf("%f",&a[i].maas);
    }
}
void funk2(struct cls a[]){
    int i=0;
    for(i;i<5;i++){
        printf("%s  ",a[i].name);
        printf("%.2f    ",a[i].no);
        printf("%.2f    ",a[i].maas);
        printf("\n");
    }
}
void funk3(struct cls a[]){
    int i=0,j=0;
    int min=9999999999;
    int i2=0;
    char yedek[50];
    int yedek1,yedek2;
    for(i;i<5;i++){
        for(j=i;j<5;j++){
            if(a[j].maas<min){
                i2=j;
                min=a[j].maas;
            }
        }
        strcpy(yedek,a[i].name);
        yedek1=a[i].no;
        yedek2=a[i].maas;
        strcpy(a[i].name,a[i2].name);
        a[i].no=a[i2].no;
        a[i].maas=a[i2].maas;
        strcpy(a[i2].name,yedek);
        a[i2].no=yedek1;
        a[i2].maas=yedek2;
        i2=0;
        min=99999999;
    }

}
int main()
{
    struct cls b[5];
    int sayi;
    while(1){
        printf("1-Calisan bilgi \n2-Bilgileri Yazdirma \n3-Ogrenci Siralama");
        scanf("%d",&sayi);
        if(sayi==1){
            funk1(b);
        }
        else if(sayi==2){
            funk2(b);
        }
        else{
            funk3(b);
        }

    }
}
