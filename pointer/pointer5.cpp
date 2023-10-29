#include<iostream>

using namespace std;

int main(){
	int dizi[5]={1,2,3,4,5};
	int *ptr=NULL;
	int sayi;
	ptr=dizi;
	sayi=*ptr++;
	cout << sayi << endl;
	cout << *ptr << endl;
	
	ptr=dizi;
	sayi=*++ptr;
	cout << sayi << endl;
	cout << *ptr << endl;
	
	return 0;	
}
