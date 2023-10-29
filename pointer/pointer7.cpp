#include<iostream>
using namespace std;
int main(){
	void *ptr;
	char TipChar = 'c';
	int TipInt=234;
	float TipFloat= 14587.65;
	
	ptr=&TipChar;
	cout << *((char *)ptr)<<endl;
	
	ptr=&TipInt;
	cout << *((int *)ptr)<<endl;
	
	ptr=&TipFloat;
	cout << *((float *)ptr)<<endl;
}
