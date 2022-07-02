/*Write a program to input an integer N and print the sum of all its even digits and sum of all its odd digits separately.
Digits Mean Numbers, Not The Places! That Is, If The Given Integer Is "13245", Even Digits Are 2 & 4 And Odd Digits Are 1, 3 & 5.
Input Format :
 Integer N
Output Format :
Sum_of_Even_Digits Sum_of_Odd_Digits
(Print first even sum and then odd sum separated by space)*/
#include <iostream>
using namespace std;

int main(){
    int n,r;
    cout<<"Enter a number= ";
    cin>>n;
    int evensum=0;
    int oddsum=0;

    while (n>0)
    {
        r=n%10;
        if (r%2==0){
            evensum+=r;
        }
        else{
            oddsum+=r;
        }
        n=n/10;
    }
    cout<<evensum<<" "<<oddsum;
    return 0;
}