#include <stdio.h>
#include <locale.h>
#include <math.h>
	

int main(){
	
	
	setlocale(LC_ALL,"Turkish");
	
	int secim,asal1,asal2,sayac,i,x,basamak,basamak1,basamak2,basamak3,basamak1a1,basamak2a1,basamak3a1,basamak1a2,basamak2a2,basamak3a2,basamak1s2,basamak2s2,basamak3s2,basamak1s1,basamak2s1,basamak3s1,determinant1,determinant2,determinant3,asalcarpan1,asalcarpan2,asalcarpan3;
	long long int determinantsonuc,sonuc1,sonuc2;
	
	printf("�zcehar �ifrelemeye ho� geldiniz ! \n \nL�tfen �ifre olu�turmak i�in 1'i �ifre ��z�mlemek i�in 2'yi tu�lay�n�z \n \n : ");
	scanf("%d",&secim);
	if(secim == 1){
	
	
	printf("�zcehar �ifre olu�turucuya ho� geldiniz! \n \nL�tfen iki basamakl� ilk asal tam say�n�z� giriniz \n \n : ");
	scanf("%d",&asal1); //ASAL SAYIYI �STED�K.
	
	for(i=2;i<asal1;i++)  //ASAL SAYIYI ANLAYAB�LECEK B�R D�NG� YAPTIK.
	{
		if(asal1%i==0){
			sayac++;
		}
	}
		if(sayac!=0){
			printf("�zg�n�z bu bir asal say� veya iki basamakl� bir say� de�il.L�tfen tekrar deneyin");
			return 0;
		}
	if(asal1 <= 1 ){
		printf("Girdi�iniz tam say� 1 de�erinden b�y�k olmal�d�r.");
		return 0;
	}
	
	printf("\n\nL�tfen iki ikinci asal tam say�n�z� giriniz : ");
	scanf("%d",&asal2); // BU SEFER �K�NC� ASAL SAYIYI �STED�K.
	for(i=2;i<asal2;i++)  //Y�NE AYNI D�NG�.
	{
		if(asal2%i==0){
			sayac++;
		}
	}
		if(sayac!=0){
			printf("�zg�n�z bu bir asal say� veya iki basamakl� bir say� de�il.L�tfen tekrar deneyin");
			return 0;
		}
	if(asal2 <= 1 ){
		printf("Girdi�iniz tam say� 1 de�erinden b�y�k olmal�d�r.");
		return 0;
	}
	
	 basamak1 = asal1 % 10;
	 basamak2 = asal1 / 10;     
	 basamak1a2 = asal2 % 10;
	 basamak2a2 = asal2 / 10;	
	
	
	if(basamak2-basamak1 <= -1 ){
		
			if(basamak2a2 - basamak1a2 <= -1){
			
		
		sonuc1 = pow(asal1,basamak1-basamak2) + asal1*(basamak1a2-basamak2a2) + asal1 + asal2;
		sonuc2 = pow(asal2,basamak1-basamak2) + asal2*(basamak1a2-basamak2a2) + asal1 + asal2; 
		
		if (sonuc1 >=10 && sonuc1 <=99){
			
			basamak1s1 = 0;
			basamak2s1 = sonuc1 % 10;
			basamak3s1 = sonuc1 / 10;
		}
	    if(sonuc2 >=10 && sonuc2 <=99){
			basamak1s2 = 0;
			basamak2s2 = sonuc2 % 10;
			basamak3s2 = sonuc2 / 10;
		}
		
	    if (sonuc1 >=100 && sonuc1 <=999){
			basamak1s1 = sonuc1 % 10;  
			int basamak2s1g = sonuc1 / 10;
		    basamak2s1 = basamak2s1g % 10;
            basamak3s1 = sonuc1 / 100;
			
		}
		
		if (sonuc2 >=100 && sonuc2 <=999){
			basamak1s2 = sonuc2 % 10;  
			int basamak2s2g = sonuc2 / 10;
		    basamak2s2 = basamak2s2g % 10;
            basamak3s2 = sonuc2 / 100;
			
		}
		
		 if(sonuc1 >=1000 && sonuc1 <=9999){
			
			int basamak1s1g = sonuc1 / 10;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = sonuc1 / 10;
			int basamak2s1gg = basamak2s1g / 10;
			basamak2s1 = basamak2s1gg % 10;
			basamak3s1 = sonuc1 / 1000;
			
		}
		
		 if(sonuc2 >=1000 && sonuc2 <=9999){
			int basamak1s2g = sonuc2 / 10;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = sonuc2 / 10;
			int basamak2s2gg = basamak2s2g / 10;
			basamak2s2 = basamak2s2gg % 10;
			basamak3s2 = sonuc2 / 1000;
		}
		
		 if(sonuc1 >=10000 && sonuc1 <=99999){
			
			int basamak1s1g = sonuc1 / 100;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000;
			
			
		}
		 if(sonuc2 >=10000 && sonuc2 <=99999){
			int basamak1s2g = sonuc2 / 100;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000;
		}
		
		 if(sonuc1 >=100000 && sonuc1 <= 999999){
			int basamak1s1g = sonuc1 / 1000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000;
		}
		 if(sonuc2 >=100000 && sonuc2 <= 999999){
			int basamak1s2g = sonuc2 / 1000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000;
		}
		 if(sonuc1 >=1000000 && sonuc1 <= 9999999){
			int basamak1s1g = sonuc1 / 10000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000;
		}
		 if(sonuc2 >= 1000000 && sonuc2 <= 9999999){
			int basamak1s2g = sonuc2 / 10000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000;
		}
		 if(sonuc1 >= 10000000 && sonuc1 <= 99999999){
			int basamak1s1g = sonuc1 / 100000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
		    basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000;
		}
		 if(sonuc2 >= 10000000 && sonuc2 <= 99999999){
            int basamak1s2g = sonuc2 / 100000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000;
		}
		 if(sonuc1 >= 100000000 && sonuc1 <= 999999999){
			int basamak1s1g = sonuc1 / 1000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000;
			
		}
		 if(sonuc2 >= 100000000 && sonuc2 <= 999999999){
            int basamak1s2g = sonuc2 / 1000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000;
		}
		 if(sonuc1 >= 1000000000 && sonuc1 <= 9999999999){
			int basamak1s1g = sonuc1 / 10000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000000;
		}
		 if(sonuc2 >= 1000000000 && sonuc2 <= 9999999999){
            int basamak1s2g = sonuc2 / 10000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000000;
		}
		 if(sonuc1 >= 10000000000 && sonuc1 <= 99999999999){
			int basamak1s1g = sonuc1 / 100000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000000;
		}
		 if(sonuc2 >= 10000000000 && sonuc2 <= 99999999999){
            int basamak1s2g = sonuc2 / 100000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000000;
		}
		 if(sonuc1 >= 100000000000 && sonuc1 <= 999999999999){
			int basamak1s1g = sonuc1 / 1000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000000;
		}
		 if(sonuc2 >= 100000000000 && sonuc2 <= 999999999999){
            int basamak1s2g = sonuc2 / 1000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000000;
		}
		 if(sonuc1 >= 1000000000000 && sonuc1 <= 9999999999999){
			int basamak1s1g = sonuc1 / 10000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000000000;
		}
		 if(sonuc2 >= 1000000000000 && sonuc2 <= 9999999999999){
            int basamak1s2g = sonuc2 / 10000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000000000;
		}
		 if(sonuc1 >= 10000000000000 && sonuc1 <= 99999999999999){
			int basamak1s1g = sonuc1 / 100000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000000000;
		}
		 if(sonuc2 >= 10000000000000 && sonuc2 <= 99999999999999){
            int basamak1s2g = sonuc2 / 100000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000000000;
		}
		 if(sonuc1 >= 100000000000000 && sonuc1 <= 999999999999999){
			int basamak1s1g = sonuc1 / 1000000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
		    basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000000000;
		}
		 if(sonuc2 >= 100000000000000 && sonuc2 <= 999999999999999){
            int basamak1s2g = sonuc2 / 1000000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000000000;
		}
		
 
		    determinant1 = basamak1s1 + basamak1s2 + asal1 + asal2; 
		    determinant2 = basamak2s1 + basamak2s2 + asal2; 
		    determinant3 = basamak3s1 + basamak3s2 + asal1;
			determinantsonuc = basamak3s1*(basamak2s2 * determinant1 - (basamak1s2 * determinant2)) - basamak2s1 * ((basamak3s2 * determinant1) - (basamak1s2 * determinant3 )) + basamak1s1 * ((basamak3s2 * determinant2) - (basamak2s2 * determinant3));

		    if(determinantsonuc == 0){
		    	
		    	printf("Sonu� 0 ��kt� L�tfen Tekrar Deneyiniz");
				return 0;
			}
		    
		    
			
			for(i=2;determinantsonuc!=1;i++){ 
				
				if(determinantsonuc % i == 0){
					determinantsonuc /= i;
	                printf("%d ",i);
					i--;					
					
					}
					

				}
				printf("L�tfen do�ru sonucu istiyorsan�z yukar�da g�rd���n�z ilk �� asal �arpan� s�ras�yla yaz�n�z. \n \n NOT : E�er verilen say�n�n asal �arpanlar� ��ten az ise bo� kalan yerleri 1 rakam� ile doldurunuz ve ��kan sonu�ta -1 de�eri varsa bu de�eri yazmay�n�z g�rmezden geliniz.  \n \n :");
				scanf("%d",&asalcarpan1);
				printf("\n");
				scanf("%d",&asalcarpan2);
				printf("\n");
				scanf("%d",&asalcarpan3);

				if(asalcarpan1 > 29){
					
					asalcarpan1 = asalcarpan1 % 29;
						
					}
				
			
				
						
					
				else if(asalcarpan2 > 29){
					
					asalcarpan2 = asalcarpan2 % 29;
					
				}
				else if(asalcarpan3 > 29){
				
					asalcarpan3 = asalcarpan3 % 29;
					
				}
				
						
				
				
				
				printf(" A = 1 \t \t B = 2 \t \t C = 3 \t \t � = 4 \t \t D = 5 \t \t E = 6 \t \t F = 7 \t \t G = 8 \t \t � = 9 \t \t H = 10 \n I  = 11 \t � = 12 \t J = 13 \t K = 14 \t L = 15 \t M = 16 \t N = 17 \t O = 18 \t � = 19 \t P = 20\n R = 21 \t S = 22 \t � = 23 \t T = 24 \t U = 25 \t � = 26 \t V = 27 \t Y = 28 \t Z = 29 ");
				printf("\n\n\n �ifrelemek istedi�iniz metini l�tfen yukar�daki alfabetik s�ras�ndaki say�sal de�erini bulup onlar� %d %d %d say�lar�yla soldan sa�a do�ru toplay�n�z \n \n",asalcarpan1,asalcarpan1 + asalcarpan2,asalcarpan1 + asalcarpan2 + asalcarpan3); printf(" �RNEK : T�B�TAK i�in  \n T(24) + %d = %d",asalcarpan1,asalcarpan1+24); printf("\n �(26) + %d = %d",asalcarpan1 + asalcarpan2,asalcarpan1 + asalcarpan2+26); printf("\n B(2) + %d = %d",asalcarpan1 + asalcarpan2 + asalcarpan3,asalcarpan1 + asalcarpan2 + asalcarpan3+2); printf("\n �(12) + %d = %d",asalcarpan1,asalcarpan1+12); printf("\n T(24) + %d = %d",asalcarpan1 + asalcarpan2,asalcarpan1 + asalcarpan2 +24); printf("\n A(1) + %d = %d",asalcarpan1 + asalcarpan2 + asalcarpan3,asalcarpan1 + asalcarpan2 + asalcarpan3 +1); printf("\n K(14) + %d = %d",asalcarpan1,asalcarpan1+14);
				return 0;
			

		    }
		
	
		
		
		
		if(basamak1a2 - basamak2a2 <=-1){
		
		
		sonuc1 = pow(asal1,basamak1-basamak2) + asal1*(basamak2a2-basamak1a2) + asal1 + asal2;
		sonuc2 = pow(asal2,basamak1-basamak2) + asal2*(basamak2a2-basamak1a2) + asal1 + asal2; 

		
		if (sonuc1 >=10 && sonuc1 <=99){
			
			basamak1s1 = 0;
			basamak2s1 = sonuc1 % 10;
			basamak3s1 = sonuc1 / 10;
		}
	    if(sonuc2 >=10 && sonuc2 <=99){
			basamak1s2 = 0;
			basamak2s2 = sonuc2 % 10;
			basamak3s2 = sonuc2 / 10;
		}
		
	    if (sonuc1 >=100 && sonuc1 <=999){
			basamak1s1 = sonuc1 % 10;  
			int basamak2s1g = sonuc1 / 10;
		    basamak2s1 = basamak2s1g % 10;
            basamak3s1 = sonuc1 / 100;
			
		}
		
		if (sonuc2 >=100 && sonuc2 <=999){
			basamak1s2 = sonuc2 % 10;  
			int basamak2s2g = sonuc2 / 10;
		    basamak2s2 = basamak2s2g % 10;
            basamak3s2 = sonuc2 / 100;
			
		}
		
		 if(sonuc1 >=1000 && sonuc1 <=9999){
			
			int basamak1s1g = sonuc1 / 10;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = sonuc1 / 10;
			int basamak2s1gg = basamak2s1g / 10;
			basamak2s1 = basamak2s1gg % 10;
			basamak3s1 = sonuc1 / 1000;
			
		}
		
		 if(sonuc2 >=1000 && sonuc2 <=9999){
			int basamak1s2g = sonuc2 / 10;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = sonuc2 / 10;
			int basamak2s2gg = basamak2s2g / 10;
			basamak2s2 = basamak2s2gg % 10;
			basamak3s2 = sonuc2 / 1000;
		}
		
		 if(sonuc1 >=10000 && sonuc1 <=99999){
			
			int basamak1s1g = sonuc1 / 100;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000;
			
			
		}
		 if(sonuc2 >=10000 && sonuc2 <=99999){
			int basamak1s2g = sonuc2 / 100;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000;
		}
		
		 if(sonuc1 >=100000 && sonuc1 <= 999999){
			int basamak1s1g = sonuc1 / 1000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000;
		}
		 if(sonuc2 >=100000 && sonuc2 <= 999999){
			int basamak1s2g = sonuc2 / 1000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000;
		}
		 if(sonuc1 >=1000000 && sonuc1 <= 9999999){
			int basamak1s1g = sonuc1 / 10000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000;
		}
		 if(sonuc2 >= 1000000 && sonuc2 <= 9999999){
			int basamak1s2g = sonuc2 / 10000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000;
		}
		 if(sonuc1 >= 10000000 && sonuc1 <= 99999999){
			int basamak1s1g = sonuc1 / 100000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
		    basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000;
		}
		 if(sonuc2 >= 10000000 && sonuc2 <= 99999999){
            int basamak1s2g = sonuc2 / 100000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000;
		}
		 if(sonuc1 >= 100000000 && sonuc1 <= 999999999){
			int basamak1s1g = sonuc1 / 1000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000;
			
		}
		 if(sonuc2 >= 100000000 && sonuc2 <= 999999999){
            int basamak1s2g = sonuc2 / 1000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000;
		}
		 if(sonuc1 >= 1000000000 && sonuc1 <= 9999999999){
			int basamak1s1g = sonuc1 / 10000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000000;
		}
		 if(sonuc2 >= 1000000000 && sonuc2 <= 9999999999){
            int basamak1s2g = sonuc2 / 10000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000000;
		}
		 if(sonuc1 >= 10000000000 && sonuc1 <= 99999999999){
			int basamak1s1g = sonuc1 / 100000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000000;
		}
		 if(sonuc2 >= 10000000000 && sonuc2 <= 99999999999){
            int basamak1s2g = sonuc2 / 100000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000000;
		}
		 if(sonuc1 >= 100000000000 && sonuc1 <= 999999999999){
			int basamak1s1g = sonuc1 / 1000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000000;
		}
		 if(sonuc2 >= 100000000000 && sonuc2 <= 999999999999){
            int basamak1s2g = sonuc2 / 1000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000000;
		}
		 if(sonuc1 >= 1000000000000 && sonuc1 <= 9999999999999){
			int basamak1s1g = sonuc1 / 10000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000000000;
		}
		 if(sonuc2 >= 1000000000000 && sonuc2 <= 9999999999999){
            int basamak1s2g = sonuc2 / 10000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000000000;
		}
		 if(sonuc1 >= 10000000000000 && sonuc1 <= 99999999999999){
			int basamak1s1g = sonuc1 / 100000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000000000;
		}
		 if(sonuc2 >= 10000000000000 && sonuc2 <= 99999999999999){
            int basamak1s2g = sonuc2 / 100000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000000000;
		}
		 if(sonuc1 >= 100000000000000 && sonuc1 <= 999999999999999){
			int basamak1s1g = sonuc1 / 1000000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
		    basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000000000;
		}
		 if(sonuc2 >= 100000000000000 && sonuc2 <= 999999999999999){
            int basamak1s2g = sonuc2 / 1000000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000000000;
		}
			determinant1 = basamak1s1 + basamak1s2 + asal1 + asal2; 
		    determinant2 = basamak2s1 + basamak2s2 + asal2; 
		    determinant3 = basamak3s1 + basamak3s2 + asal1;
			determinantsonuc = basamak3s1*(basamak2s2 * determinant1 - (basamak1s2 * determinant2)) - basamak2s1 * ((basamak3s2 * determinant1) - (basamak1s2 * determinant3 )) + basamak1s1 * ((basamak3s2 * determinant2) - (basamak2s2 * determinant3));

		    if(determinantsonuc == 0){
		    	
		    	printf("Sonu� 0 ��kt� L�tfen Tekrar Deneyiniz");
				return 0;
			}
		    
		    
			
			for(i=2;determinantsonuc!=1;i++){
				
				if(determinantsonuc % i == 0){
					determinantsonuc /= i;
	                printf("%d ",i);
					i--;					
					
					}
					

				}
				printf("L�tfen do�ru sonucu istiyorsan�z yukar�da g�rd���n�z ilk �� asal �arpan� s�ras�yla yaz�n�z. \n \n NOT : E�er verilen say�n�n asal �arpanlar� ��ten az ise bo� kalan yerleri 1 rakam� ile doldurunuz ve ��kan sonu�ta -1 de�eri varsa bu de�eri yazmay�n�z g�rmezden geliniz.  \n \n :");
				scanf("%d",&asalcarpan1);
				printf("\n");
				scanf("%d",&asalcarpan2);
				printf("\n");
				scanf("%d",&asalcarpan3);
				
				if(asalcarpan1 > 29){
					
					asalcarpan1 = asalcarpan1 % 29;
						
					}
				
			
				
						
					
				else if(asalcarpan2 > 29){
					
					asalcarpan2 = asalcarpan2 % 29;
					
				}
				else if(asalcarpan3 > 29){
				
					asalcarpan3 = asalcarpan3 % 29;
					
				}
				
				
				printf(" A = 1 \t \t B = 2 \t \t C = 3 \t \t � = 4 \t \t D = 5 \t \t E = 6 \t \t F = 7 \t \t G = 8 \t \t � = 9 \t \t H = 10 \n I  = 11 \t � = 12 \t J = 13 \t K = 14 \t L = 15 \t M = 16 \t N = 17 \t O = 18 \t � = 19 \t P = 20\n R = 21 \t S = 22 \t � = 23 \t T = 24 \t U = 25 \t � = 26 \t V = 27 \t Y = 28 \t Z = 29 ");
				printf("\n\n\n �ifrelemek istedi�iniz metini l�tfen yukar�daki alfabetik s�ras�ndaki say�sal de�erini bulup onlar� %d %d %d say�lar�yla soldan sa�a do�ru toplay�n�z \n \n",asalcarpan1,asalcarpan1+asalcarpan2,asalcarpan1+asalcarpan2+asalcarpan3); printf(" �RNEK : T�B�TAK i�in  \n T(24) + %d = %d",asalcarpan1,asalcarpan1+24); printf("\n �(26) + %d = %d",asalcarpan1+asalcarpan2,asalcarpan1+asalcarpan2+26); printf("\n B(2) + %d = %d",asalcarpan1+asalcarpan2+asalcarpan3,asalcarpan1+asalcarpan2+asalcarpan3+2); printf("\n �(12) + %d = %d",asalcarpan1,asalcarpan1+12); printf("\n T(24) + %d = %d",asalcarpan1+asalcarpan2,asalcarpan1+asalcarpan2+24); printf("\n A(1) + %d = %d",asalcarpan1+asalcarpan2+asalcarpan3,asalcarpan1+asalcarpan2+asalcarpan3+1); printf("\n K(14) + %d = %d",asalcarpan1,asalcarpan1+14);
				return 0;
			}
		
		
		
	}
		
		   else if(basamak1-basamak2 < 0){
		   	
			if(basamak2a2 - basamak1a2 < 0){
		
		sonuc1 = pow(asal1,basamak2-basamak1)+ asal1*(basamak1a2-basamak2a2) + asal1 + asal2;
		sonuc2 = pow(asal2,basamak2-basamak1) + asal2*(basamak1a2-basamak2a2) + asal1 + asal2; 

	
		if (sonuc1 >=10 && sonuc1 <=99){
			
			basamak1s1 = 0;
			basamak2s1 = sonuc1 % 10;
			basamak3s1 = sonuc1 / 10;
		}
	    if(sonuc2 >=10 && sonuc2 <=99){
			basamak1s2 = 0;
			basamak2s2 = sonuc2 % 10;
			basamak3s2 = sonuc2 / 10;
		}
		
	    if (sonuc1 >=100 && sonuc1 <=999){
			basamak1s1 = sonuc1 % 10;  
			int basamak2s1g = sonuc1 / 10;
		    basamak2s1 = basamak2s1g % 10;
            basamak3s1 = sonuc1 / 100;
			
		}
		
		if (sonuc2 >=100 && sonuc2 <=999){
			basamak1s2 = sonuc2 % 10;  
			int basamak2s2g = sonuc2 / 10;
		    basamak2s2 = basamak2s2g % 10;
            basamak3s2 = sonuc2 / 100;
			
		}
		
		 if(sonuc1 >=1000 && sonuc1 <=9999){
			
			int basamak1s1g = sonuc1 / 10;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = sonuc1 / 10;
			int basamak2s1gg = basamak2s1g / 10;
			basamak2s1 = basamak2s1gg % 10;
			basamak3s1 = sonuc1 / 1000;
			
		}
		
		 if(sonuc2 >=1000 && sonuc2 <=9999){
			int basamak1s2g = sonuc2 / 10;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = sonuc2 / 10;
			int basamak2s2gg = basamak2s2g / 10;
			basamak2s2 = basamak2s2gg % 10;
			basamak3s2 = sonuc2 / 1000;
		}
		
		 if(sonuc1 >=10000 && sonuc1 <=99999){
			
			int basamak1s1g = sonuc1 / 100;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000;
			
			
		}
		 if(sonuc2 >=10000 && sonuc2 <=99999){
			int basamak1s2g = sonuc2 / 100;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000;
		}
		
		 if(sonuc1 >=100000 && sonuc1 <= 999999){
			int basamak1s1g = sonuc1 / 1000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000;
		}
		 if(sonuc2 >=100000 && sonuc2 <= 999999){
			int basamak1s2g = sonuc2 / 1000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000;
		}
		 if(sonuc1 >=1000000 && sonuc1 <= 9999999){
			int basamak1s1g = sonuc1 / 10000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000;
		}
		 if(sonuc2 >= 1000000 && sonuc2 <= 9999999){
			int basamak1s2g = sonuc2 / 10000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000;
		}
		 if(sonuc1 >= 10000000 && sonuc1 <= 99999999){
			int basamak1s1g = sonuc1 / 100000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
		    basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000;
		}
		 if(sonuc2 >= 10000000 && sonuc2 <= 99999999){
            int basamak1s2g = sonuc2 / 100000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000;
		}
		 if(sonuc1 >= 100000000 && sonuc1 <= 999999999){
			int basamak1s1g = sonuc1 / 1000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000;
			
		}
		 if(sonuc2 >= 100000000 && sonuc2 <= 999999999){
            int basamak1s2g = sonuc2 / 1000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000;
		}
		 if(sonuc1 >= 1000000000 && sonuc1 <= 9999999999){
			int basamak1s1g = sonuc1 / 10000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000000;
		}
		 if(sonuc2 >= 1000000000 && sonuc2 <= 9999999999){
            int basamak1s2g = sonuc2 / 10000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000000;
		}
		 if(sonuc1 >= 10000000000 && sonuc1 <= 99999999999){
			int basamak1s1g = sonuc1 / 100000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000000;
		}
		 if(sonuc2 >= 10000000000 && sonuc2 <= 99999999999){
            int basamak1s2g = sonuc2 / 100000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000000;
		}
		 if(sonuc1 >= 100000000000 && sonuc1 <= 999999999999){
			int basamak1s1g = sonuc1 / 1000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000000;
		}
		 if(sonuc2 >= 100000000000 && sonuc2 <= 999999999999){
            int basamak1s2g = sonuc2 / 1000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000000;
		}
		 if(sonuc1 >= 1000000000000 && sonuc1 <= 9999999999999){
			int basamak1s1g = sonuc1 / 10000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000000000;
		}
		 if(sonuc2 >= 1000000000000 && sonuc2 <= 9999999999999){
            int basamak1s2g = sonuc2 / 10000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000000000;
		}
		 if(sonuc1 >= 10000000000000 && sonuc1 <= 99999999999999){
			int basamak1s1g = sonuc1 / 100000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000000000;
		}
		 if(sonuc2 >= 10000000000000 && sonuc2 <= 99999999999999){
            int basamak1s2g = sonuc2 / 100000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000000000;
		}
		 if(sonuc1 >= 100000000000000 && sonuc1 <= 999999999999999){
			int basamak1s1g = sonuc1 / 1000000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
		    basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000000000;
		}
		 if(sonuc2 >= 100000000000000 && sonuc2 <= 999999999999999){
            int basamak1s2g = sonuc2 / 1000000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000000000;
		}
		    determinant1 = basamak1s1 + basamak1s2 + asal1 + asal2; // BURADA 3X3 DETERM�NANT ��LEM�M�Z�N 3'�NC� SATIRINDAK� �LK S�TUNUNUN DE�ER�N� BULDUK.
		    determinant2 = basamak2s1 + basamak2s2 + asal2; // BURADA 3X3 DETERM�NANT ��LEM�M�Z�N 3'�NC� SATIRINDAK� �K�NC� S�TUNUNUN DE�ER�N� BULDUK.
		    determinant3 = basamak3s1 + basamak3s2 + asal1; // BURADA 3X3 DETERM�NANT ��LEM�M�Z�N 3'�NC� SATIRINDAK� ���NC� S�TUNUNUN DE�ER�N� BULDUK.
			determinantsonuc = basamak3s1*(basamak2s2 * determinant1 - (basamak1s2 * determinant2)) - basamak2s1 * ((basamak3s2 * determinant1) - (basamak1s2 * determinant3 )) + basamak1s1 * ((basamak3s2 * determinant2) - (basamak2s2 * determinant3));

		    if(determinantsonuc == 0){
		    	
		    	printf("Sonu� 0 ��kt� L�tfen Tekrar Deneyiniz");
				return 0;
			}
		    
		    
			
			for(i=2;determinantsonuc!=1;i++){
				
				if(determinantsonuc % i == 0){
					determinantsonuc /= i;
	                printf("%d ",i);
					i--;					
					
					}
					

				}
				printf("L�tfen do�ru sonucu istiyorsan�z yukar�da g�rd���n�z ilk �� asal �arpan� s�ras�yla yaz�n�z. \n \n NOT : E�er verilen say�n�n asal �arpanlar� ��ten az ise bo� kalan yerleri 1 rakam� ile doldurunuz ve ��kan sonu�ta -1 de�eri varsa bu de�eri yazmay�n�z g�rmezden geliniz.  \n \n :");
				scanf("%d",&asalcarpan1);
				printf("\n");
				scanf("%d",&asalcarpan2);
				printf("\n");
				scanf("%d",&asalcarpan3);
				
				if(asalcarpan1 > 29){
					
					asalcarpan1 = asalcarpan1 % 29;
						
					}
				
			
				
						
					
				else if(asalcarpan2 > 29){
					
					asalcarpan2 = asalcarpan2 % 29;
					
				}
				else if(asalcarpan3 > 29){
				
					asalcarpan3 = asalcarpan3 % 29;
					
				}
				
				
				printf(" A = 1 \t \t B = 2 \t \t C = 3 \t \t � = 4 \t \t D = 5 \t \t E = 6 \t \t F = 7 \t \t G = 8 \t \t � = 9 \t \t H = 10 \n I  = 11 \t � = 12 \t J = 13 \t K = 14 \t L = 15 \t M = 16 \t N = 17 \t O = 18 \t � = 19 \t P = 20\n R = 21 \t S = 22 \t � = 23 \t T = 24 \t U = 25 \t � = 26 \t V = 27 \t Y = 28 \t Z = 29 ");
				printf("\n\n\n �ifrelemek istedi�iniz metini l�tfen yukar�daki alfabetik s�ras�ndaki say�sal de�erini bulup onlar� %d %d %d say�lar�yla soldan sa�a do�ru toplay�n�z \n \n",asalcarpan1,asalcarpan1+asalcarpan2,asalcarpan1+asalcarpan2+asalcarpan3); printf(" �RNEK : T�B�TAK i�in  \n T(24) + %d = %d",asalcarpan1,asalcarpan1+24); printf("\n �(26) + %d = %d",asalcarpan1+asalcarpan2,asalcarpan1+asalcarpan2+26); printf("\n B(2) + %d = %d",asalcarpan1+asalcarpan2+asalcarpan3,asalcarpan1+asalcarpan2+asalcarpan3+2); printf("\n �(12) + %d = %d",asalcarpan1,asalcarpan1+12); printf("\n T(24) + %d = %d",asalcarpan1+asalcarpan2,asalcarpan1+asalcarpan2+24); printf("\n A(1) + %d = %d",asalcarpan1+asalcarpan2+asalcarpan3,asalcarpan1+asalcarpan2+asalcarpan3+1); printf("\n K(14) + %d = %d",asalcarpan1,asalcarpan1+14);
				return 0;
			
				
			
		}
		
		if(basamak1a2 - basamak2a2 <= -1){
			
		sonuc1 = pow(asal1,basamak2-basamak1) + asal1*(basamak2a2-basamak1a2) + asal1 + asal2;
		sonuc2 = pow(asal2,basamak2-basamak1) + asal2*(basamak2a2-basamak1a2) + asal1 + asal2; 
		
		if (sonuc1 >=10 && sonuc1 <=99){
			
			basamak1s1 = 0;
			basamak2s1 = sonuc1 % 10;
			basamak3s1 = sonuc1 / 10;
		}
	    if(sonuc2 >=10 && sonuc2 <=99){
			basamak1s2 = 0;
			basamak2s2 = sonuc2 % 10;
			basamak3s2 = sonuc2 / 10;
		}
		
	    if (sonuc1 >=100 && sonuc1 <=999){
			basamak1s1 = sonuc1 % 10;  
			int basamak2s1g = sonuc1 / 10;
		    basamak2s1 = basamak2s1g % 10;
            basamak3s1 = sonuc1 / 100;
			
		}
		
		if (sonuc2 >=100 && sonuc2 <=999){
			basamak1s2 = sonuc2 % 10;  
			int basamak2s2g = sonuc2 / 10;
		    basamak2s2 = basamak2s2g % 10;
            basamak3s2 = sonuc2 / 100;
			
		}
		
		 if(sonuc1 >=1000 && sonuc1 <=9999){
			
			int basamak1s1g = sonuc1 / 10;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = sonuc1 / 10;
			int basamak2s1gg = basamak2s1g / 10;
			basamak2s1 = basamak2s1gg % 10;
			basamak3s1 = sonuc1 / 1000;
			
		}
		
		 if(sonuc2 >=1000 && sonuc2 <=9999){
			int basamak1s2g = sonuc2 / 10;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = sonuc2 / 10;
			int basamak2s2gg = basamak2s2g / 10;
			basamak2s2 = basamak2s2gg % 10;
			basamak3s2 = sonuc2 / 1000;
		}
		
		 if(sonuc1 >=10000 && sonuc1 <=99999){
			
			int basamak1s1g = sonuc1 / 100;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000;
			
			
		}
		 if(sonuc2 >=10000 && sonuc2 <=99999){
			int basamak1s2g = sonuc2 / 100;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000;
		}
		
		 if(sonuc1 >=100000 && sonuc1 <= 999999){
			int basamak1s1g = sonuc1 / 1000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000;
		}
		 if(sonuc2 >=100000 && sonuc2 <= 999999){
			int basamak1s2g = sonuc2 / 1000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000;
		}
		 if(sonuc1 >=1000000 && sonuc1 <= 9999999){
			int basamak1s1g = sonuc1 / 10000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000;
		}
		 if(sonuc2 >= 1000000 && sonuc2 <= 9999999){
			int basamak1s2g = sonuc2 / 10000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000;
		}
		 if(sonuc1 >= 10000000 && sonuc1 <= 99999999){
			int basamak1s1g = sonuc1 / 100000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
		    basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000;
		}
		 if(sonuc2 >= 10000000 && sonuc2 <= 99999999){
            int basamak1s2g = sonuc2 / 100000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000;
		}
		 if(sonuc1 >= 100000000 && sonuc1 <= 999999999){
			int basamak1s1g = sonuc1 / 1000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000;
			
		}
		 if(sonuc2 >= 100000000 && sonuc2 <= 999999999){
            int basamak1s2g = sonuc2 / 1000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000;
		}
		 if(sonuc1 >= 1000000000 && sonuc1 <= 9999999999){
			int basamak1s1g = sonuc1 / 10000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000000;
		}
		 if(sonuc2 >= 1000000000 && sonuc2 <= 9999999999){
            int basamak1s2g = sonuc2 / 10000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000000;
		}
		 if(sonuc1 >= 10000000000 && sonuc1 <= 99999999999){
			int basamak1s1g = sonuc1 / 100000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000000;
		}
		 if(sonuc2 >= 10000000000 && sonuc2 <= 99999999999){
            int basamak1s2g = sonuc2 / 100000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000000;
		}
		 if(sonuc1 >= 100000000000 && sonuc1 <= 999999999999){
			int basamak1s1g = sonuc1 / 1000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000000;
		}
		 if(sonuc2 >= 100000000000 && sonuc2 <= 999999999999){
            int basamak1s2g = sonuc2 / 1000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000000;
		}
		 if(sonuc1 >= 1000000000000 && sonuc1 <= 9999999999999){
			int basamak1s1g = sonuc1 / 10000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000000000;
		}
		 if(sonuc2 >= 1000000000000 && sonuc2 <= 9999999999999){
            int basamak1s2g = sonuc2 / 10000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000000000;
		}
		 if(sonuc1 >= 10000000000000 && sonuc1 <= 99999999999999){
			int basamak1s1g = sonuc1 / 100000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000000000;
		}
		 if(sonuc2 >= 10000000000000 && sonuc2 <= 99999999999999){
            int basamak1s2g = sonuc2 / 100000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000000000;
		}
		 if(sonuc1 >= 100000000000000 && sonuc1 <= 999999999999999){
			int basamak1s1g = sonuc1 / 1000000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
		    basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000000000;
		}
		 if(sonuc2 >= 100000000000000 && sonuc2 <= 999999999999999){
            int basamak1s2g = sonuc2 / 1000000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000000000;
		}
		    determinant1 = basamak1s1 + basamak1s2 + asal1 + asal2; 
		    determinant2 = basamak2s1 + basamak2s2 + asal2; 
		    determinant3 = basamak3s1 + basamak3s2 + asal1; 
			determinantsonuc = basamak3s1*(basamak2s2 * determinant1 - (basamak1s2 * determinant2)) - basamak2s1 * ((basamak3s2 * determinant1) - (basamak1s2 * determinant3 )) + basamak1s1 * ((basamak3s2 * determinant2) - (basamak2s2 * determinant3));


		    if(determinantsonuc == 0){
		    	
		    	printf("Sonu� 0 ��kt� L�tfen Tekrar Deneyiniz");
				return 0;
			}
		    
		    
			
			for(i=2;determinantsonuc!=1;i++){
				
				if(determinantsonuc % i == 0){
					determinantsonuc /= i;
	                printf("%d ",i);
					i--;					
					
					}
					

				}
				printf("L�tfen do�ru sonucu istiyorsan�z yukar�da g�rd���n�z ilk �� asal �arpan� s�ras�yla yaz�n�z. \n \n NOT : E�er verilen say�n�n asal �arpanlar� ��ten az ise bo� kalan yerleri 1 rakam� ile doldurunuz ve ��kan sonu�ta -1 de�eri varsa bu de�eri yazmay�n�z g�rmezden geliniz.  \n \n :");
				scanf("%d",&asalcarpan1);
				printf("\n");
				scanf("%d",&asalcarpan2);
				printf("\n");
				scanf("%d",&asalcarpan3);
				
				if(asalcarpan1 > 29){
					
					asalcarpan1 = asalcarpan1 % 29;
						
					}
				
			
				
						
					
				else if(asalcarpan2 > 29){
					
					asalcarpan2 = asalcarpan2 % 29;
					
				}
				else if(asalcarpan3 > 29){
				
					asalcarpan3 = asalcarpan3 % 29;
					
				}

				
				
				printf(" A = 1 \t \t B = 2 \t \t C = 3 \t \t � = 4 \t \t D = 5 \t \t E = 6 \t \t F = 7 \t \t G = 8 \t \t � = 9 \t \t H = 10 \n I  = 11 \t � = 12 \t J = 13 \t K = 14 \t L = 15 \t M = 16 \t N = 17 \t O = 18 \t � = 19 \t P = 20\n R = 21 \t S = 22 \t � = 23 \t T = 24 \t U = 25 \t � = 26 \t V = 27 \t Y = 28 \t Z = 29 ");
				printf("\n\n\n �ifrelemek istedi�iniz metini l�tfen yukar�daki alfabetik s�ras�ndaki say�sal de�erini bulup onlar� %d %d %d say�lar�yla soldan sa�a do�ru toplay�n�z \n \n",asalcarpan1,asalcarpan1+asalcarpan2,asalcarpan1+asalcarpan2+asalcarpan3); printf(" �RNEK : T�B�TAK i�in  \n T(24) + %d = %d",asalcarpan1,asalcarpan1+24); printf("\n �(26) + %d = %d",asalcarpan1+asalcarpan2,asalcarpan1+asalcarpan2+26); printf("\n B(2) + %d = %d",asalcarpan1+asalcarpan2+asalcarpan3,asalcarpan1+asalcarpan2+asalcarpan3+2); printf("\n �(12) + %d = %d",asalcarpan1,asalcarpan1+12); printf("\n T(24) + %d = %d",asalcarpan1+asalcarpan2,asalcarpan1+asalcarpan2+24); printf("\n A(1) + %d = %d",asalcarpan1+asalcarpan2+asalcarpan3,asalcarpan1+asalcarpan2+asalcarpan3+1); printf("\n K(14) + %d = %d",asalcarpan1,asalcarpan1+14);
				return 0;
			}
		}
	}
		else if(secim == 2){

	printf("�zcehar �ifre ��z�c�ye ho� geldiniz! \n \nL�tfen iki basamakl� ilk asal tam say�n�z� giriniz \n \n : ");
	scanf("%d",&asal1); //ASAL SAYIYI �STED�K.
	
	for(i=2;i<asal1;i++)  //ASAL SAYIYI ANLAYAB�LECEK B�R D�NG� YAPTIK.
	{
		if(asal1%i==0){
			sayac++;
		}
	}
		if(sayac!=0){
			printf("�zg�n�z bu bir asal say� veya iki basamakl� bir say� de�il.L�tfen tekrar deneyin");
			return 0;
		}
	if(asal1 <= 1 ){
		printf("Girdi�iniz tam say� 1 de�erinden b�y�k olmal�d�r.");
		return 0;
	}
	
	printf("\n\nL�tfen iki ikinci asal tam say�n�z� giriniz : ");
	scanf("%d",&asal2); // BU SEFER �K�NC� ASAL SAYIYI �STED�K.
	for(i=2;i<asal2;i++)  //Y�NE AYNI D�NG�.
	{
		if(asal2%i==0){
			sayac++;
		}
	}
		if(sayac!=0){
			printf("�zg�n�z bu bir asal say� veya iki basamakl� bir say� de�il.L�tfen tekrar deneyin");
			return 0;
		}
	if(asal2 <= 1 ){
		printf("Girdi�iniz tam say� 1 de�erinden b�y�k olmal�d�r.");
		return 0;
	}
	
	 basamak1 = asal1 % 10;
	 basamak2 = asal1 / 10;     
	 basamak1a2 = asal2 % 10;
	 basamak2a2 = asal2 / 10;	
	
	
	if(basamak2-basamak1 <= -1 ){
		
			if(basamak2a2 - basamak1a2 <= -1){
			
		
		sonuc1 = pow(asal1,basamak1-basamak2) + asal1*(basamak1a2-basamak2a2) + asal1 + asal2;
		sonuc2 = pow(asal2,basamak1-basamak2) + asal2*(basamak1a2-basamak2a2) + asal1 + asal2; 
		
		if (sonuc1 >=10 && sonuc1 <=99){
			
			basamak1s1 = 0;
			basamak2s1 = sonuc1 % 10;
			basamak3s1 = sonuc1 / 10;
		}
	    if(sonuc2 >=10 && sonuc2 <=99){
			basamak1s2 = 0;
			basamak2s2 = sonuc2 % 10;
			basamak3s2 = sonuc2 / 10;
		}
		
	    if (sonuc1 >=100 && sonuc1 <=999){
			basamak1s1 = sonuc1 % 10;  
			int basamak2s1g = sonuc1 / 10;
		    basamak2s1 = basamak2s1g % 10;
            basamak3s1 = sonuc1 / 100;
			
		}
		
		if (sonuc2 >=100 && sonuc2 <=999){
			basamak1s2 = sonuc2 % 10;  
			int basamak2s2g = sonuc2 / 10;
		    basamak2s2 = basamak2s2g % 10;
            basamak3s2 = sonuc2 / 100;
			
		}
		
		 if(sonuc1 >=1000 && sonuc1 <=9999){
			
			int basamak1s1g = sonuc1 / 10;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = sonuc1 / 10;
			int basamak2s1gg = basamak2s1g / 10;
			basamak2s1 = basamak2s1gg % 10;
			basamak3s1 = sonuc1 / 1000;
			
		}
		
		 if(sonuc2 >=1000 && sonuc2 <=9999){
			int basamak1s2g = sonuc2 / 10;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = sonuc2 / 10;
			int basamak2s2gg = basamak2s2g / 10;
			basamak2s2 = basamak2s2gg % 10;
			basamak3s2 = sonuc2 / 1000;
		}
		
		 if(sonuc1 >=10000 && sonuc1 <=99999){
			
			int basamak1s1g = sonuc1 / 100;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000;
			
			
		}
		 if(sonuc2 >=10000 && sonuc2 <=99999){
			int basamak1s2g = sonuc2 / 100;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000;
		}
		
		 if(sonuc1 >=100000 && sonuc1 <= 999999){
			int basamak1s1g = sonuc1 / 1000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000;
		}
		 if(sonuc2 >=100000 && sonuc2 <= 999999){
			int basamak1s2g = sonuc2 / 1000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000;
		}
		 if(sonuc1 >=1000000 && sonuc1 <= 9999999){
			int basamak1s1g = sonuc1 / 10000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000;
		}
		 if(sonuc2 >= 1000000 && sonuc2 <= 9999999){
			int basamak1s2g = sonuc2 / 10000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000;
		}
		 if(sonuc1 >= 10000000 && sonuc1 <= 99999999){
			int basamak1s1g = sonuc1 / 100000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
		    basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000;
		}
		 if(sonuc2 >= 10000000 && sonuc2 <= 99999999){
            int basamak1s2g = sonuc2 / 100000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000;
		}
		 if(sonuc1 >= 100000000 && sonuc1 <= 999999999){
			int basamak1s1g = sonuc1 / 1000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000;
			
		}
		 if(sonuc2 >= 100000000 && sonuc2 <= 999999999){
            int basamak1s2g = sonuc2 / 1000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000;
		}
		 if(sonuc1 >= 1000000000 && sonuc1 <= 9999999999){
			int basamak1s1g = sonuc1 / 10000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000000;
		}
		 if(sonuc2 >= 1000000000 && sonuc2 <= 9999999999){
            int basamak1s2g = sonuc2 / 10000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000000;
		}
		 if(sonuc1 >= 10000000000 && sonuc1 <= 99999999999){
			int basamak1s1g = sonuc1 / 100000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000000;
		}
		 if(sonuc2 >= 10000000000 && sonuc2 <= 99999999999){
            int basamak1s2g = sonuc2 / 100000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000000;
		}
		 if(sonuc1 >= 100000000000 && sonuc1 <= 999999999999){
			int basamak1s1g = sonuc1 / 1000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000000;
		}
		 if(sonuc2 >= 100000000000 && sonuc2 <= 999999999999){
            int basamak1s2g = sonuc2 / 1000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000000;
		}
		 if(sonuc1 >= 1000000000000 && sonuc1 <= 9999999999999){
			int basamak1s1g = sonuc1 / 10000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000000000;
		}
		 if(sonuc2 >= 1000000000000 && sonuc2 <= 9999999999999){
            int basamak1s2g = sonuc2 / 10000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000000000;
		}
		 if(sonuc1 >= 10000000000000 && sonuc1 <= 99999999999999){
			int basamak1s1g = sonuc1 / 100000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000000000;
		}
		 if(sonuc2 >= 10000000000000 && sonuc2 <= 99999999999999){
            int basamak1s2g = sonuc2 / 100000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000000000;
		}
		 if(sonuc1 >= 100000000000000 && sonuc1 <= 999999999999999){
			int basamak1s1g = sonuc1 / 1000000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
		    basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000000000;
		}
		 if(sonuc2 >= 100000000000000 && sonuc2 <= 999999999999999){
            int basamak1s2g = sonuc2 / 1000000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000000000;
		}
		
 
		    determinant1 = basamak1s1 + basamak1s2 + asal1 + asal2; 
		    determinant2 = basamak2s1 + basamak2s2 + asal2; 
		    determinant3 = basamak3s1 + basamak3s2 + asal1;
			determinantsonuc = basamak3s1*(basamak2s2 * determinant1 - (basamak1s2 * determinant2)) - basamak2s1 * ((basamak3s2 * determinant1) - (basamak1s2 * determinant3 )) + basamak1s1 * ((basamak3s2 * determinant2) - (basamak2s2 * determinant3));

		    if(determinantsonuc == 0){
		    	
		    	printf("Sonu� 0 ��kt� L�tfen Tekrar Deneyiniz");
				return 0;
			}
		    
		    
			
			for(i=2;determinantsonuc!=1;i++){ 
				
				if(determinantsonuc % i == 0){
					determinantsonuc /= i;
	                printf("%d ",i);
					i--;					
					
					}
					

				}
				printf("L�tfen do�ru sonucu istiyorsan�z yukar�da g�rd���n�z ilk �� asal �arpan� s�ras�yla yaz�n�z. \n \n NOT : E�er verilen say�n�n asal �arpanlar� ��ten az ise bo� kalan yerleri 1 rakam� ile doldurunuz ve ��kan sonu�ta -1 de�eri varsa bu de�eri yazmay�n�z g�rmezden geliniz.  \n \n :");
				scanf("%d",&asalcarpan1);
				printf("\n");
				scanf("%d",&asalcarpan2);
				printf("\n");
				scanf("%d",&asalcarpan3);

				if(asalcarpan1 > 29){
					
					asalcarpan1 = asalcarpan1 % 29;
						
					}
				
			
				
						
					
				else if(asalcarpan2 > 29){
					
					asalcarpan2 = asalcarpan2 % 29;
					
				}
				else if(asalcarpan3 > 29){
				
					asalcarpan3 = asalcarpan3 % 29;
					
				}
				
						
				
				
				
				printf(" A = 1 \t \t B = 2 \t \t C = 3 \t \t � = 4 \t \t D = 5 \t \t E = 6 \t \t F = 7 \t \t G = 8 \t \t � = 9 \t \t H = 10 \n I  = 11 \t � = 12 \t J = 13 \t K = 14 \t L = 15 \t M = 16 \t N = 17 \t O = 18 \t � = 19 \t P = 20\n R = 21 \t S = 22 \t � = 23 \t T = 24 \t U = 25 \t � = 26 \t V = 27 \t Y = 28 \t Z = 29 ");
				printf("\n\n\n �ifrelemek istedi�iniz metini l�tfen yukar�daki alfabetik s�ras�ndaki say�sal de�erini bulup onlar� %d %d %d say�lar�yla soldan sa�a do�ru ��kart�n�z \n \n",asalcarpan1,asalcarpan1 + asalcarpan2,asalcarpan1 + asalcarpan2 + asalcarpan3); printf(" �RNEK : T�B�TAK i�in  \n T(24) - %d = %d",asalcarpan1,asalcarpan1-24); printf("\n �(26) - %d = %d",asalcarpan1 + asalcarpan2,asalcarpan1 + asalcarpan2-26); printf("\n B(2) - %d = %d",asalcarpan1 + asalcarpan2 + asalcarpan3,asalcarpan1 + asalcarpan2 + asalcarpan3-2); printf("\n �(12) + %d = %d",asalcarpan1,asalcarpan1-12); printf("\n T(24) + %d = %d",asalcarpan1 + asalcarpan2,asalcarpan1 + asalcarpan2 -24); printf("\n A(1) + %d = %d",asalcarpan1 + asalcarpan2 + asalcarpan3,asalcarpan1 + asalcarpan2 + asalcarpan3 -1); printf("\n K(14) + %d = %d",asalcarpan1,asalcarpan1-14);
				return 0;
			

		    }
		
	
		
		
		
		if(basamak1a2 - basamak2a2 <=-1){
		
		
		sonuc1 = pow(asal1,basamak1-basamak2) + asal1*(basamak2a2-basamak1a2) + asal1 + asal2;
		sonuc2 = pow(asal2,basamak1-basamak2) + asal2*(basamak2a2-basamak1a2) + asal1 + asal2; 

		
		if (sonuc1 >=10 && sonuc1 <=99){
			
			basamak1s1 = 0;
			basamak2s1 = sonuc1 % 10;
			basamak3s1 = sonuc1 / 10;
		}
	    if(sonuc2 >=10 && sonuc2 <=99){
			basamak1s2 = 0;
			basamak2s2 = sonuc2 % 10;
			basamak3s2 = sonuc2 / 10;
		}
		
	    if (sonuc1 >=100 && sonuc1 <=999){
			basamak1s1 = sonuc1 % 10;  
			int basamak2s1g = sonuc1 / 10;
		    basamak2s1 = basamak2s1g % 10;
            basamak3s1 = sonuc1 / 100;
			
		}
		
		if (sonuc2 >=100 && sonuc2 <=999){
			basamak1s2 = sonuc2 % 10;  
			int basamak2s2g = sonuc2 / 10;
		    basamak2s2 = basamak2s2g % 10;
            basamak3s2 = sonuc2 / 100;
			
		}
		
		 if(sonuc1 >=1000 && sonuc1 <=9999){
			
			int basamak1s1g = sonuc1 / 10;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = sonuc1 / 10;
			int basamak2s1gg = basamak2s1g / 10;
			basamak2s1 = basamak2s1gg % 10;
			basamak3s1 = sonuc1 / 1000;
			
		}
		
		 if(sonuc2 >=1000 && sonuc2 <=9999){
			int basamak1s2g = sonuc2 / 10;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = sonuc2 / 10;
			int basamak2s2gg = basamak2s2g / 10;
			basamak2s2 = basamak2s2gg % 10;
			basamak3s2 = sonuc2 / 1000;
		}
		
		 if(sonuc1 >=10000 && sonuc1 <=99999){
			
			int basamak1s1g = sonuc1 / 100;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000;
			
			
		}
		 if(sonuc2 >=10000 && sonuc2 <=99999){
			int basamak1s2g = sonuc2 / 100;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000;
		}
		
		 if(sonuc1 >=100000 && sonuc1 <= 999999){
			int basamak1s1g = sonuc1 / 1000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000;
		}
		 if(sonuc2 >=100000 && sonuc2 <= 999999){
			int basamak1s2g = sonuc2 / 1000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000;
		}
		 if(sonuc1 >=1000000 && sonuc1 <= 9999999){
			int basamak1s1g = sonuc1 / 10000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000;
		}
		 if(sonuc2 >= 1000000 && sonuc2 <= 9999999){
			int basamak1s2g = sonuc2 / 10000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000;
		}
		 if(sonuc1 >= 10000000 && sonuc1 <= 99999999){
			int basamak1s1g = sonuc1 / 100000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
		    basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000;
		}
		 if(sonuc2 >= 10000000 && sonuc2 <= 99999999){
            int basamak1s2g = sonuc2 / 100000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000;
		}
		 if(sonuc1 >= 100000000 && sonuc1 <= 999999999){
			int basamak1s1g = sonuc1 / 1000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000;
			
		}
		 if(sonuc2 >= 100000000 && sonuc2 <= 999999999){
            int basamak1s2g = sonuc2 / 1000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000;
		}
		 if(sonuc1 >= 1000000000 && sonuc1 <= 9999999999){
			int basamak1s1g = sonuc1 / 10000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000000;
		}
		 if(sonuc2 >= 1000000000 && sonuc2 <= 9999999999){
            int basamak1s2g = sonuc2 / 10000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000000;
		}
		 if(sonuc1 >= 10000000000 && sonuc1 <= 99999999999){
			int basamak1s1g = sonuc1 / 100000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000000;
		}
		 if(sonuc2 >= 10000000000 && sonuc2 <= 99999999999){
            int basamak1s2g = sonuc2 / 100000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000000;
		}
		 if(sonuc1 >= 100000000000 && sonuc1 <= 999999999999){
			int basamak1s1g = sonuc1 / 1000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000000;
		}
		 if(sonuc2 >= 100000000000 && sonuc2 <= 999999999999){
            int basamak1s2g = sonuc2 / 1000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000000;
		}
		 if(sonuc1 >= 1000000000000 && sonuc1 <= 9999999999999){
			int basamak1s1g = sonuc1 / 10000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000000000;
		}
		 if(sonuc2 >= 1000000000000 && sonuc2 <= 9999999999999){
            int basamak1s2g = sonuc2 / 10000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000000000;
		}
		 if(sonuc1 >= 10000000000000 && sonuc1 <= 99999999999999){
			int basamak1s1g = sonuc1 / 100000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000000000;
		}
		 if(sonuc2 >= 10000000000000 && sonuc2 <= 99999999999999){
            int basamak1s2g = sonuc2 / 100000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000000000;
		}
		 if(sonuc1 >= 100000000000000 && sonuc1 <= 999999999999999){
			int basamak1s1g = sonuc1 / 1000000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
		    basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000000000;
		}
		 if(sonuc2 >= 100000000000000 && sonuc2 <= 999999999999999){
            int basamak1s2g = sonuc2 / 1000000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000000000;
		}
			determinant1 = basamak1s1 + basamak1s2 + asal1 + asal2; 
		    determinant2 = basamak2s1 + basamak2s2 + asal2; 
		    determinant3 = basamak3s1 + basamak3s2 + asal1;
			determinantsonuc = basamak3s1*(basamak2s2 * determinant1 - (basamak1s2 * determinant2)) - basamak2s1 * ((basamak3s2 * determinant1) - (basamak1s2 * determinant3 )) + basamak1s1 * ((basamak3s2 * determinant2) - (basamak2s2 * determinant3));

		    if(determinantsonuc == 0){
		    	
		    	printf("Sonu� 0 ��kt� L�tfen Tekrar Deneyiniz");
				return 0;
			}
		    
		    
			
			for(i=2;determinantsonuc!=1;i++){
				
				if(determinantsonuc % i == 0){
					determinantsonuc /= i;
	                printf("%d ",i);
					i--;					
					
					}
					

				}
				printf("L�tfen do�ru sonucu istiyorsan�z yukar�da g�rd���n�z ilk �� asal �arpan� s�ras�yla yaz�n�z. \n \n NOT : E�er verilen say�n�n asal �arpanlar� ��ten az ise bo� kalan yerleri 1 rakam� ile doldurunuz ve ��kan sonu�ta -1 de�eri varsa bu de�eri yazmay�n�z g�rmezden geliniz.  \n \n :");
				scanf("%d",&asalcarpan1);
				printf("\n");
				scanf("%d",&asalcarpan2);
				printf("\n");
				scanf("%d",&asalcarpan3);
				
				if(asalcarpan1 > 29){
					
					asalcarpan1 = asalcarpan1 % 29;
						
					}
				
			
				
						
					
				else if(asalcarpan2 > 29){
					
					asalcarpan2 = asalcarpan2 % 29;
					
				}
				else if(asalcarpan3 > 29){
				
					asalcarpan3 = asalcarpan3 % 29;
					
				}
				
				
				printf(" A = 1 \t \t B = 2 \t \t C = 3 \t \t � = 4 \t \t D = 5 \t \t E = 6 \t \t F = 7 \t \t G = 8 \t \t � = 9 \t \t H = 10 \n I  = 11 \t � = 12 \t J = 13 \t K = 14 \t L = 15 \t M = 16 \t N = 17 \t O = 18 \t � = 19 \t P = 20\n R = 21 \t S = 22 \t � = 23 \t T = 24 \t U = 25 \t � = 26 \t V = 27 \t Y = 28 \t Z = 29 ");
				printf("\n\n\n �ifrelemek istedi�iniz metini l�tfen yukar�daki alfabetik s�ras�ndaki say�sal de�erini bulup onlar� %d %d %d say�lar�yla soldan sa�a do�ru ��kart�n�z \n \n",asalcarpan1,asalcarpan1 + asalcarpan2,asalcarpan1 + asalcarpan2 + asalcarpan3); printf(" �RNEK : T�B�TAK i�in  \n T(24) - %d = %d",asalcarpan1,asalcarpan1-24); printf("\n �(26) - %d = %d",asalcarpan1 + asalcarpan2,asalcarpan1 + asalcarpan2-26); printf("\n B(2) - %d = %d",asalcarpan1 + asalcarpan2 + asalcarpan3,asalcarpan1 + asalcarpan2 + asalcarpan3-2); printf("\n �(12) + %d = %d",asalcarpan1,asalcarpan1-12); printf("\n T(24) + %d = %d",asalcarpan1 + asalcarpan2,asalcarpan1 + asalcarpan2 -24); printf("\n A(1) + %d = %d",asalcarpan1 + asalcarpan2 + asalcarpan3,asalcarpan1 + asalcarpan2 + asalcarpan3 -1); printf("\n K(14) + %d = %d",asalcarpan1,asalcarpan1-14);
				return 0;
			}
		
		
		
	}
		
		   else if(basamak1-basamak2 < 0){
		   	
			if(basamak2a2 - basamak1a2 < 0){
		
		sonuc1 = pow(asal1,basamak2-basamak1)+ asal1*(basamak1a2-basamak2a2) + asal1 + asal2;
		sonuc2 = pow(asal2,basamak2-basamak1) + asal2*(basamak1a2-basamak2a2) + asal1 + asal2; 

	
		if (sonuc1 >=10 && sonuc1 <=99){
			
			basamak1s1 = 0;
			basamak2s1 = sonuc1 % 10;
			basamak3s1 = sonuc1 / 10;
		}
	    if(sonuc2 >=10 && sonuc2 <=99){
			basamak1s2 = 0;
			basamak2s2 = sonuc2 % 10;
			basamak3s2 = sonuc2 / 10;
		}
		
	    if (sonuc1 >=100 && sonuc1 <=999){
			basamak1s1 = sonuc1 % 10;  
			int basamak2s1g = sonuc1 / 10;
		    basamak2s1 = basamak2s1g % 10;
            basamak3s1 = sonuc1 / 100;
			
		}
		
		if (sonuc2 >=100 && sonuc2 <=999){
			basamak1s2 = sonuc2 % 10;  
			int basamak2s2g = sonuc2 / 10;
		    basamak2s2 = basamak2s2g % 10;
            basamak3s2 = sonuc2 / 100;
			
		}
		
		 if(sonuc1 >=1000 && sonuc1 <=9999){
			
			int basamak1s1g = sonuc1 / 10;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = sonuc1 / 10;
			int basamak2s1gg = basamak2s1g / 10;
			basamak2s1 = basamak2s1gg % 10;
			basamak3s1 = sonuc1 / 1000;
			
		}
		
		 if(sonuc2 >=1000 && sonuc2 <=9999){
			int basamak1s2g = sonuc2 / 10;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = sonuc2 / 10;
			int basamak2s2gg = basamak2s2g / 10;
			basamak2s2 = basamak2s2gg % 10;
			basamak3s2 = sonuc2 / 1000;
		}
		
		 if(sonuc1 >=10000 && sonuc1 <=99999){
			
			int basamak1s1g = sonuc1 / 100;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000;
			
			
		}
		 if(sonuc2 >=10000 && sonuc2 <=99999){
			int basamak1s2g = sonuc2 / 100;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000;
		}
		
		 if(sonuc1 >=100000 && sonuc1 <= 999999){
			int basamak1s1g = sonuc1 / 1000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000;
		}
		 if(sonuc2 >=100000 && sonuc2 <= 999999){
			int basamak1s2g = sonuc2 / 1000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000;
		}
		 if(sonuc1 >=1000000 && sonuc1 <= 9999999){
			int basamak1s1g = sonuc1 / 10000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000;
		}
		 if(sonuc2 >= 1000000 && sonuc2 <= 9999999){
			int basamak1s2g = sonuc2 / 10000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000;
		}
		 if(sonuc1 >= 10000000 && sonuc1 <= 99999999){
			int basamak1s1g = sonuc1 / 100000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
		    basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000;
		}
		 if(sonuc2 >= 10000000 && sonuc2 <= 99999999){
            int basamak1s2g = sonuc2 / 100000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000;
		}
		 if(sonuc1 >= 100000000 && sonuc1 <= 999999999){
			int basamak1s1g = sonuc1 / 1000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000;
			
		}
		 if(sonuc2 >= 100000000 && sonuc2 <= 999999999){
            int basamak1s2g = sonuc2 / 1000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000;
		}
		 if(sonuc1 >= 1000000000 && sonuc1 <= 9999999999){
			int basamak1s1g = sonuc1 / 10000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000000;
		}
		 if(sonuc2 >= 1000000000 && sonuc2 <= 9999999999){
            int basamak1s2g = sonuc2 / 10000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000000;
		}
		 if(sonuc1 >= 10000000000 && sonuc1 <= 99999999999){
			int basamak1s1g = sonuc1 / 100000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000000;
		}
		 if(sonuc2 >= 10000000000 && sonuc2 <= 99999999999){
            int basamak1s2g = sonuc2 / 100000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000000;
		}
		 if(sonuc1 >= 100000000000 && sonuc1 <= 999999999999){
			int basamak1s1g = sonuc1 / 1000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000000;
		}
		 if(sonuc2 >= 100000000000 && sonuc2 <= 999999999999){
            int basamak1s2g = sonuc2 / 1000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000000;
		}
		 if(sonuc1 >= 1000000000000 && sonuc1 <= 9999999999999){
			int basamak1s1g = sonuc1 / 10000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000000000;
		}
		 if(sonuc2 >= 1000000000000 && sonuc2 <= 9999999999999){
            int basamak1s2g = sonuc2 / 10000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000000000;
		}
		 if(sonuc1 >= 10000000000000 && sonuc1 <= 99999999999999){
			int basamak1s1g = sonuc1 / 100000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000000000;
		}
		 if(sonuc2 >= 10000000000000 && sonuc2 <= 99999999999999){
            int basamak1s2g = sonuc2 / 100000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000000000;
		}
		 if(sonuc1 >= 100000000000000 && sonuc1 <= 999999999999999){
			int basamak1s1g = sonuc1 / 1000000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
		    basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000000000;
		}
		 if(sonuc2 >= 100000000000000 && sonuc2 <= 999999999999999){
            int basamak1s2g = sonuc2 / 1000000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000000000;
		}
		    determinant1 = basamak1s1 + basamak1s2 + asal1 + asal2; // BURADA 3X3 DETERM�NANT ��LEM�M�Z�N 3'�NC� SATIRINDAK� �LK S�TUNUNUN DE�ER�N� BULDUK.
		    determinant2 = basamak2s1 + basamak2s2 + asal2; // BURADA 3X3 DETERM�NANT ��LEM�M�Z�N 3'�NC� SATIRINDAK� �K�NC� S�TUNUNUN DE�ER�N� BULDUK.
		    determinant3 = basamak3s1 + basamak3s2 + asal1; // BURADA 3X3 DETERM�NANT ��LEM�M�Z�N 3'�NC� SATIRINDAK� ���NC� S�TUNUNUN DE�ER�N� BULDUK.
			determinantsonuc = basamak3s1*(basamak2s2 * determinant1 - (basamak1s2 * determinant2)) - basamak2s1 * ((basamak3s2 * determinant1) - (basamak1s2 * determinant3 )) + basamak1s1 * ((basamak3s2 * determinant2) - (basamak2s2 * determinant3));

		    if(determinantsonuc == 0){
		    	
		    	printf("Sonu� 0 ��kt� L�tfen Tekrar Deneyiniz");
				return 0;
			}
		    
		    
			
			for(i=2;determinantsonuc!=1;i++){
				
				if(determinantsonuc % i == 0){
					determinantsonuc /= i;
	                printf("%d ",i);
					i--;					
					
					}
					

				}
				printf("L�tfen do�ru sonucu istiyorsan�z yukar�da g�rd���n�z ilk �� asal �arpan� s�ras�yla yaz�n�z. \n \n NOT : E�er verilen say�n�n asal �arpanlar� ��ten az ise bo� kalan yerleri 1 rakam� ile doldurunuz ve ��kan sonu�ta -1 de�eri varsa bu de�eri yazmay�n�z g�rmezden geliniz.  \n \n :");
				scanf("%d",&asalcarpan1);
				printf("\n");
				scanf("%d",&asalcarpan2);
				printf("\n");
				scanf("%d",&asalcarpan3);
				
				if(asalcarpan1 > 29){
					
					asalcarpan1 = asalcarpan1 % 29;
						
					}
				
			
				
						
					
				else if(asalcarpan2 > 29){
					
					asalcarpan2 = asalcarpan2 % 29;
					
				}
				else if(asalcarpan3 > 29){
				
					asalcarpan3 = asalcarpan3 % 29;
					
				}
				
				
				printf(" A = 1 \t \t B = 2 \t \t C = 3 \t \t � = 4 \t \t D = 5 \t \t E = 6 \t \t F = 7 \t \t G = 8 \t \t � = 9 \t \t H = 10 \n I  = 11 \t � = 12 \t J = 13 \t K = 14 \t L = 15 \t M = 16 \t N = 17 \t O = 18 \t � = 19 \t P = 20\n R = 21 \t S = 22 \t � = 23 \t T = 24 \t U = 25 \t � = 26 \t V = 27 \t Y = 28 \t Z = 29 ");
				printf("\n\n\n �ifrelemek istedi�iniz metini l�tfen yukar�daki alfabetik s�ras�ndaki say�sal de�erini bulup onlar� %d %d %d say�lar�yla soldan sa�a do�ru ��kart�n�z \n \n",asalcarpan1,asalcarpan1 + asalcarpan2,asalcarpan1 + asalcarpan2 + asalcarpan3); printf(" �RNEK : T�B�TAK i�in  \n T(24) - %d = %d",asalcarpan1,asalcarpan1-24); printf("\n �(26) - %d = %d",asalcarpan1 + asalcarpan2,asalcarpan1 + asalcarpan2-26); printf("\n B(2) - %d = %d",asalcarpan1 + asalcarpan2 + asalcarpan3,asalcarpan1 + asalcarpan2 + asalcarpan3-2); printf("\n �(12) + %d = %d",asalcarpan1,asalcarpan1-12); printf("\n T(24) + %d = %d",asalcarpan1 + asalcarpan2,asalcarpan1 + asalcarpan2 -24); printf("\n A(1) + %d = %d",asalcarpan1 + asalcarpan2 + asalcarpan3,asalcarpan1 + asalcarpan2 + asalcarpan3 -1); printf("\n K(14) + %d = %d",asalcarpan1,asalcarpan1-14);
				return 0;
			
				
			
		}
		
		if(basamak1a2 - basamak2a2 <= -1){
			
		sonuc1 = pow(asal1,basamak2-basamak1) + asal1*(basamak2a2-basamak1a2) + asal1 + asal2;
		sonuc2 = pow(asal2,basamak2-basamak1) + asal2*(basamak2a2-basamak1a2) + asal1 + asal2; 
		
		if (sonuc1 >=10 && sonuc1 <=99){
			
			basamak1s1 = 0;
			basamak2s1 = sonuc1 % 10;
			basamak3s1 = sonuc1 / 10;
		}
	    if(sonuc2 >=10 && sonuc2 <=99){
			basamak1s2 = 0;
			basamak2s2 = sonuc2 % 10;
			basamak3s2 = sonuc2 / 10;
		}
		
	    if (sonuc1 >=100 && sonuc1 <=999){
			basamak1s1 = sonuc1 % 10;  
			int basamak2s1g = sonuc1 / 10;
		    basamak2s1 = basamak2s1g % 10;
            basamak3s1 = sonuc1 / 100;
			
		}
		
		if (sonuc2 >=100 && sonuc2 <=999){
			basamak1s2 = sonuc2 % 10;  
			int basamak2s2g = sonuc2 / 10;
		    basamak2s2 = basamak2s2g % 10;
            basamak3s2 = sonuc2 / 100;
			
		}
		
		 if(sonuc1 >=1000 && sonuc1 <=9999){
			
			int basamak1s1g = sonuc1 / 10;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = sonuc1 / 10;
			int basamak2s1gg = basamak2s1g / 10;
			basamak2s1 = basamak2s1gg % 10;
			basamak3s1 = sonuc1 / 1000;
			
		}
		
		 if(sonuc2 >=1000 && sonuc2 <=9999){
			int basamak1s2g = sonuc2 / 10;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = sonuc2 / 10;
			int basamak2s2gg = basamak2s2g / 10;
			basamak2s2 = basamak2s2gg % 10;
			basamak3s2 = sonuc2 / 1000;
		}
		
		 if(sonuc1 >=10000 && sonuc1 <=99999){
			
			int basamak1s1g = sonuc1 / 100;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000;
			
			
		}
		 if(sonuc2 >=10000 && sonuc2 <=99999){
			int basamak1s2g = sonuc2 / 100;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000;
		}
		
		 if(sonuc1 >=100000 && sonuc1 <= 999999){
			int basamak1s1g = sonuc1 / 1000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000;
		}
		 if(sonuc2 >=100000 && sonuc2 <= 999999){
			int basamak1s2g = sonuc2 / 1000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000;
		}
		 if(sonuc1 >=1000000 && sonuc1 <= 9999999){
			int basamak1s1g = sonuc1 / 10000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000;
		}
		 if(sonuc2 >= 1000000 && sonuc2 <= 9999999){
			int basamak1s2g = sonuc2 / 10000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000;
		}
		 if(sonuc1 >= 10000000 && sonuc1 <= 99999999){
			int basamak1s1g = sonuc1 / 100000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
		    basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000;
		}
		 if(sonuc2 >= 10000000 && sonuc2 <= 99999999){
            int basamak1s2g = sonuc2 / 100000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000;
		}
		 if(sonuc1 >= 100000000 && sonuc1 <= 999999999){
			int basamak1s1g = sonuc1 / 1000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000;
			
		}
		 if(sonuc2 >= 100000000 && sonuc2 <= 999999999){
            int basamak1s2g = sonuc2 / 1000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000;
		}
		 if(sonuc1 >= 1000000000 && sonuc1 <= 9999999999){
			int basamak1s1g = sonuc1 / 10000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000000;
		}
		 if(sonuc2 >= 1000000000 && sonuc2 <= 9999999999){
            int basamak1s2g = sonuc2 / 10000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000000;
		}
		 if(sonuc1 >= 10000000000 && sonuc1 <= 99999999999){
			int basamak1s1g = sonuc1 / 100000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000000;
		}
		 if(sonuc2 >= 10000000000 && sonuc2 <= 99999999999){
            int basamak1s2g = sonuc2 / 100000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000000;
		}
		 if(sonuc1 >= 100000000000 && sonuc1 <= 999999999999){
			int basamak1s1g = sonuc1 / 1000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000000;
		}
		 if(sonuc2 >= 100000000000 && sonuc2 <= 999999999999){
            int basamak1s2g = sonuc2 / 1000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000000;
		}
		 if(sonuc1 >= 1000000000000 && sonuc1 <= 9999999999999){
			int basamak1s1g = sonuc1 / 10000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 1000000000000;
		}
		 if(sonuc2 >= 1000000000000 && sonuc2 <= 9999999999999){
            int basamak1s2g = sonuc2 / 10000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 1000000000000;
		}
		 if(sonuc1 >= 10000000000000 && sonuc1 <= 99999999999999){
			int basamak1s1g = sonuc1 / 100000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
			basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 10000000000000;
		}
		 if(sonuc2 >= 10000000000000 && sonuc2 <= 99999999999999){
            int basamak1s2g = sonuc2 / 100000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 10000000000000;
		}
		 if(sonuc1 >= 100000000000000 && sonuc1 <= 999999999999999){
			int basamak1s1g = sonuc1 / 1000000000000;
			basamak1s1 = basamak1s1g % 10;
			int basamak2s1g = basamak1s1g / 10;
		    basamak2s1 = basamak2s1g % 10;
			basamak3s1 = sonuc1 / 100000000000000;
		}
		 if(sonuc2 >= 100000000000000 && sonuc2 <= 999999999999999){
            int basamak1s2g = sonuc2 / 1000000000000;
			basamak1s2 = basamak1s2g % 10;
			int basamak2s2g = basamak1s2g / 10;
			basamak2s2 = basamak2s2g % 10;
			basamak3s2 = sonuc2 / 100000000000000;
		}
		    determinant1 = basamak1s1 + basamak1s2 + asal1 + asal2; 
		    determinant2 = basamak2s1 + basamak2s2 + asal2; 
		    determinant3 = basamak3s1 + basamak3s2 + asal1; 
			determinantsonuc = basamak3s1*(basamak2s2 * determinant1 - (basamak1s2 * determinant2)) - basamak2s1 * ((basamak3s2 * determinant1) - (basamak1s2 * determinant3 )) + basamak1s1 * ((basamak3s2 * determinant2) - (basamak2s2 * determinant3));


		    if(determinantsonuc == 0){
		    	
		    	printf("Sonu� 0 ��kt� L�tfen Tekrar Deneyiniz");
				return 0;
			}
		    
		    
			
			for(i=2;determinantsonuc!=1;i++){
				
				if(determinantsonuc % i == 0){
					determinantsonuc /= i;
	                printf("%d ",i);
					i--;					
					
					}
					

				}
				printf("L�tfen do�ru sonucu istiyorsan�z yukar�da g�rd���n�z ilk �� asal �arpan� s�ras�yla yaz�n�z. \n \n NOT : E�er verilen say�n�n asal �arpanlar� ��ten az ise bo� kalan yerleri 1 rakam� ile doldurunuz ve ��kan sonu�ta -1 de�eri varsa bu de�eri yazmay�n�z g�rmezden geliniz.  \n \n :");
				scanf("%d",&asalcarpan1);
				printf("\n");
				scanf("%d",&asalcarpan2);
				printf("\n");
				scanf("%d",&asalcarpan3);
				
				if(asalcarpan1 > 29){
					
					asalcarpan1 = asalcarpan1 % 29;
						
					}
				
			
				
						
					
				else if(asalcarpan2 > 29){
					
					asalcarpan2 = asalcarpan2 % 29;
					
				}
				else if(asalcarpan3 > 29){
				
					asalcarpan3 = asalcarpan3 % 29;
					
				}

				
				
				printf(" A = 1 \t \t B = 2 \t \t C = 3 \t \t � = 4 \t \t D = 5 \t \t E = 6 \t \t F = 7 \t \t G = 8 \t \t � = 9 \t \t H = 10 \n I  = 11 \t � = 12 \t J = 13 \t K = 14 \t L = 15 \t M = 16 \t N = 17 \t O = 18 \t � = 19 \t P = 20\n R = 21 \t S = 22 \t � = 23 \t T = 24 \t U = 25 \t � = 26 \t V = 27 \t Y = 28 \t Z = 29 ");
				printf("\n\n\n �ifrelemek istedi�iniz metini l�tfen yukar�daki alfabetik s�ras�ndaki say�sal de�erini bulup onlar� %d %d %d say�lar�yla soldan sa�a do�ru ��kart�n�z \n \n",asalcarpan1,asalcarpan1 + asalcarpan2,asalcarpan1 + asalcarpan2 + asalcarpan3); printf(" �RNEK : T�B�TAK i�in  \n T(24) - %d = %d",asalcarpan1,asalcarpan1-24); printf("\n �(26) - %d = %d",asalcarpan1 + asalcarpan2,asalcarpan1 + asalcarpan2-26); printf("\n B(2) - %d = %d",asalcarpan1 + asalcarpan2 + asalcarpan3,asalcarpan1 + asalcarpan2 + asalcarpan3-2); printf("\n �(12) + %d = %d",asalcarpan1,asalcarpan1-12); printf("\n T(24) + %d = %d",asalcarpan1 + asalcarpan2,asalcarpan1 + asalcarpan2 -24); printf("\n A(1) + %d = %d",asalcarpan1 + asalcarpan2 + asalcarpan3,asalcarpan1 + asalcarpan2 + asalcarpan3 -1); printf("\n K(14) + %d = %d",asalcarpan1,asalcarpan1-14);
				return 0;
			}
		}
			
			
			
		}
		else{
			printf("�zg�n�z do�ru bir se�im yapmad�n�z programdan ��kart�l�yorsunuz.");
			return 0;
		}
		
			return 0;
		}
	
			
		




				
			
