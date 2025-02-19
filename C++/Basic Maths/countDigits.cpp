// https://www.geeksforgeeks.org/problems/count-digits5716/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        int c=0;
        int r=n;
        while(r>0){
            int d = r%10;
            if(d!=0 && n%d==0){
                c=c+1;
            }
            r=r/10;
        }
        return c;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends