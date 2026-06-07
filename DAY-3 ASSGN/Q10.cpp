#include <iostream>
using namespace std;
int main()
{
    int num1, num2, i, j, a=0;
    
    cout<<"Enter the Starting Number: ";
    cin>>num1;
    cout<<"Enter the Ending Number: ";
    cin>>num2;
    cout<< "the prime numbers are";
    for(i=num1; i<=num2; i++)
    {
        for(j=2; j<i; j++)
        {
           if(i%j==0)
           {
               a++;
               break;
           }
        }
        if(a==0 && i!=1)
            cout<<i;
        a = 0;
    }
    cout<<endl;

}