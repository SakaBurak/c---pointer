#include<iostream>

using namespace std;
int faktoriyelHesapla (int);//fonksiyon olu�turudu�umu belirtiyorum//

int main(int argc, char** argv){
	int sayi=0;
	int(*fonkPtr)(int);//fonksiyona i�aret ediyorum yani fonksiyon i�aret�isi olu�turdum//
	fonkPtr=faktoriyelHesapla;//i�aret�imi fonksiyonun ba�lang�� adresine atad�m//
	cout<<"Faktoriyeli bulunaak sayiyi giriniz: "<<endl;
	cin>> sayi;
	
	int faktoriyel= (*fonkPtr)(sayi);//fonksiyonu �a��rd�m ve i�eri�ine eri�tim//
	cout<< faktoriyel;
	return 0;
}

int faktoriyelHesapla(int sayi){
	int sonuc=1;
	if(sayi<=0)
	return sonuc;
	
	int i;
	for(i=sayi;i>1;i--){
		sonuc=sonuc*i;
	}
	return sonuc;
}
