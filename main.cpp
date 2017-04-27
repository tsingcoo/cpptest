#include <iostream>

using namespace std;

int GSD(int a, int b) {
    int g;
    int i;
    if (a >= b) {
        for (i = b; (b % i) == 0;--i) {//这里当不满足的时候就直接出去了，不会再往下走。。。
            cout << b << " ";
            cout << i << " ";
        }
    }

    return g;
}

int main() {
    int a, b;
    cout << "please enter two numbers:";
    cin >> a >> b;
    cout << "GSD(a,b)" << "=" << GSD(a, b) << endl;
    return 0;
}