#include<iostream>

using namespace std;

void sifirla(int *);

int main(int argc, char** argv){
	int sayi=10;
	sifirla(&sayi);
	cout<< sayi<< endl;
	return 0;
}

void sifirla(int *arg){
	*arg=0;            //adres ile eri�im sa�lad�m�z i�in bu sefer de�eri de�i�tirebildik �ncekinde bunu elde edememi�tik//
}
