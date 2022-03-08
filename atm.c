#include <stdio.h>

int main()
{
    int islem;
    int tutar;
    int bakiye =3000;
    
    printf("Islemler\n1:Para Cekme\n2:Para Yatirma\n3:Bakiye Sorgulama\n4:Odemeler\n5:Bagislar\n6:Kart Iade\n\n\n\"");
    
    printf("Islemi seciniz: ");
    scanf("%d",&islem);
    
    switch(islem){
    
    case 1:
    printf("Cekilecek tutari giriniz: ");
    scanf("%d",&tutar);

    if (tutar > bakiye){
    printf("Bakiye Yetersiz\n");
    
    }
    bakiye -= tutar;
    printf("Islem basariyla gerceklestirildi guncel bakiyeniz: %d",bakiye);


    break;
    case 2:
    printf("Yatiralacak tutari giriniz: ");
    scanf("%d",&tutar);
    bakiye += tutar;
    
    printf("Islem basariyla gerceklestirildi guncel bakiyeniz: %d",bakiye);
    break;
    case 3:
    printf("Bakiye: %d",bakiye);
    
    break;
    case 4:
    printf("Odemeler gecici olarak devre disi");
    
    break;
    case 5:
    printf("Hangi kuruma bagis atmak istediginizi seciniz");
    
    break;
    default:
    printf("Bilinmeyen Islem");
    
    
}
    return 0;
}