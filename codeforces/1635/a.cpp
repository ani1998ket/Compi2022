#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N;
    cin >> N;
    int ans = 0;
    int temp = 0;
    while(N--){
        cin >> temp;
        ans |= temp;
    }
    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}