#include <stdio.h>
#include <stdlib.h>
struct salonlar
{
    char red[5][50];
    char green[5][50];
    char blue[5][50];
} salon;
typedef enum
{
    tam,
    ogrenci
}ucret_bilgisi;
int main()
{
    int tmp;
    FILE *fp,*fpdosya,*fpdosya1,*fpdosya2,*dosya;
    char sifre[40],b;
    char *cp;
    int i;
    if ((fp=fopen("sifre.txt","r"))==NULL)
    {
        printf("dosya acma hatasi");
        exit(0);
    }
    printf("Sifreyi giriniz(sifre saduman):");
    gets(sifre);
    for(i=0; i<strlen(sifre); i++)
    {
        b = (char) (((int) sifre[i]-65+1)%26+65);
        if (b!=getc(fp))
        {
            printf("yanlis sifre girdiniz.\n\n");
            exit(0);
        }
    }
    fclose(fp);
    struct salonlar *psalon;
    psalon=&salon;
    ucret_bilgisi ucretbilgileri;
    int ucret=0;
    int secim;
    int secim2;
    int a,j,okunan,sayac=0;
    /* if((fpdosya=fopen("red.txt","w"))==NULL)
        {
            printf("dosya acilamadi");
            exit(0);
        }
        for (i=0; i<5; i++)
        {

            for (j=0; j<50; j++)
                fputc('0',fpdosya);

        }
        fclose(fpdosya);

        if((fpdosya1=fopen("green.txt","w"))==NULL)
        {
            printf("dosya acilamadi");
            exit(0);
        }
        for (i=0; i<5; i++)
        {

            for (j=0; j<50; j++)
                fputc('0',fpdosya1);

        }
        fclose(fpdosya1);


       if((fpdosya2=fopen("blue.txt","w"))==NULL)
        {
            printf("dosya acilamadi");
            exit(0);
        }
        for (i=0; i<5; i++)
        {

            for (j=0; j<50; j++)
                fputc('0',fpdosya2);

        }
        fclose(fpdosya2);


   if((dosya=fopen("hasilat.txt","w"))==NULL)
    {
        printf("dosya acilamadi");
        exit(0);
    }
    fprintf(dosya,"%d",ucret);
    fclose(dosya);*/
    printf("-----------------------LOGIN EKRANI---------------------\n");
    printf("1.Bilet almak icin\n2.Hasilat Bilgisini gormek icin\n3.Matinelerin izlenme sayisi");
    scanf("%d",&secim2);
    if (secim2==1)
    {
    printf("\n--------------------SALON SECINIZ-------------------\n");
    printf("1.Red\n2.Green\n3.Blue\nSalon");
    scanf("%d",&secim);
    switch (secim)
    {
        case 1:


        printf("\nRED salonunu sectiniz\n\n");


        if((fpdosya=fopen("red.txt","r"))==NULL)
        {
            printf("dosya acilamadi");
            exit(0);
        }
        for (i=1; i<=5; i++)
        {
            for (j=1; j<=50; j++)
                psalon->red[i][j]=getc(fpdosya);
        }
        fclose(fpdosya);
        for (a=1; a<=5; a++)
        {
            printf("%d.matine\t",a);
        }
        printf("\nMatine seciniz:");
        scanf("%d",&i);
        if((fpdosya=fopen("red.txt","w+"))==NULL)
        {
            printf("dosya acilamadi");
            exit(0);
        }

        for (j=1; j<=50; j++)
        {
            if (psalon->red[i][j]=='0')
            {
                psalon->red[i][j]='1';
                break;
            }
        }
        printf("Koltuk numaraniz:%d",j);
        for (i=1; i<=5; i++)
        {
            for (j=1; j<=50; j++)
            {
                if (psalon->red[i][j]=='1')
                    putc('1',fpdosya);
                else
                    putc('0',fpdosya);
            }
        }

        fclose(fpdosya);
        break;

     case 2:


           printf("\nGREEN salonunu sectiniz\n\n");


        if((fpdosya1=fopen("green.txt","r"))==NULL)
        {
            printf("dosya acilamadi");
            exit(0);
        }
        for (i=1; i<=5; i++)
        {
            for (j=1; j<=50; j++)
                psalon->green[i][j]=getc(fpdosya1);
        }
        fclose(fpdosya1);
        for (a=1; a<=5; a++)
        {
            printf("%d.matine\t",a);
        }
        printf("\nMatine seciniz:");
        scanf("%d",&i);
        if((fpdosya1=fopen("green.txt","w+"))==NULL)
        {
            printf("dosya acilamadi");
            exit(0);
        }

        for (j=1; j<=50; j++)
        {
            if (psalon->green[i][j]=='0')
            {
                psalon->green[i][j]='1';
                break;
            }
        }
        printf("Koltuk numaraniz:%d",j);
        for (i=1; i<=5; i++)
        {
            for (j=1; j<=50; j++)
            {
                if (psalon->green[i][j]=='1')
                    putc('1',fpdosya1);
                else
                    putc('0',fpdosya1);
            }
        }

        fclose(fpdosya1);
        break;
    case 3:



         printf("\nBLUE salonunu sectiniz\n\n");

        if((fpdosya2=fopen("blue.txt","r"))==NULL)
        {
            printf("dosya acilamadi");
            exit(0);
        }
        for (i=1; i<=5; i++)
        {
            for (j=1; j<=50; j++)
                psalon->blue[i][j]=getc(fpdosya2);
        }
        fclose(fpdosya2);
        for (a=1; a<=5; a++)
        {
            printf("%d.matine\t",a);
        }
        printf("\nMatine seciniz:");
        scanf("%d",&i);
        if((fpdosya2=fopen("blue.txt","w+"))==NULL)
        {
            printf("dosya acilamadi");
            exit(0);
        }

        for (j=1; j<=50; j++)
        {
            if (psalon->blue[i][j]=='0')
            {
                psalon->blue[i][j]='1';
                break;
            }
        }
        printf("Koltuk numaraniz:%d",j);
        for (i=1; i<=5; i++)
        {
            for (j=1; j<=50; j++)
            {
                if (psalon->blue[i][j]=='1')
                    putc('1',fpdosya2);
                else
                    putc('0',fpdosya2);
            }
        }

        fclose(fpdosya2);
    }

    dosya=fopen("hasilat.txt","r");
    if (dosya==NULL)
    {
        printf("dosya acilamadi");
        exit(0);
    }
    fscanf(dosya,"%d",&ucret);


    fclose(dosya);
    if((dosya=fopen("hasilat.txt","w+"))==NULL)
    {
        printf("dosya acilamadi");
        exit(0);
    }
    printf("\n1.Tam Bilet\n2.Ogrenci Bilet\n");
    scanf("%d",&ucretbilgileri);
    if (ucretbilgileri==0)
    {
        ucret=ucret+30;
        printf("\n\nodenecek bilet tutari:%d TL",30);
        fprintf(dosya,"%d",ucret);
    }
    else if (ucretbilgileri==1)
    {
        ucret=ucret+20;
        printf("\nodenecek bilet tutari:%d TL",20);
        fprintf(dosya,"%d",ucret);
    }

    fclose(dosya);
    }
    else  if (secim2==2)
    {
    dosya=fopen("hasilat.txt","r");
    if (dosya==NULL)
    {
        printf("dosya acilamadi");
        exit(0);
    }
    fscanf(dosya,"%d",&ucret);
    printf("Hasilat:%d",ucret);
    fclose(dosya);
    }
    if (secim2==3)
    {
          if((fpdosya=fopen("red.txt","r"))==NULL)
        {
            printf("dosya acilamadi");
            exit(0);
        }
        for (i=1; i<=5; i++)
        {
            for (j=1; j<=50; j++)
                psalon->red[i][j]=getc(fpdosya);
        }
        fclose(fpdosya);
        printf("RED salonunun matine izlemi\n");
        for (i=1; i<=5; i++)
        {
            for (j=1; j<=50; j++)
            {
                if (psalon->red[i][j]=='1')
                    sayac++;
            }
            printf("%d.matinede %d.kisi filmi izledi\n",i,sayac);
            sayac=0;
        }
        if((fpdosya1=fopen("green.txt","r"))==NULL)
        {
            printf("dosya acilamadi");
            exit(0);
        }
        for (i=1; i<=5; i++)
        {
            for (j=1; j<=50; j++)
                psalon->green[i][j]=getc(fpdosya1);
        }
        fclose(fpdosya1);
           printf("\nGREEN salonunun matine izlemi\n");
        for (i=1; i<=5; i++)
        {
            for (j=1; j<=50; j++)
            {
                if (psalon->green[i][j]=='1')
                    sayac++;
            }
            printf("%d.matinede %d.kisi filmi izledi\n",i,sayac);
            sayac=0;
        }
         if((fpdosya2=fopen("blue.txt","r"))==NULL)
        {
            printf("dosya acilamadi");
            exit(0);
        }
        for (i=1; i<=5; i++)
        {
            for (j=1; j<=50; j++)
                psalon->blue[i][j]=getc(fpdosya2);
        }
        fclose(fpdosya2);
         printf("\nBLUE salonunun matine izlemi\n");
        for (i=1; i<=5; i++)
        {
            for (j=1; j<=50; j++)
            {
                if (psalon->blue[i][j]=='1')
                    sayac++;
            }
            printf("%d.matinede %d.kisi filmi izledi\n",i,sayac);
            sayac=0;
        }
    }












    return 0;
}
