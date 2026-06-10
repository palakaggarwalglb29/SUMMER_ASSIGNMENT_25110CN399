#include <iostream>
using namespace std;

int main() {
    int n;

    
    cin >> n;

    
    for (int i = 1; i <= n; ++i) {
        
        //  Print spaces to center-align the pyramid
        for (int space = 1; space <=n - i; ++space) {
            cout << " ";
        }

        //  Print the required number of stars for the row
        
        for (int j = 1; j <= (2 * i - 1); ++j) {
            cout << "*";
        }

        
        cout << "\n";
    }


}
