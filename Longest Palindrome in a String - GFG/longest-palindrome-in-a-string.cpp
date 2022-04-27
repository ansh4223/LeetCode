// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    string longestPalin (string S) {
        // code here
        int n=S.length();
        int maxlen=1,start=0;
        int low, high;
        for(int i=0;i<n;i++){
            low=i-1;
            high=i+1;
            while(high<n && S[high]==S[i]){
                high++;
            }
            while(low>=0 && S[low]==S[i]){
                low--;
            }
            while(low>=0 && high<n && S[low]==S[high]){
                low--;
                high++;
            }
            
        int length = high - low - 1;
        if (maxlen < length) {
            maxlen = length;
              start=low+1;
        }
    }
    return S.substr(start,maxlen);;
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends