#include <stdio.h>
#include <stdlib.h>

int main()
{
    int not;
    scanf("%d",&not);

    if(not>90){
        printf("AA");
    }
    else if(not>85){
        printf("BA");
    }
    else if(not>80){
        printf("BB");
    }
    else if(not>70){
        printf("CB");
    }
    else if(not>60){
        printf("CC");
    }
    else if(not>55){
        printf("DC");
    }
    else if(not>50){
        printf("DD");
    }
    else{
        printf("FF");
    }


    int a;
    scanf("%d",&a);
    if(a<100||a>999){
        printf("Hatalý Girdiniz!");
    }
    else{
        a=a/10;
        if(a%2==0){
            printf("Sayý Çift");
        }
        else{
            printf("Sayý Tek");
        }
    }
}
