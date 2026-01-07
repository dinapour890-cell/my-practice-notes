#include <iostream>

using namespace std;

int main() 
{
    double sum = 0;
    double x;
    
    for(int i = 0; i < 6; i++) 
    {
        cin >> x;
        sum += x;
    }
    
    cout << sum / 6 << endl;
    
    return 0;
}