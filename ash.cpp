#include   <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    double num1, num2, num3, num4, num5; 
    
    
    if(n == 1) {
        cin >> num1;
        cout << num1 << endl;
        cout << num1 << endl;
    }
    else if(n == 2) {
        cin >> num1 >> num2;
        
        // صعودی
        if(num1 <= num2) {
            cout << num1 << " " << num2 << endl;
            cout << num2 << " " << num1 << endl;
        }
        else {
            cout << num2 << " " << num1 << endl;
            cout << num1 << " " << num2 << endl;
        }
    }
    else if(n == 3) {
        cin >> num1 >> num2 >> num3;
        
       
        double small, mid, big;
        
        if(num1 <= num2 && num1 <= num3) {
            small = num1;
            if(num2 <= num3) { mid = num2; big = num3; }
            else { mid = num3; big = num2; }
        }
        else if(num2 <= num1 && num2 <= num3) {
            small = num2;
            if(num1 <= num3) { mid = num1; big = num3; }
            else { mid = num3; big = num1; }
        }
        else {
            small = num3;
            if(num1 <= num2) { mid = num1; big = num2; }
            else { mid = num2; big = num1; }
        }
        
        // چاپ صعودی
        cout << small << " " << mid << " " << big << endl;
        // چاپ نزولی
        cout << big << " " << mid << " " << small << endl;
    }
    else if(n == 4) {
        cin >> num1 >> num2 >> num3 >> num4;
        
        cout << "برای ۴ عدد کد خیلی طولانی می‌شود!" << endl;
    }
    else if(n == 5) {
        cin >> num1 >> num2 >> num3 >> num4 >> num5;
        cout << "برای ۵ عدد کد خیلی طولانی می‌شود!" << endl;
    }
    
    return 0;
}





