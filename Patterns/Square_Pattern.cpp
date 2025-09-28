// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Square Pattern for numbers
    int n = 4;
    
    //Outer loop for each line
    for(int i = 0; i < n; i++) {
        //Inner loop for what to print in each line
        for(int j = 0; j < n; j++) {
            cout << j + 1;
        }
        
        cout << endl;
    }

    return 0;
}