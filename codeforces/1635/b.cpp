#include "bits/stdc++.h"
using namespace std;

void print_arr( vector<int>& arr ){
    for( auto e : arr ){
        cout << e <<  " ";
    }
    cout << endl;
}

void solve(){
    int N;
    cin >> N;
    vector<int> arr(N);
    for( auto& a : arr ) cin >> a;

    vector<int> indices;
    for( int i = 1; i < N - 1; i++ ){
        if( arr[i] > arr[i-1] && arr[i] > arr[i+1] ) indices.push_back(i);
    }

    if( indices.size() == 0 ){
        cout << 0 << endl;
        print_arr( arr );
        return;
    }

    int op = 0;
    int x = 0;
    for( ; x < indices.size() - 1; x++ ){
        int i = indices[x];
        int ni = indices[x+1];
        if( ni == i + 2 ){
            arr[i+1] = max(arr[i], arr[ni]);
            x++;
        }else{
            arr[i+1] = arr[i];
        }
        op++;
    }
    if( x == indices.size() - 1){
        op++;
        arr[indices.back()+1] = arr[indices.back()];
    }
    cout << op << endl;
    print_arr( arr );

}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}