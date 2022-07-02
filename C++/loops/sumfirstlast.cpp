//sum of first and last digits of any given number

#include <iostream>
using namespace std;

int main(){
    int n,r;
    int sum=0;
    cout<<"Enter a number = ";
    cin>>n;
    r=n%10;
    while (n>=10)
    {
        n=n/10;
    }
    sum = n+r; 
    cout<<"Sum of first and last digits = "<<sum<<endl;
    return 0;
    
}