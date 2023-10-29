#include<iostream>

using namespace std;

int main(){
	int a1=13;
	int *pa1;
	cout << "a1 icerigi: "<< a1 <<endl;
	cout << "a1 adresi: "<< &a1 << endl;
	
	pa1=&a1;
	
	cout << "a1 adresi: "<< pa1 << endl;
	cout << "pa1 adresi: "<< &pa1 << endl;
	cout << "pa1 icerigi: "<< *pa1 << endl;
	
	*pa1=15;
	cout << "pa1 icerigi: "<< *pa1 << endl;
	cout << "a1 icerigi: "<< a1 << endl;
	cout << "pa1 adresi: "<< &pa1 << endl;	
	
	pa1=NULL;
	
	cout << "pa1 icerigi: "<< pa1 << endl;
	cout << "pa1 adresi: " << &pa1 << endl;
	
	return 0;
	
}
