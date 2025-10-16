#include<iostream>
int x = 10;
int main() {
	int x=20;
	std::cout<<"local x:"<<x<<std::endl;
	std::cout<<"Globalx:"<<::x<<std::endl;
	return 0;
}


