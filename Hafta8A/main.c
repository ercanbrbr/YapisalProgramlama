#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct ogr{
    char name[50];
    float no;
    float vize;
    float fnl;
};
void funk1(struct ogr a[]){
    int i=0;
    for(i;i<5;i++){
        scanf("%s",&a[i].name);
        scanf("%f",&a[i].no);
        scanf("%f",&a[i].vize);
        scanf("%f",&a[i].fnl);
    }
}
void funk2(struct ogr a[]){
    int i=0;
    for(i;i<5;i++){
        printf("%s",a[i].name);
        printf("%.2f",a[i].no);
        printf("%.2f",a[i].vize);
        printf("%.2f",a[i].fnl);
        printf("\n");
    }
}
void funk3(struct ogr a[]){
    printf("asda");
    int i=0,j=0;
    int min=100;
    int i2=0;
    char yedek[50];
    int yedek1,yedek2,yedek3;
    for(i;i<5;i++){
        for(j=i;j<5;j++){
            if(a[j].fnl<min){
                i2=j;
                min=a[j].fnl;
            }
        }
        strcpy(yedek,a[i].name);
        yedek1=a[i].no;
        yedek2=a[i].vize;
        yedek3=a[i].fnl;
        strcpy(a[i].name,a[i2].name);
        a[i].no=a[i2].no;
        a[i].vize=a[i2].vize;
        a[i].fnl=a[i2].fnl;
        strcpy(a[i2].name,yedek);
        a[i2].no=yedek1;
        a[i2].vize=yedek2;
        a[i2].fnl=yedek3;
        i2=0;
        min=100;
    }

}
int main()
{
    struct ogr b[5];
    int sayi;
    while(1){
        printf("1-Ogrenci bilgi \n2-Bilgileri Yazdýrma \n3-Ogrenci Sýralama");
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
