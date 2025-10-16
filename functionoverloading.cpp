#include<iostream>
using namespace std;
class print {
	public:
		void show(int x) {
			cout<<"integer:"<<x<<endl;
		}
		void show(double x) {
			cout<<"double:"<<x<<endl;
		}
		void show(string x) {
			cout<<"string:"<<x<<endl;
		}
};
int main() {
	print p;
	p.show(5);
	p.show(5.5);
	p.show("rishi");
	return 0;
}
