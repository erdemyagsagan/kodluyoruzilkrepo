#include <stdio.h>
int main(){

int month;
printf("1-12 arasinda bir sayi girin ve hangi aya karsilik geldigini ogrenin: ");
scanf("%d",&month);
switch (month)
{
case 1:
printf("Girdiginiz sayi Ocak ayina denk geliyor");
    break;
case 2:
printf("Girdiginiz sayi Subat ayina denk geliyor");
 break;
    case 3:
printf("Girdiginiz sayi Mart ayina denk geliyor");
    break;
    case 4:
printf("Girdiginiz sayi Nisan ayina denk geliyor");
    break;
    case 5:
printf("Girdiginiz sayi Mayis ayina denk geliyor");
    break;
    case 6:
printf("Girdiginiz sayi Haziran ayina denk geliyor");
    break;
    case 7:
printf("Girdiginiz sayi Temmuz ayina denk geliyor");
    break;
    case 8:
printf("Girdiginiz sayi Agustos ayina denk geliyor");
    break;
    case 9:
printf("Girdiginiz sayi Eylul ayina denk geliyor");
    break;
    case 10:
printf("Girdiginiz sayi Ekim ayina denk geliyor");
    break;
    case 11:
printf("Girdiginiz sayi Kasim ayina denk geliyor");
    break;
    case 12:
printf("Girdiginiz sayi Aralik ayina denk geliyor");
    break;

default:
    printf("Girdiginiz sayiya denk gelen bir ay yok");
    
        
    break;




}







 return 0;
}