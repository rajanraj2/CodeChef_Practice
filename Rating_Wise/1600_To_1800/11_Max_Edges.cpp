// https://www.codechef.com/practice/course/3-star-difficulty-problems/DIFF1700/problems/MAXEDGES?tab=statement


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
        int n, k, l;
        cin >> n >> k >> l;
        
        int extra = k + l - n;
        if (extra > 0) {
            n -= extra;
            k -= extra;
            l -= extra;
        }
        int total = k * (n - k); // source to non-source
        total += (n - k - l) * l; // non-source & non-sink to sink
        total += (n - k - l) * (n - k - l - 1) / 2; // non-source & non-sink to other non-source & non-sink
        cout << total << "\n";
    }    
    return 0;
}