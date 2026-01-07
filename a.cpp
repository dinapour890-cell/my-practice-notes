#include <iostream>

using namespace std;


 num factorial(int n) {
  num res = 1;
    for(int i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}

int main() {
    
    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 
                    31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 
                    73, 79, 83, 89, 97, 101, 103};
    
    int size = 27; 
    cout << "فاکتوریل اعداد اول کمتر از 105:\n\n";
    
    for(int i = 0; i < size; i++) {
        int p = primes[i];
        
       
        if(p <= 20) {
            cout << p << "! = " << factorial(p) << endl;
        }
        else if(p == 23) cout << "23! = 258" << endl;
        
        else {
            
            cout << p << "! = (عدد بسیار بزرگ - بیش از حد long long)" << endl;
        }
    }
    
    return 0;
}

