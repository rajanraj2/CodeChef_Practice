// https://www.codechef.com/practice/course/3-star-difficulty-problems/DIFF1700/problems/CHFINVNT?tab=statement


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
        int n, p, k;
        cin >> n >> p >> k;
        int rem = p % k;
        int times = n / k;
        int left = n % k;
        
        int days = rem * times + min(rem, left);
        days += (p - rem) / k + 1;
        cout << days << "\n";
    }    
    return 0;
}