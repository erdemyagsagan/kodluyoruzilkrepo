#include<stdio.h>

int main(){

int a,b,c;

printf("Input the first number: ");
scanf("%d",&a);
printf("Input the second number: ");
scanf("%d",&b);
printf("Input the third number: ");
scanf("%d",&c);

if(a>b){

    if(a>c){

        printf("%d a",a);
    
    }
    else{
        printf("%d c",c);
    }
}
if(b>a){

    if(b>c){
        printf("%d b",b);
    }
else{

    printf("%d c",c);
}

}














}