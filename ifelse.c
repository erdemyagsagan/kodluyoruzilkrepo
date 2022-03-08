#include<stdio.h>
int main(){

int matnotu,fiziknotu,kimyanotu;
float ortalama;

printf("mat notunuzu giriniz");
scanf("%d",&matnotu);
printf("fizik notunuzu giriniz");
scanf("%d",&fiziknotu);
printf("kimya notunuzu giriniz");
scanf("%d",&kimyanotu);

ortalama = (matnotu + fiziknotu + kimyanotu) /3;

if (ortalama > 50){
printf("seneyi tamamladiniz");
}


else if(ortalama > 40){

    printf("seneyi gectin ama dersi tekrar alman lazim");





}

else{

printf("seneyi basarisiz");




}

    return 0;
}