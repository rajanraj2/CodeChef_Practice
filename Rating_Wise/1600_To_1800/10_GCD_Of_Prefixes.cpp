// https://www.codechef.com/practice/course/3-star-difficulty-problems/DIFF1700/problems/GCDPRF?tab=statement


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
        int n;
        cin >> n;
        
        vi b(n);
        bool flag = false;
        for (int i = 0; i < b.size(); i++) {
            cin >> b[i];
            if (i > 0) {
                if (b[i - 1] % b[i] != 0) flag = true;   
            }
        }
        
        if (flag) cout << -1 << "\n";
        else {
            for (int i = 0; i < n; i++) {
                cout << b[i] << " ";
            }
        }
        cout << "\n";
    }    
    return 0;
}