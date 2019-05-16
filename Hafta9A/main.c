#include <stdio.h>
#include <stdlib.h>
struct ogr{
    int data;
    struct ogr *sonraki;
}liste;

struct ogr *ilk=NULL,*yeni,*gecici,*sonra;
void listele(){
    gecici=ilk;
    while(gecici!=NULL){
        printf("%d",gecici->data);
        gecici=gecici->sonraki;
    }
}
void basaEkle(int say){
    yeni=(struct ogr*)malloc(sizeof(liste));
    yeni->data=say;
    yeni->sonraki=NULL;
    if(ilk==NULL){
        ilk=yeni;
    }
    else{
        sonra=ilk;
        ilk=yeni;
        ilk->sonraki=sonra;
    }
}
int main()
{
    int i=0,say;
    for(i;i<5;i++){
        scanf("%d",&say);
        basaEkle(say);
    }
    listele();
}
