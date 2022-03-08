#include<stdio.h>
int main(){

int n,i,ort;
int toplam ;
printf("\n\nKac tane sayi girmek istediginizi yazin: ");
scanf("%d",&n);
int dizi[n];
for(i=1;i<n+1;i++){

    printf("%d. sayiyi giriniz= ",i);
    scanf("%d",&dizi[i]);
    toplam = toplam + dizi[i];
}

ort = toplam / 2;
printf("Girdiginiz %d tane sayinin aritmetik orlamasi %d dir",n,ort);
    return 0;
}