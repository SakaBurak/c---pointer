#include<iostream>

using namespace std;

void sifirla(int);

int main(int argc, char** argv){
	int sayi=10;
	sifirla(sayi);//kopyas�n� olu�turduk//
	cout<< sayi << endl;
	return 0;
}
//fonksiyon s�n�rlar� i�erisinde tan�mlama yapmad�k//
void sifirla(int arg){
	arg=0;
}
