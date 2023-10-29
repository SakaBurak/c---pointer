#include<iostream>

using namespace std;

void sifirla(int);

int main(int argc, char** argv){
	int sayi=10;
	sifirla(sayi);//kopyasýný oluþturduk//
	cout<< sayi << endl;
	return 0;
}
//fonksiyon sýnýrlarý içerisinde tanýmlama yapmadýk//
void sifirla(int arg){
	arg=0;
}
