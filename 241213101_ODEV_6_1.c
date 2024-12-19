// 1- “isci” yapısını kendine parametre olarak alan bir fonksiyon içerisinde işçiye 
// ait bilgiler kullanıcıdan alınacak ve fonksiyon içinde kullanıcıdan girilen verilen olan yapıyı döndürecek.
#include <stdio.h>

typedef struct {
    char adi[30];
    char soyadi[30];
    int yas;
    double aylikucret;
} isci;

isci bilgiAl(isci x);

int main (void) {
    isci calisanProfili = bilgiAl(calisanProfili);

    printf("Isci adi: %s\n", calisanProfili.adi);
    printf("Isci soyadi: %s\n", calisanProfili.soyadi);
    printf("Isci yasi: %d\n", calisanProfili.yas);
    printf("Iscinin aylik ucreti: %d\n", calisanProfili.aylikucret);

}

isci bilgiAl(isci x) {
    printf("Iscinin adini giriniz: "); gets(x.adi);
    printf("Iscinin soyadini giriniz: "); gets(x.soyadi);
    printf("Iscinin yasini giriniz: "); scanf("%d", &x.yas);
    printf("Iscinin aylik ucretini giriniz: "); scanf("%d", &x.aylikucret);

    return x;
}