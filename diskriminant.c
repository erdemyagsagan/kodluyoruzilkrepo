#include <stdio.h>
#include <math.h>

int main(){
int a,b,c,want;
float dis,deger1,deger2;
printf("ax^2+bx+c foksiyonun a,b ve c degerlerini doldurunuz\n");
printf("a= ");
scanf("%d",&a);
printf("b= ");
scanf("%d",&b);
printf("c= ");
scanf("%d",&c);
printf("Fonksiyonunuz %dx^2+%dx+%d dir",a,b,c);
printf("Fonksiyonunuz diskriminantini hesaplamak istiyorsaniz 1 e, istemiyorsaniz 0 a basin");
scanf("%d",&want);
if(want==1){

dis = b*b - (4*a*c);
printf("%f",dis);
deger1 = (-b + sqrt(dis)) /(2*a);
deger2 = (-b - sqrt(dis)) /(2*a);
printf("Ilk deger=%f\nIkinci deger=%f ",deger1,deger2);

}
if(want==0){
printf("Islem sona erdirilmistir");
return 0;
    
}


    return 0;
}