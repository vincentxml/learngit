#include <iostream>

class A{
public:
	void print(){
		std::cout<<"Class A"<<std::endl;
	}
}

int main(){
	auto func = [](){
		std::cout << "this is A"<<std::endl;
		};
	func();
}
