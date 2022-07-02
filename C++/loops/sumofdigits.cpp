//sum of digits
#include <iostream>
using namespace std;

int main(){
    int n,r;
    cout<<"Enter a number = ";
    cin>>n;
    int sum=0;
    while (n>0)
    {
        r=n%10;
        sum+=r;
        n=n/10;
    }
    cout<<"The sum of digits = "<<sum;
    return 0;
}