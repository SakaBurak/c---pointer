#include<iostream>

using namespace std;

int main(int argc, char** argv){
	int dizi [10]={1,2,3,4,5,6,7,8,9,10};
	int *ptr =&dizi[0];
	int *ptr2=dizi;
	//pointerlara böylece dizinin içindeki deðerleri atamýþ olduk//
	int i;
	cout<<"Dizinin 1.Elemani "<< dizi[0]<<endl;
	cout<<"Dizinin 1.Elemani "<< *ptr <<endl;
	cout<<"Dizinin 1.Elemani "<< *ptr2 <<endl;
	cout<<"Dizinin 4.Elemani "<< dizi[3]<<endl;
	cout<<"Dizinin 4.Elemani "<< *(ptr+3) <<endl;
	cout<<"Dizinin 4.Elemani "<< *(ptr2+3) <<endl;
	cout<<"Dizinin 4.Elemani "<< ptr2[3] <<endl;
	
	for(i=0;i<10;i++){
		cout<<" dizi [ "<< i <<" ] "<<" adresi: "<< ptr+i << " degeri: " << *(ptr+i) << endl;
	}
	return 0;
}
