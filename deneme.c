#include <stdio.h>
int main(){

int x,i;
printf("Gireceginiz sayi 1 den girdiginiz sayiya kadar olan cift sayilarin karesidir\n");
printf("Bir sayi giriniz: ");
scanf("%d",&x);
for(i = 1; i <= x; i++){
if((i%2) ==0 ){
printf("\n%d^2 = %d",i,i*i);
}
}
    return 0;
}