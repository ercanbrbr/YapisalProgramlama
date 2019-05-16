#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void harfDonustur(char *str){
    int i=0;
    for(i;str[i]!='\0';i++){
        if(islower(str[i])){
            str[i]=toupper(str[i]);
        }
        else{
            str[i]=tolower(str[i]);
        }
    }
}
void tersten(char *str2, char *str){
    int i=0;
    int c=0;
    char a;
    for(c;str[c]!='\0';c++){} //uzunluk aldýrma
    c-=1;
    for(i;str[i]!='\0';i++){
        str2[c]=str[i];
        c--;
    }

}
int main()
{
    char str[1000]="";
    char str2[1000]="";
    scanf("%s",&str);
    printf("Bos..: %s\n",str2);
    harfDonustur(&str);
    tersten(&str2,&str);
    printf("Tersten..: %s\n",str2);
    printf("\n--------\n");
    printf("Donusmus..: %s",str);
    printf("\n--------\n");
    return 0;
}
