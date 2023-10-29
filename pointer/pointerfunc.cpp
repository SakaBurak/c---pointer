#include<iostream>

using namespace std;
int faktoriyelHesapla (int);//fonksiyon oluþturuduðumu belirtiyorum//

int main(int argc, char** argv){
	int sayi=0;
	int(*fonkPtr)(int);//fonksiyona iþaret ediyorum yani fonksiyon iþaretçisi oluþturdum//
	fonkPtr=faktoriyelHesapla;//iþaretçimi fonksiyonun baþlangýç adresine atadým//
	cout<<"Faktoriyeli bulunaak sayiyi giriniz: "<<endl;
	cin>> sayi;
	
	int faktoriyel= (*fonkPtr)(sayi);//fonksiyonu çaðýrdým ve içeriðine eriþtim//
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
