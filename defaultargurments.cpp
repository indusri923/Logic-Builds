#include<iostream>
using namespace std;
void greet(string name="guest") {
	cout<<"hello,"<<name<<"!"<<endl;
}
int main(){
	greet();
	greet("rishi");
	return 0;
}
