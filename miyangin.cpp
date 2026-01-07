#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "تعداد اعداد (n): ";
    cin >> n;

    float sum = 0.0;    
    int count = 0;      
    cout << "اعداد را وارد کنید:\n";

    for (int i = 0; i < n; i++) {
        float num;
        cin >> num;

        if (num > 0) {             
            sum += num;
            count++;                 

            if (sum > 1000) {        
                break;
            }
        }
        
    }

    cout << " تعداد اعداد مثبت: " << count << endl;

    if (count > 0) {
        foat  average = sum / count;
        cout << "میانگین اعداد مثبت: " << average << endl;
    } else {
        cout << "میانگین اعداد مثبت: 0" << endl;  
    }

    return 0;
}




