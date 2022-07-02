//Check Armstrong Number of three digits
#include <iostream>
using namespace std;

int main(){
    int n,r,temp;
    int sum=0;
    cout<<"Enter a 3-digit number = ";
    cin>>n;
    temp=n;

    while (temp>0)
    {
        r=temp%10;
        sum+=r*r*r;
        temp=temp/10; 
    }
    if (sum==n)
    {
        cout<<"It is an Armstrong Number"<<endl;
    }
    else
    {
        cout<<"It is not an Armstrong Number"<<endl;
    }
    
    return 0;
    
}