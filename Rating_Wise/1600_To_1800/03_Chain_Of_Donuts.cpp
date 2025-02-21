// https://www.codechef.com/practice/course/3-star-difficulty-problems/DIFF1700/problems/DONUTS?tab=statement


#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define vi vector<int>
#define w(x) int x; cin>>x; while(x--)
#define pb push_back


int32_t main() {
    fio;
    w(t) {
        int n, m;
        cin >> n >> m;
        
        vi arr(m);
        for (int i = 0; i < m; i++) cin >> arr[i];
        sort(arr.begin(), arr.end());
        
        int sum = 0, i = 0;
        int req = m - 1;
        while (sum < req) {
            if (sum + arr[i] < req) {
                sum += arr[i];
                req--;
            }
            else {
                sum += req - sum;
            }
            i++;
        }
        
        cout << sum << "\n";
    }    
    return 0;
}