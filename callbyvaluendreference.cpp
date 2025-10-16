#include<iostream>
using namespace std;

void callbyvalue(int x) {
    x = x + 10;
    cout << "Inside callbyvalue function, x = " << x << endl;
}

void callbyreference(int& y) {
    y = y + 10;
    cout << "Inside callbyreference function, y = " << y << endl;
}

int main() {
    int a = 5;
    int b = 5;
    
    cout << "Before callbyvalue, a = " << a << endl;
    callbyvalue(a);
    cout << "After callbyvalue, a = " << a << endl;
    
    cout << "\nBefore callbyreference, b = " << b << endl;
    callbyreference(b);
    cout << "After callbyreference, b = " << b << endl;
    
    return 0;
}
