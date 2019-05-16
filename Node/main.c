#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
}liste;

struct node *ilk=NULL,*yeni,*gecici,*silgecici,*son;

void ekle(int say){
    yeni=(struct node*)malloc(sizeof(liste));
    yeni->data=say;
    yeni->next=NULL;
    if(ilk==NULL){
        ilk=yeni;
        son=ilk;
    }
    else{
        son->next=yeni;
        son=son->next;
    }
}

void listele(){
    gecici=ilk;
    printf("Liste..:");
    while(gecici!=NULL){
        printf(" %d ",gecici->data);
        gecici=gecici->next;
    }
    printf("\n");
}

void sil(say){
    if(ilk->data==say){
        silgecici=ilk;
        ilk=ilk->next;//ikinci elemanýn pointerý
        free(silgecici);//eski ilk nodeu siliyor
    }
    else{
        gecici=ilk;
        while(gecici->next!=NULL){
            if(gecici->next->data==say){
                silgecici=gecici->next;
                if(son=silgecici){
                    son=gecici;
                }
                gecici->next=silgecici->next;
                free(silgecici);
                break;
            }
            gecici=gecici->next;
        }
    }
}
int main()
{
    int say;
    int data;
    while(say!=4){
        printf("1-Ekle\n2-Cikar\n3-Listele\n4-Cik");
        scanf("%d",&say);
        if(say==1){
            printf("\nSayi Giriniz..:");
            scanf("%d",&data);
            ekle(data);
        }
        else if(say==2){
            printf("\nSayi Giriniz..:");
            scanf("%d",&data);
            sil(data);
        }
        else if(say==3){
            listele();
        }
    }

}
