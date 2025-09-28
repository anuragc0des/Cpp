// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Square Pattern for numbers
    int n = 3;
    int num = 1;
    
    //Outer loop for each line
    for(int i = 0; i < n; i++) {
        //Inner loop for what to print in each line
        for(int j = 0; j < n; j++) {
           cout << num;
           num++;
        }
        
        cout << endl;
    }
    
    // Square Pattern for Alphabet
    char ch = 'A';

    for (int i = 0; i < n; i++) {
        
        for(int j = 0; j < n; j++) {
            char newCh = ch;
            cout << newCh;
            ch++;
        }
        
        cout << endl;
    }

    return 0;
}