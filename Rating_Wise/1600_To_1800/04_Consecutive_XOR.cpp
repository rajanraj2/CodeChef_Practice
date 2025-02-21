// https://www.codechef.com/practice/course/3-star-difficulty-problems/DIFF1700/problems/XOR2?tab=statement


#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define vi vector<int>
#define ivec(arr) for (int i = 0; i < arr.size(); i++) cin >> arr[i];
#define w(x) int x; cin>>x; while(x--)
#define pb push_back


int32_t main() {
    fio;
    w(t) {
        int n;
        cin >> n;
        vi arr(n);
        int val = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            val ^= arr[i];
        }
        if (n & 1) cout << "YES" << "\n";
        else if (val == 0) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }    
    return 0;
}