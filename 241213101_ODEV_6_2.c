// 2- Yukarıdaki yapıları kullanarak 5 öğrencini bilgilerini girişini yapan,
//    geçme notlarını hesaplayan ve bilgileri ekrana yazdıran program kodunu yazınız.

// NOT: Programın kullanıcı dostu bir girdi alma sistemi olması adına öğrenci bilgileri, ders kodları, ders notları ayrı ayrı alınmıştır.
//      Bu durum kod bloğunu uzatsa da kullanıcı açısından daha anlaşılabilir bir forma olanak verir.
#include <stdio.h>

// Yapıların Tanımı
typedef struct {
    int dersKod;
    int vize;
    int final;
    float gecmeNotu;
} ders;
typedef struct {
    char ad[40];
    char soyad[40];
    int no;
    ders dersler[5];
} sahisBilgileri;

int main(void) {
    sahisBilgileri sahislar[5]; int i, j;

    // Öğrenci Bilgilerini Alır
    printf("\tOGRENCI BILGILERI\n");
    for (i = 0; i < 5; i++) {
        printf("%d. Ogrenci Adi: ", i + 1); scanf("%s", sahislar[i].ad);
        printf("%d. Ogrenci Soyadi: ", i + 1); scanf("%s", sahislar[i].soyad);
        printf("%d. Ogrenci Numarasi: ", i + 1); scanf("%d", &sahislar[i].no);
    }

    // Ders Kodlarını Alır
    printf("\tDERS KODLARI\n");
    for (j = 0; j < 5; j++) {
        printf("%d. DERS KODU: ", j + 1);
        scanf("%d", &sahislar[0].dersler[j].dersKod);
    }

    // Ders Kodlarını Tüm Öğrencilere Kopyalar
    for (i = 1; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            sahislar[i].dersler[j].dersKod = sahislar[0].dersler[j].dersKod;
        }
    }

    // Vize, Final Girişini ve Geçme Notunun Hesabını Yapar
    for (j = 0; j < 5; j++) {
        printf("\t%d Kodlu Dersin Not Girisi:\n", sahislar[0].dersler[j].dersKod);
        for (i = 0; i < 5; i++) {
            printf("%d No'lu Ogrenci Vize Notu: ", sahislar[i].no);
            scanf("%d", &sahislar[i].dersler[j].vize);
            printf("%d No'lu Ogrenci Final Notu: ", sahislar[i].no);
            scanf("%d", &sahislar[i].dersler[j].final);

            sahislar[i].dersler[j].gecmeNotu = (sahislar[i].dersler[j].vize * 0.4) + (sahislar[i].dersler[j].final * 0.6f);
        }
    }

    // Bilgileri Ekrana Yazdırır
    printf("\nOGRENCI VE DERS BILGILERI\n");
    for (i = 0; i < 5; i++) {
        printf("\nOgrenci: %s %s | No: %d\n", sahislar[i].ad, sahislar[i].soyad, sahislar[i].no);
        for (j = 0; j < 5; j++) {
            printf("Ders Kodu: %d\tVize: %d\tFinal: %d\tGecme Notu: %.2f\n", sahislar[i].dersler[j].dersKod, sahislar[i].dersler[j].vize, sahislar[i].dersler[j].final, sahislar[i].dersler[j].gecmeNotu);
        }
    }

}
