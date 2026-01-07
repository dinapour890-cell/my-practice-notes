#include <iostream>

using namespace std;

int main() {
    long n;
    cin >> n;
    
    if (n < 100) {         
        cout << 1 << endl;
        return 0;
    }
    
    int ans = 1;            
    int count = 1;          
    int last = n % 10;      
    n = n / 10;           
    
    while (n > 10) {       
        int d = n % 10;     
        n = n / 10;
        
        if (d == last) {
            count++;
            if (count > ans) ans = count;
        } else {
            count = 1;
        }
        last = d;
    }
    
    cout << ans << endl;
    return 0;
}