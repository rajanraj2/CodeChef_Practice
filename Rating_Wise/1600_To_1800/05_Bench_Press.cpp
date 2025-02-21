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
        int n, w, wr;
        cin >> n >> w >> wr;
        
        vi arr(n);
        unordered_map<int, int> mpp;
        int sum = wr;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            mpp[arr[i]]++;
        }
        
        bool flag = false;
        for (auto it : mpp) {
            sum += it.first * 2 * (it.second / 2);
            if (sum >= w) {
                flag = true;
                break;
            }
        }
        
        if (flag) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }    
    return 0;
}