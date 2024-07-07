#include <stdio.h>
#include <stdlib.h>

void printArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Dizinin %d. elemanı: %d\n", i + 1, array[i]);
    }
}
int main()
{
    int *array;
    int size, Newsize;
    int choice;
    printf("Dizi boyutunu giriniz:\n");
    scanf("%d", &size);
    // Başlangıç boyutuna göre dinamik bellek tahsisi
    array = (int *)malloc(size * sizeof(int));
    if (array == NULL)
    {
        printf("Bellek tahsisi başarısız.\n");
        return 1;
    }
    // Kullanıcıdan verileri alma
    for (int i = 0; i < size; i++)
    {
        printf("Dizinin %d. elemanı:", i + 1);
        scanf("%d", &array[i]);
    }
    // Diziyi yazdirma
    printf("Dizi elemanlari:\n");
    printArray(array, size);
    while (1)
    {
        printf("1: Diziyi genişlet\n");
        printf("2: Diziyi küçült\n");
        printf("3: Diziyi yazdır\n");
        printf("4: Çıkış\n");
        printf("Seçiminizi yapın: ");
        scanf("%d", &choice);
        if (choice == 4)
        {
            break;
        }
        switch (choice)
        {
        case 1:
            // Bellek boyutunu genişletin.
            printf("Dizinin yeni boyutunu giriniz: ");
            scanf("%d", &Newsize);
            size += Newsize;
            array = (int *)realloc(array, size * sizeof(int));
            if (array == NULL)
            {
                printf("Bellek genişletme başarısız.");
            }
            for (int i = size - Newsize; i < size; i++)
            {
                printf("Dizinin %d. elemanını girin: ", i + 1);
                scanf("%d", &array[i]);
            }

            break;
        case 2:
            printf("Ne kadar küçültmek istiyorsunuz? ");
                scanf("%d", &Newsize);
                if (Newsize >= size) {
                    printf("Diziyi bu kadar küçültemezsiniz.\n");
                    break;
                }
                size -= Newsize;
                array = (int *)realloc(array, size * sizeof(int));
                if (array == NULL) {
                    printf("Bellek küçültme başarısız.\n");
                    return 1;
                }
                break;
        case 3:
            // Diziyi yazdırın.
            printf("Dizi :\n");
            printArray(array, size);
            break;
        default:
            printf("Gecersiz giris.\n");
            break;
        }
    }
    free(array);
    return 0;
}