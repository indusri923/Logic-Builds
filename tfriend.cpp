#include<iostream>
using namespace std;

class tpoint{
	private:
		int private_memb;
	protected:
		int protected_memb;
	public:
		tpoint():private_memb(25),protected_memb(50) { }
		friend void friendfunction(tpoint& obj);
};

void friendfunction(tpoint& obj) {
	cout << "Private member: " << obj.private_memb << endl;
	cout << "Protected member: " << obj.protected_memb << endl;
}

int main() {
	tpoint Tpoint_object;
	friendfunction(Tpoint_object);
	return 0;
}
