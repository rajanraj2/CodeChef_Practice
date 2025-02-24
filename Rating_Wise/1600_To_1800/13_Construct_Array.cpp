// https://www.codechef.com/practice/course/3-star-difficulty-problems/DIFF1700/problems/CONSTRRAY?tab=statement


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
        
        if (n % 2) {
            cout << -1 << "\n";
            continue;
        }
        
        cout << 1 << " ";
        int val = 2;
        for (int i = 1; i < n - 1; i++) {
            val *= -1;
            cout << val << " ";
        }
        cout << -1 << "\n";
    }    
    return 0;
}