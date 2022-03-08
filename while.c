#include<stdio.h>
#include<stdbool.h>
int main(){

int i;
int toplam = 0;
int sayi;

for(i = 0; true; i++ ){

printf("Sayiyi giriniz: (Cikmak icin -1 e basiniz)");
scanf("%d",&sayi);

if(sayi == -1 ){
break;
}

 toplam += sayi;
 


}

printf("%d",toplam);








    return 0;
}