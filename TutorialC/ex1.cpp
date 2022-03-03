#include <iostream>
using namespace std;

void f(int x){
    cout << sizeof(x) << " " << x << endl;
}

void f(double x){
    cout << sizeof(x) << " " << x << endl;
}

template<class T>

void func(T x){
    cout << sizeof(x) << " " << x << endl;
}

int main(){
    cout << "Hello Lúcia!" << endl;
    f(10);
    f(5.5);
    func(255);
    func(1000);
    func(1.44);
    func('x');
    return 0;
}
