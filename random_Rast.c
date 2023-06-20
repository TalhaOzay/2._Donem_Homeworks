#include<stdio.h>


struct Musteri
{
	int no;
	char isim[20];
	char soyisim[20];
	int bakiye;
};


int main()
{
	
	struct Musteri bosMusteri = {0, "", "", 0};
	
	FILE *dosya;
	
	//DOSYA A�MA ��LEM�
	
	int i; 
	
	if((dosya = fopen("MusteriKayitlari.txt","w"))!= NULL)
	{
		
		for(i=0; i<100; i++)
		{
			fwrite( &bosMusteri, sizeof(struct Musteri), 1, dosya );
		}
		fclose(dosya);
		
	}
	
	printf("100 kisilik yer ayirma islemi tamamlandi...\n\n");
	
	// 5 ADET M��TER� KAYDI ���N YAZMA+OKUMA ��LEM� 		
	 
	
	if((dosya = fopen("MusteriKayitlari.txt","r+"))!= NULL)
	{
		printf("5 musteri icin giris yapiniz: \n\n");
		for(i=0; i<3; i++)
		{
			printf("%d. musteri icin; no: ad: soyad: bakiye: ",i+1);
			scanf("%d %s %s %d",&bosMusteri.no, bosMusteri.isim, bosMusteri.soyisim, &bosMusteri.bakiye);
			
			fseek(dosya, (bosMusteri.no-1) * sizeof(struct Musteri), SEEK_SET);
			
			fwrite( &bosMusteri, sizeof(struct Musteri), 1, dosya );
		}
		fclose(dosya);
		
	}

	printf("\nMusteri kayit islemi tamamlandi...\n");
	
	//Musteri Okuma Islemi
	
	// 5 ADET M��TER� KAYDI ���N YAZMA+OKUMA ��LEM� 		
	 
	
	if((dosya = fopen("MusteriKayitlari.txt","r"))!= NULL)
	{
		printf("Musteri Okuma Islemi \n\n");
		
		printf("%s\t%s\t%s\t%s","no","isim","soyisim","bakiye");
		
		while(!feof(dosya))
		{
			fread( &bosMusteri, sizeof(struct Musteri), 1, dosya);
			if (bosMusteri.no > 0)
			printf("\n%d\t%s\t%s\t%d\n", bosMusteri.no, bosMusteri.isim, bosMusteri.soyisim, bosMusteri.bakiye);
		}
		fclose(dosya);
		
	}
	
	printf("\nMusteri okuma islemi tamamlandi...\n");
	
	return 0;
}
