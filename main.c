#include <stdio.h>

int main(void)
{
    int pilihan;
    float s, t, jari, phi=3.14, a, k, S_m,S_T;
    float luasK, luasB, luasL, LuasP, volumeL;
    do{


        switch(pilihan){
        case 1:
            printf("\n=====>Luas Kubus<=====\n");
            printf("Input Nilai Sisi Kubus : ");
            scanf("%f",&s);
            luasK=6*s*s;
            printf(" Hasil Luas Permukaan Kubus adalah : %.2f\n",luasK);
        break;
        case 2:
            printf("\n====>Luas dan Volume Bola<====\n");
            printf("Masukan Jari-jari Bola : ");
            scanf("%f",&jari);
            puts("");

            luasB=4*phi*(jari*jari);

            printf("Luas Bola   = %.2f",luasB);
            puts("");
        break;
        case 3:
            printf("\n===>Luas Limas Segi Empat Beraturan<===\n");
            printf("Masukan Tinggi         : ");
            scanf("%f",&t);
            printf("Masukan Panjang sisi   : ");
            scanf("%f",&s);
            puts("");

            S_m=sqrt((s*0.5)*(s*0.5)+(t*t));
            S_T=0.5*s*S_m;

            luasL=(t*t)+(4*S_T);
            printf("Luas Limas   = %.2f",luasL);

            puts("");
        break;
        case 4:
            printf("\n===>Luas Prisma Segitiga Beraturan<===\n");
            printf("Masukkan Luas Alas     : ");
            scanf("%f",&a);
            printf("Masukkan Keliling Alas : ");
            scanf("%f",&k);
            printf("Masukkan Tinggi        : ");
            scanf("%f",&t);
            puts("");

            LuasP=(k)+(2*a)*t;
            printf("\n Luas Permukaannya = %.2f",LuasP);
            puts("");
        break;
        case 5:
            printf("\n===>Volume Limas Segi Empat Beraturan<===\n");
            printf("Masukan Tinggi         : ");
            scanf("%f",&t);
            printf("Masukan Panjang sisi   : ");
            scanf("%f",&s);
            puts("");

            S_m=sqrt((s*0.5)*(s*0.5)+(t*t));
            S_T=0.5*s*S_m;

            volumeL=(0.33333)*(s*s)*t;
            printf("\nVolume Limas = %.2f",volumeL);

            puts("");
        break;
        }
    }while(pilihan!=6);
        getch();
        return 0;
}
