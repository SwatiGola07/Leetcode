// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        if(k>2*1000000)return 0;
     vector<int>freq(2000001);
  
        int ans=0;
     for(int i=0;i<n;i++){
         if(arr[i]>=k){continue;}
        if(freq[k-arr[i]])ans+=freq[k-arr[i]];
         freq[arr[i]]++;
         
     }
     return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}  // } Driver Code Ends