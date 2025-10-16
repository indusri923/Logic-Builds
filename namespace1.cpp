#include<iostream>
namespace mynamespace{
	int value = 42;
	void show() {
		std::cout<<"value:"<<value<<std::endl;
	}
}
int main() {
	std::cout<<mynamespace::value<<std::endl;
	mynamespace::show();
	return 0;
}

