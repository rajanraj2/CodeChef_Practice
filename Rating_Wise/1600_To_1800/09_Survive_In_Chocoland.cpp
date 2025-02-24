// https://www.codechef.com/practice/course/3-star-difficulty-problems/DIFF1700/problems/SURVIVE?tab=statement


#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define vi vector<int>
#define vs vector<string>
#define ivec(arr) for (int i = 0; i < arr.size(); i++) cin >> arr[i];
#define w(x) int x; cin>>x; while(x--)
#define pb push_back


int32_t main() {
    fio;
    w(t) {
        int n, k, s;
        cin >> n >> k >> s;
        
        if (k > n) {
            cout << -1 << "\n";
            continue;
        }
        
        if ((6 * (n - k) < k) && s >= 7) {
            cout << -1 << "\n";
            continue;
        }
        
        cout << (k * s + n - 1) / n << "\n"; 
    }    
    return 0;
}