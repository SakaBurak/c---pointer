#include<iostream>

using namespace std;

int main(){
	short value= 7;
	short otherValue= 3;
	
	short*ptr= &value;
	
	std::cout << &value << '\n';
	std::cout << value << '\n';
	std::cout << ptr << '\n';
	std::cout << *ptr << '\n';
	std::cout << '\n';
	
	*ptr=9;
	
	std::cout << &value << '\n';
	std::cout << value << '\n';
	std::cout << ptr << '\n';
	std::cout << *ptr << '\n';
	std::cout << '\n';
	
	ptr = &otherValue;
	
	std::cout << &otherValue << '\n';
	std::cout << otherValue << '\n';
	std::cout << ptr << '\n';
	std::cout << *ptr << '\n';
	std::cout << '\n';
	
	std::cout << sizeof(ptr)<<'\n';
	std::cout << sizeof(*ptr)<<'\n';
	
	return 0;
	
}
