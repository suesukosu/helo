#include <stdio.h>
#include <stdlib.h>

int main()
{
   int kenar1;
   int kenar2;
   int kenar3;

    printf("\n1.kenari giriniz:");
    scanf("%d", &kenar1);

    printf("\n2.kenari giriniz:");
    scanf("%d", &kenar2);

    printf("\n3.kenari giriniz:");
    scanf("%d", &kenar3);

     if(kenar1==kenar2 && kenar3==kenar2){
      printf("\neskenar ucgen girdiniz");
     }
     else if(kenar1==kenar2 || kenar1==kenar3 || kenar3==kenar2)
        printf("\nikizkenar ucgen girdiniz");
     else
        printf("\ncesitkenar ucgen girdiniz");



    return 0;
}
