/**************************

Vucut Kitle endeksi hesabı yapan program...

***************************/
#include <stdio.h>

int main()
{ 
   int yas, kilo;
   float boy;
   float boycarpimi;
   int BMI,BMI2;
   
   printf("Boyunuzu santimetre cinsinden giriniz:");
   scanf("%f",&boy);
   
   printf("Kilonuzu giriniz:");
   scanf("%d",&kilo);
   
   boycarpimi = (boy/100)*(boy/100);
   BMI = (kilo/boycarpimi)*10;
   BMI2 = BMI/10;
   printf("Vucut Kitle Endeksin:%d",BMI2);
   printf("\n");
   
  if(BMI<=184){
        printf("Zayıf. Kişinin boyuna oranla ağırlığının yetersiz olduğunu ifade eden bu değer ile karşılaşılması durumunda kişinin diyetisyen eşliğinde sağlıklı bir şekilde kilo alması önerilir.");
    }
    else if((BMI>185)&&(BMI<=249)){
        printf("Normal. Bu değer aralığı kişinin ideal kiloda olduğunu gösterir. Bu değere sahip olan kişilerin düzenli, dengeli ve sağlıklı beslenmeye devam etmeleri önerilir.");
    }
    else if((BMI>250)&&(BMI<=299)){
        printf("Fazla Kilolu. Kişinin boyuna oranla kilosunun fazla olduğunu gösteren bu değer aralığında kişinin uygun diyet ile fazla kilolarından kurtulması önerilir.");
    }
    else if((BMI>300)&&(BMI<=349)){
        printf("Şişman. Birinci derece obez kategorisinde değerlendiren değer aralığında, kişinin kilosunun sağlık açısından risk oluşturabilecek düzeyde olduğu anlaşılır. Bu kişilerin diyetisyen yardımıyla kilo vermesi önerilir.");
    }
     else if((BMI>350)&&(BMI<=449)){
        printf("Şişman. İkinci derece obez olarak tanımlanan bu değerlere sahip olan kişilerde kalp ve damar hastalıkları bakımından risk artar. Kişinin kilo vermek için diyetisyene");
    }
    else{
        printf("Obez");
    }
   
   
  

      return 0;
}