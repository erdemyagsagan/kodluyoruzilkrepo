#include<stdio.h>
int main()
{
double a,b,toplam,cikarma,carpma,bolme;
int islem;
printf("Enter two number which do you want to process\n");
printf("First number: ");
scanf("%lf",&a);
printf("Second number: ");
scanf("%lf",&b);
printf("Choose what you want to do with these numbers\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
scanf("%d",&islem);
switch (islem)
{
case(1):
    toplam = a + b;
    printf("Sum of two numbers is %.1lf",toplam);
    break;
case(2):
    cikarma = a - b;
    printf("difference of two numbers is %.1lf",cikarma);
    break;
case(3):
    carpma = a * b;
    printf("Product of two numbers is %.1lf",carpma);
    break;
case(4):
    bolme = a / b;
    printf("Division of two numbers is %.1lf",bolme);
    break;

}


    return 0;
}