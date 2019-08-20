#include <iostream>

class A{
public:
	void print(){
		std::cout<<"Class A"<<std::endl;
	}
}

class B{
public:
	void print(){
		std::cout<<"Class B"<<std::endl;
	}
}

int main(){
	auto func = [](){
		std::cout << "this is A"<<std::endl;
		};
	func();
}

//add some comments with details

//Something you want to Undo