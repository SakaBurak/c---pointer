#include<iostream>

using namespace std;

int main(int argc , char** argv){
	char a1='a';
	char *pr=&a1;
	char ** ppr=&pr;
	cout<<"a1 icerigi: "<< *pr <<endl;
	cout<<"a1 adresi: "<<&pr<<endl;
	**ppr='b';
	cout<<"a1 icerigi: "<< a1 <<endl;
	cout<<"a1 adresi: "<< ppr <<endl;
	
	return 0;
}
