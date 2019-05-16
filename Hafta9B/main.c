#include <stdio.h>
#include <stdlib.h>
struct asd{
    struct asd *prev;
    int data;
    struct asd *next;
}ikiliste;
struct asd *ilk=NULL,*gecici,*yeni,*sonra,*once=NULL;
void ekle(int say){
    yeni=(struct asd*)malloc(sizeof(struct asd));
    yeni->data=say;
    yeni->prev=NULL;
    yeni->next=sonra;
    if(ilk==NULL){
        ilk=yeni;
    }
    else{
        sonra=ilk;
        ilk=yeni;
        ilk->next=sonra;
        sonra->prev=ilk;
    }
}
void listele(){
    gecici=ilk;
    while(gecici!=NULL){
        if(gecici->prev==NULL){
            printf("Data..: %d  Prev..: %s",gecici->data,"NULL");
        }
        else{
            printf("Data..: %d  Prev..: %d",gecici->data,gecici->prev->data);
        }
        printf("\n");
        gecici=gecici->next;
    }
}
int main()
{
    int i=0,say;
    for(i;i<5;i++){
        scanf("%d",&say);
        ekle(say);
    }
    listele();
}
