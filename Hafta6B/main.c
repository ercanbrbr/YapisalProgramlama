#include <stdio.h>
#include <stdlib.h>

void func(int dizi[],int start,int boyut){
    if(start<boyut){
        int i=start+1;
        int min=dizi[start];
        int temp=0,tempi=start;
        for(i;i<boyut;i++){
            if(dizi[i]<min){
                min=dizi[i];
                tempi=i;
            }
        }
        temp=dizi[start];
        dizi[start]=min;
        dizi[tempi]=temp;
        int a=start+1;
        func(dizi,a,boyut);
        return;
    }
}
int main(void) {
    int boyut=5;
    int dizi[5];
    int i;
    for(i=0;i<boyut;i++){
        scanf("%d",&dizi[i]);
    }
    func(dizi,0,boyut);
    for(i=0;i<boyut;i++){
        printf("%d",dizi[i]);
    }
}
