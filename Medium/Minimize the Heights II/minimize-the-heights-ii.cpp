//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
          sort(arr,arr+n);
        int dif=arr[n-1]-arr[0];
        int small=arr[0]+k;
        int large=arr[n-1]-k;
        for(int i=0;i<n;i++)
        {
            int miin=min(small,arr[i+1]-k);
            int maax=max(large,arr[i]+k);
            if(miin<0)
            continue;
            dif=min(dif,maax-miin);
        }
        return dif;
     }


        // code here
    
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends