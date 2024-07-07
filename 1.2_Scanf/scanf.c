#include<stdio.h>
#include<stdlib.h>

int main()
{
    // Integer
    int sayi;
    printf("Lutfen integer sayi giriniz :\n");
    scanf("%d",&sayi);
    printf("Girdigimiz interger sayi : %d\n",sayi);
    // Float 
   float sayi1;
    printf("Lutfen float turunde bir sayi giriniz :\n");
    scanf("%f",&sayi1);
    printf("Girdigimiz float sayi : %.2f\n",sayi1);
    //Double
    double sayi2;
    printf("Lutfen double bir sayi giriniz :\n");
    scanf("%lf",&sayi2);
    printf("Girdiginiz double sayi : %.1lf\n",sayi2);}
   
    //Char
    char harf;
    printf("Luften char deger giriniz :\n");
    scanf("%c",&harf);
    printf("Girdiginiz char deger :%c\n",harf);
}
