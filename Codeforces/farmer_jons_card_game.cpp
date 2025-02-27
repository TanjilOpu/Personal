#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    int arr[n][m];

    // Read the matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
   
    // Sort each row
    for(int i = 0; i < n; i++) {
        sort(arr[i], arr[i] + m);
    }
    //  map<int,int>mpp;
    // if(m==1)
    // {
    //     for(int i=0;i<n;i++)
    //     {
    //         mpp[arr[i][0]]=i;
    //     }
    // }
    //   for(auto it:mpp)
    //   {
    //     //cout<<it.second+1<<endl;
    //   }

    // Check differences between adjacent elements in each row
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m - 1; j++) {
            int d = arr[i][j + 1] - arr[i][j];
            // Check if the difference is equal to the expected value (for example 1, or some other condition)
            if (d != n) { // Adjust this condition based on actual requirements
                cout << -1 << endl;
                return;
            }
        }
    }

    // Map to store the index of the first column values after sorting
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i][0]] = i; // Store the row index by the value in the first column
    }

    // Output the row indices based on sorted first column values
    for (auto it : mp) {
       // cout<<"first ";
        cout << it.second+1 << " ";
    }
    cout<<endl;

    // Optionally, print the matrix (only if required)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            //cout << arr[i][j] << " ";
        }
      //  cout << endl;
    }
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
}
