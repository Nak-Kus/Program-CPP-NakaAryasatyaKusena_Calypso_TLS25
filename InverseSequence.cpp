#include <iostream>
using namespace std;


int reverse(int num) {
    int sign = 1; 
    if (num < 0) {
        sign = -1;     
        num = -num;    
    }

    int reversed = 0;
    if (num == 0) return 0; 

    while (num > 0) {
        int digit = num % 10;          
        reversed = reversed * 10 + digit; 
        num /= 10;                      
    }

    return reversed * sign; 
}

int main() {
    int n;
    cin >> n;  

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sum += reverse(arr[i]); 
        } else {
            sum += arr[i]; 
        }
    }

    cout << sum << endl; 
    return 0;
}
