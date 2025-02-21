// https://www.codechef.com/practice/course/3-star-difficulty-problems/DIFF1700/problems/ODDSUM?tab=statement


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;       
        cout << (n - 1) * (n - 2) + 1 << "\n";
    }    
    return 0;
}