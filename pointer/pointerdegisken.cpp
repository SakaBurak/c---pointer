#include<iostream>
#include<stdarg.h>

using namespace std;

int topla(int parametreSayisi, ...);
double ortalamaBul(int parametreSaayisi, ...);
int main(int argc, char** argv){
	int sayi1=5, sayi2=10, sayi3=15;
	cout<< sayi1 << sayi2 << sayi3 << endl;
	cout<< topla(2 , sayi1,sayi2)<< endl;
	cout<< topla(3 , sayi1,sayi2,sayi3)<< endl;
	cout<< topla(5, 5,8,47,9,6)<<endl;
	cout << ortalamaBul(5, 222,333,444,555,666);
	return 0; 
}

int topla(int parametreSayisi, ...){
	va_list parametrePtr;//kaç parametrem olduðunu bilmediðim için liste oluþturdum//
	va_start (parametrePtr, parametreSayisi);//argüman sayýmý belirliyorum//
	int toplam=0;
	int i;
	for(i=0;i<parametreSayisi;i++){
		toplam+=va_arg(parametrePtr, int);//va_arg tüm ile argümanlarýma ulaþýyorum//
		va_end(parametrePtr);
	}
	return toplam;
}

double ortalamaBul(int parametreSayisi, ...){
	va_list parametrePtr;
	va_start (parametrePtr, parametreSayisi);
	int toplam=0;
	int i;
	for(i=0; i<parametreSayisi;i++){
		toplam+=va_arg(parametrePtr, int);
		
	}
	va_end(parametrePtr);
	return (double)toplam/parametreSayisi;
}
