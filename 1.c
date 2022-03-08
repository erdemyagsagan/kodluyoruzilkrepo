#include<stdio.h>
int main (){

int i;
int negativenum,positivenum;
float a[5];
printf("Enter five numbers\n");
printf("\nFirst number= ");
scanf("%f",&a[0]);
printf("\nSecond number= ");
scanf("%f",&a[1]);
printf("\nThird number= ");
scanf("%f",&a[2]);
printf("\nFourth number= ");
scanf("%f",&a[3]);
printf("\nFifth number= ");
scanf("%f",&a[4]);

for(i = 0; i <= 4; i++){

if(a[i] > 0){
    positivenum++;
}
else{
negativenum++;
}
}
printf("Total positive numbers is %d\n",positivenum);
printf("Total negative numbers is %d",negativenum);


return 0;
}