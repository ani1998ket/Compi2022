#include "bits/stdc++.h"
using namespace std;

void dfs( int i, vector<bool>& vis, vector<vector<int>>& graph){
    vis[i] = true;
    for( auto ch : graph[i] ){
        if(!vis[ch])
            dfs(ch, vis, graph);
    }
}

void solve(){
    int N;
    cin >> N;
    vector<int> arr(N);
    for( auto& i : arr ){
        cin >> i;
    }
    vector<int> gtst;
    gtst.reserve(N);
    
    gtst.push_back( arr[0] );
    for( int i = 1; i < N; i++ ){
        auto it = upper_bound( gtst.begin(), gtst.end(), arr[i] );

        if( it == gtst.end() ) 
            gtst.push_back( arr[i] );
        else{
            int end = gtst.back();
            gtst.erase(it, gtst.end());
            gtst.push_back( end );
        }
    }

    cout << gtst.size() << endl;
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}