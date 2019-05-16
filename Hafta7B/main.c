#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void ekle(char *d1, char *d2, int say){
    int i=0,j=0;
    for(i;d1[i]!='\0';i++){}
    for(j;j<say;j++){
        d1[i]=d2[j];
        i+=1;
    }
}
int main()
{
    char d1[100]="";
    char d2[100]="";
    char *d1p, *d2p;
    int sayi;

    scanf("%s",&d1);
    scanf("%s",&d2);
    scanf("%d",&sayi);
    d1p=&d1;
    d2p=&d2;
    ekle(d1p,d2p,sayi);
    printf("Yeni Dizi..:%s",d1);
}
