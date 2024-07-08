#include<stdio.h>
#include<stdlib.h>

int main()
{
    // Integer
    int sayi;
    printf("Lutfen integer sayi giriniz :\n");
    scanf("%d", &sayi);
    printf("Girdiginiz integer sayi : %d\n", sayi);
    
    // Float 
    float sayi1;
    printf("Lutfen float turunde bir sayi giriniz :\n");
    scanf("%f", &sayi1);
    printf("Girdiginiz float sayi : %.2f\n", sayi1);
    
    // Double
    double sayi2;
    printf("Lutfen double bir sayi giriniz :\n");
    scanf("%lf", &sayi2);
    printf("Girdiginiz double sayi : %.1lf\n", sayi2);
    
    // Char
    char harf;
    printf("Lutfen char deger giriniz :\n");
    // scanf'den önce bir boşluğu okuması için bir boşluk eklemeliyiz.
    scanf(" %c", &harf);
    printf("Girdiginiz char deger : %c\n", harf);

    return 0;
}
