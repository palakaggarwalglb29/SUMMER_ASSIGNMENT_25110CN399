#include <iostream>
using namespace std;

int main() {
    int n;
    
    cin >>n;

    for (int i = 1; i <= n; ++i) {
      //   Print leading spaces 
        for (int space = 1; space <= n - i; ++space) {
            cout << "  ";
        }

        char ch = 'A';

        //  Print increasing characters
        for (int j = 1; j <= i; ++j) {
            cout << ch << " ";
            ch++;
        }

        //  Print decreasing characters
        ch -= 2; 
        for (int j = 1; j < i; ++j) {
            cout << ch << " ";
            ch--;
        }

        // Move to the next line
        cout << endl;
    }

    
}
