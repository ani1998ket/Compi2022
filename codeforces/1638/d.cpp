#include "bits/stdc++.h"
using namespace std;

void solve(){
    int N, M;
    cin >> N >> M;
    vector<vector<int>> img(N, vector<int>(M) );
    for( auto& r : img ){
        for( auto& c : r ){
            cin >> c;
        }
    }
    cout << N * M << endl;
    for( int i = 0; i < N; i++ ){
        
    }
}

int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}