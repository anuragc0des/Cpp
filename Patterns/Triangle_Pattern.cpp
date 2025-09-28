// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Triangle Pattern for stars
    int n = 4;
    int num = 1;
    
    //Outer loop for each line
    for(int i = 0; i < n; i++) {
        //Inner loop for what to print in each line
        for(int j = 0; j < i + 1; j++) {
            cout << "*";
        }
        
        cout << endl;
    }
    
    // Triangle Pattern for numbers
    
    for(int i = 0; i < n; i++) {
        
        for(int j = 0; j < i + 1; j++) {
            cout << i + 1;
        }
        
        cout << endl;
        
    }
    
    // Triangle Pattern for Alphabet
    char ch = 'A';

    for (int i = 0; i < n; i++) {
        
        for(int j = 0; j < i + 1; j++) {
            char newCh = ch + i;
            cout << newCh;
            // ch++;
        }
        
        cout << endl;
    }
    
    // Triangle Pattern for number (different one)
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i + 1; j++) {
            cout << j + 1;
        }
        
        cout << endl;
    }

    return 0;
}