// https://www.codechef.com/practice/3-star-difficulty-problems


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
        
        vi arr(n);
        ivec(arr);
        
        int maxi1 = 0, maxi2 = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] > maxi1) {
                maxi2 = maxi1;
                maxi1 = arr[i];
            }
            else if (arr[i] > maxi2 && arr[i] < maxi1) maxi2 = arr[i];
        }
        cout << maxi2 << "\n";
    }    
    return 0;
}