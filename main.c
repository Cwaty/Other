#include <stdio.h>
#include <locale.h>
#include <math.h>
#define determinant 

int main(){
	
	setlocale(LC_ALL,"Turkish");
	
	int asal1,asal2,sayac,i,basamak,basamak1,basamak2,basamak3,sonuc1,sonuc2,basamak1s2,basamak2s2,basamak3s2,determinant1,determinant2,determinant3,determinantsonuc;
	
	
	printf("�zcehar �ifre ��z�c�ye ho� geldiniz! \n \nL�tfen ilk asal tam say�n�z� giriniz : ");
	scanf("%d",&asal1); //ASAL SAYIYI �STED�K.
	
	for(i=2;i<asal1;i++)  //ASAL SAYIYI ANLAYAB�LECEK B�R D�NG� YAPTIK.
	{
		if(asal1%i==0){
			sayac++;
		}
	}
		if(sayac!=0){
			printf("�zg�n�z bu bir asal say� de�il.L�tfen tekrar deneyin");
			return 0;
		}
	if(asal1 <= 1 ){
		printf("Girdi�iniz tam say� 1 de�erinden b�y�k olmal�d�r.");
		return 0;
	}
	printf("\n\nL�tfen ikinci asal tam say�n�z� giriniz : ");
	scanf("%d",&asal2); // BU SEFER �K�NC� ASAL SAYIYI �STED�K.
	for(i=2;i<asal2;i++)  //Y�NE AYNI D�NG�.
	{
		if(asal2%i==0){
			sayac++;
		}
	}
		if(sayac!=0){
			printf("�zg�n�z bu bir asal say� de�il.L�tfen tekrar deneyin");
			return 0;
		}
	if(asal2 <= 1 ){
		printf("Girdi�iniz tam say� 1 de�erinden b�y�k olmal�d�r.");
		return 0;
	}
	printf("Girdi�iniz iki asal tam say�n�n ka� basamakl� oldu�unu yazar m�sn�z ? \nNOT: Maksimum 3 basamakl� ve minimum 2 basamakl� olacak �ekilde giriniz. \n:");
	scanf("%d",&basamak;) //BASAMAK SAYISINI ALDIK.
	if(basamak == 2){
		
		asal1 % 10 = basamak1; //BURADA BASAMAKLARINA AYIRMAYA BA�LADIK 10 �LE MODUNU ALDIK VE SONU� B�ZE B�RLER BASAMA�INI VERD�.
	    basamak2 = asal1 / 10; //BURADA �K�NC� BASAMA�I BULMAK ���N 10'A B�LD�K.
		
		if(basamak1-basamak2 < 0){  // BUARADA SONUCUN NEGAT�F B�R �EK�LDE �IKMA �HT�MAL� OLDU�U ���N �F'� KULLANIYORUZ.
		
		
		asal1^(basamak1*basamak2)*-1 + asal1*(basamak1-basamak2)*-1 + asal1 + asal2 = sonuc1;
		asal2^(basamak1*basamak2)*-1 + asal2*(basamak1-basamak2)*-1 + asal1 + asal2 = sonuc2; //BU �K� ��LEMDE FONKS�YONUMUZU UYGULADIK.
		
		if(sonuc1 >=100 && sonuc2 >=100 && sonuc1 <= 999 && sonuc2 <= 999){ // BURADA SONU�LARIN 100'DEN B�Y�K OLDUKLARINI VARSAYARAK ��LEME ALDIK.
			
			sonuc1 % 10 = basamak1; //B�RLER BASAMA�INI BULDUK.
			sonuc1 / 10 = basamak2; // ONLAR BASAMA�INI BULDUK.
		    sonuc1 / 100 = basamak3; // Y�ZLER BASAMA�INI BULDUK.
		    sonuc2 % 10 = basamak1s2; // �K�NC� SONUCUN B�RLER BASAMA�INI ALDIK.
		    sonuc2 / 10 = basamak2s2 // �K�NC� SONUCUN ONLAR BASAMA�INI ALDIK.
		    sonuc2 / 100 = basamak3s2 // �K�NC� SONUCUN Y�ZLER BASAMA�INI ALDIK.
		    basamak1 + basamak1s2 = determinant1; // BURADA 3X3 DETERM�NANT ��LEM�M�Z�N 3'�NC� SATIRINDAK� �LK S�TUNUNUN DE�ER�N� BULDUK.
		    basamak2 + basamak2s2 = determinant2; // BURADA 3X3 DETERM�NANT ��LEM�M�Z�N 3'�NC� SATIRINDAK� �K�NC� S�TUNUNUN DE�ER�N� BULDUK.
		    basamak3 + basamak3s2 = determinant3; // BURADA 3X3 DETERM�NANT ��LEM�M�Z�N 3'�NC� SATIRINDAK� ���NC� S�TUNUNUN DE�ER�N� BULDUK.
		    
		    determinantsonuc = basamak3(basamak2s2 * determinant1 - basamak1s2 * determinant2) - basamak2(basamak3s2 * determinant1 - basamak1s2 * determinant3) + basamak1(basamak3s2 * determinant2 - basamak2s2 * determinant3 );
		    //YUKARIDA DETERM�NANT SONUCUNU ALDIK.
		    
			
		}
		
	}
	
	else if{basamak== 3}{
	
	
	
	}
		
		
		
	}	
	

	return 0;
	
	
}
