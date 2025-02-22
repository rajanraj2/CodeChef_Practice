// https://www.codechef.com/practice/course/3-star-difficulty-problems/DIFF1700/problems/MAXSUBARR


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
        int n, m, sum = 0;
        cin >> n;
        vi a(n);
        for (int i = 0; i < a.size(); i++) {
            cin >> a[i];
            sum += a[i];
        }
        cin >> m;
        vi b(m);
        ivec(b);
        
        int pre = 0, suf = sum;
        int maxp = 0, maxs = 0;
        for (int i = 0; i < n; i++) {
            pre += a[i];
            suf -= a[i];
            maxp = max(maxp, pre);
            maxs = max(maxs, suf);
        }
        
        int result = max(maxp, maxs);
        for (int i = 0; i < m; i++) {
            if (b[i] >= 0) result += b[i];
        }
        cout << result << endl;
    }    
    return 0;
}