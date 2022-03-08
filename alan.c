#include <stdio.h>
#define PI 3.14

int main(){
int r;
float alan;
float cevre;
int cember;

printf("Cemberinizin hangi durumunu hesaplamak istiyosunuz?\n1: Alanini\n2: Cevresini\n");
scanf("%d",&cember);
switch (cember)
{
case 1:
printf("Lutfen cemberiniz yaricapini giriniz: ");
scanf("%d",&r);
alan = PI * r * r;
printf("Cemberin alani %.2fdir",alan);
    break;

case 2:
printf("Lutfen cemberiniz yaricapini giriniz: ");
scanf("%d",&r);
cevre = 2 * PI * r;
printf("Cemberin cevresi %2.fdir",cevre);

    break;
}


    return 0;
}