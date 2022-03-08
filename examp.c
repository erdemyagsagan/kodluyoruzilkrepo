#include <stdio.h>

int main()
{
int tek[100],cift[100],n,i,degerler[100];

printf("Kac tane sayi girmek istiyorsunuz ?:  ");
scanf("%d",&n);

printf("Bu program tek ve cift sayilari ayiracaktir\nIstediginiz sayilari giriniz: ");
for(i=0;i<n;i++){
printf("                    :");
    scanf("%d",&degerler[i]);
    if(degerler[i]%2==0){
degerler[i]=cift[i];
    }
    else{
        degerler[i]=tek[i];
    }
}
for(i=0;i<n;i++);
printf("Tek olan sayilar: %d",tek[i]);
printf("Cift olan sayilar: %d",cift[i]);
return 0;
}