#include <stdio.h>

int main(){
int dizi[3];
int i,n;
printf("\n\n*******Girilen sayilarin en buyugunu tespit etmek *********\n\n\n");
printf("3 tane sayi giriniz: ");
scanf("%d %d %d ",&dizi[0], &dizi[1], &dizi[2]);
for(i=0;i<3;i++){
if(dizi[i]>n){

n=dizi[i];
}
}


printf("En buyuk sayi %d dir.",n);
    return 0;
}