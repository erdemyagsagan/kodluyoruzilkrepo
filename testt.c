#include <stdio.h>
#define PI 3
int main()
{
 int islem;
 int tutar;
 int bakiye = 1000;
 int havale;

 printf("1: Para Cekme\n2: Para yatirma\n3: Havale\n Yukaridakilerden girmek istediginiz islemi seciniz: ");

 
 scanf("%d",&islem);
 switch (islem)
 {
 case(1):
 printf("Kac para cekmek istiyosunuz: ");
 scanf("%d",&tutar);
 if (tutar > bakiye)
 printf(" Gecersiz islem");
 bakiye -=tutar;
 printf("Islem basariyla gerceklestirildi guncel bakiyeniz: %d",bakiye);
 break; 
   case(2):
   printf("Kac para yatirmak istiyosunuz: ");
   scanf("%d",&tutar);
   bakiye += tutar;
   printf("Islem basariyla gerceklestirildi guncel bakiyeniz: %d",bakiye);
break;
 case(3):
 printf("Kac para havale istiyosunuz: ");
 scanf("%d",&havale);
 printf("Havaleniz basariyla gerceklesmistir.");
 break;


 


 }















   return 0;
}