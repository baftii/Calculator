#include <stdio.h>

int carpma(int a, int b){
  int sonuc = a * b;
  return sonuc;
}

int toplama(int a, int b){
  int sonuc = a + b;
  return sonuc;
}

int cikarma(int a, int b){
  int sonuc = a - b;
  return sonuc;
}

float bolme(float a, float b){
  float sonuc = a / b;
  return sonuc;
}

int faktoriyel(int a){
  int toplam = 1, i;
  for(i = 1;i <= a; i++){
    toplam = toplam * i;
  }
  return toplam;
}

float yuzde(float b){
  float toplam;
  toplam = b / 100;
  return toplam;
}

int main() {
  int alfa;
  float beta;
  int x,y;
  char islem;
  while(islem != 's'){
    printf("+ = Toplama\n- = Çıkarma\n* = Çarpma\n/ = Bölme\n! = Faktöriyel\n% = Yüzde Alma\ns = İşlemi Bitirme\nYapmak istediğiniz işlemi seçiniz: ");
    scanf("%s", &islem);
    if(islem == '+'|| islem == '-' || islem == '/' || islem == '!' || islem == '%' || islem == 's'){
      switch(islem){
      case '*':
        printf("Çarpmak istediğiniz sayıları giriniz: ");
        scanf("%d%d", &x, &y);
        alfa = carpma(x,y);
        printf("Cevabınız: %d\n\n", alfa);
        break;
      case '/':
        printf("Bölmek istediğiniz sayıları giriniz: ");
        scanf("%d%d", &x, &y);
        beta = bolme(x,y);
        printf("Cevabınız: %f\n\n", beta);
        break;
      case '-':
        printf("Çıkarmak istediğiniz sayıları giriniz: ");
        scanf("%d%d", &x, &y);
        alfa = cikarma(x,y);
        printf("Cevabınız: %d\n\n", alfa);
        break;
      case '+':
        printf("Toplamak istediğiniz sayıları giriniz: ");
        scanf("%d%d", &x, &y);
        alfa = toplama(x,y);
        printf("Cevabınız: %d\n\n", alfa);
        break;
      case '!':
        printf("Faktoriyelini istediğiniz sayıyı giriniz: ");
        scanf("%d", &x);
        alfa = faktoriyel(x);
        printf("Cevabınız: %d\n\n", alfa);
      case '%':
        printf("Yüzdesini almak istediğiniz sayıyı giriniz: ");
        scanf("%d", &x);
        beta = yuzde(x);
        printf("Cevabınız: %f\n\n", beta);
        break;
      case 's':
        printf("İşlem Sonlandırıldı.");
        return 0;
      }
    }
    else{
      printf("Girdiniz hatalıdır lütfen tekrar deneyiniz.\n\n");
      return main();
    }
  }
  return 0;
}