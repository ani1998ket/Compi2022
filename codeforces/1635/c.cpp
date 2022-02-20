// https://codeforces.com/contest/1635/problem/C
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N;
    cin >> N;
    vector<int> arr(N);
    for( int& x : arr ) cin >> x;
    int z = arr.back(); arr.pop_back();
    int y = arr.back();
    if((y>=0 && z>=0 && y <= z) || (y<0 && z>=0 && y <= z)){
        cout << N-2 << endl;
        for( int i = 0; i < N-2; i++ ){
            cout << i+1 <<" "<<N-1 <<" "<< N << "\n"; 
        }
    }
    else if((y<0 && z<0 && y <= z)){
        bool flag = false;
        for( int i = 0; i < N-1; i++ ){
            if( !(arr[i] <= arr[i+1]) ){
                cout << -1 << endl;
                flag = true;
                break;
            }
        }
        if( !flag ) cout << 0 << "\n";
        
    }
    else{
        cout << -1 << "\n";
    }
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}