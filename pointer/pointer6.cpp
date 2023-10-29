#include<iostream>
#define UZUNLUK 10

using namespace std;

int main(){
	int dizi[UZUNLUK]={1,2,3,4,5,6,7,8,9,10};
	int*ptr = &dizi[0];
	int*bitis=ptr+UZUNLUK;
	int toplam=0;
	while(ptr<bitis){
		toplam+=*ptr;
		ptr++;
	}
	cout<< "Dizideki elemanlarin toplami: "<< toplam << endl;
	return 0;
}
