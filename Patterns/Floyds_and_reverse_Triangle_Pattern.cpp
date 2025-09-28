// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Reverse Triangle for number
    int n = 4;
    
    for(int i = 0; i < n; i++) {
        
        for(int j = i + 1; j > 0; j--) {
            cout << j;
        }
        
        cout << endl;
    }
    
    // Reverse Triangle for alphabet
    char ch = 'A';
    
    for(int i = 0; i < n; i++) {
        for(char j = i + ch; j >= ch; j--) {
            cout << j;
        }
        
        cout << endl;
    }
    
    // Floyd's Triangle
    int num = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i + 1; j++) {
            cout << num;
            num++;
        }
        
        cout << endl;
    }

    return 0;
}