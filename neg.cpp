#include   <iostream>

#include <cmath>

using namespace std;

int main() {
    float x;
    cout << "عدد منفی بده: ";
    cin >> x;

    if (x >= 0 || x == (int)x) {
        cout << "فاکتوریل نداره!\n";
    }
    else {
        cout << x << "! = " << tgamma(x + 1) << endl;
    }

    return 0;
}


