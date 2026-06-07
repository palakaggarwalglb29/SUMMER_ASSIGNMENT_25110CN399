#include <iostream>
using namespace std;
int main ()
{
    int a,b;
    int i;
    cout<< "ENTER TWO NUMBERS";
    cin >>a>>b;
    for ( i=1; i>0; i++)
    {
        if ( i%a==0 && i%b==0){
            cout << "LCM OF THE NUMBERS IS"<< i;
            break;
        }
    }
}