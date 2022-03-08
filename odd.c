#include <stdio.h>
int main(){

int a;
int toplam = 0;

int sayi[6];

printf("\nIlk sayiyi giriniz: ");
scanf("%d",&sayi[0]);
printf("\nIkinci sayiyi giriniz: ");
scanf("%d",&sayi[1]);
printf("\nUcuncu sayiyi giriniz: ");
scanf("%d",&sayi[2]);
printf("\nDorduncu sayiyi giriniz: ");
scanf("%d",&sayi[3]);
printf("\nBesinci sayiyi giriniz: ");
scanf("%d",&sayi[4]);
printf("\nAltinci sayiyi giriniz: ");
scanf("%d",&sayi[5]);
for(a = 0; a < 6; a++){

if((sayi[a]%2)!=0)
{

toplam += sayi[a];




}

}

printf("Girdiginiz sayilardan tek olanlarinin toplami %ddir",toplam);








    return 0;
}