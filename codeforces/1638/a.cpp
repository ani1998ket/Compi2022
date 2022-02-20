#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    int N;
    cin >> N;
    vector<int> arr(N);
    for( auto& i : arr ){
        cin >> i;
    }

    for( int i = 0; i < arr.size(); i++ ){
        if( (i+1) != arr[i]){
            int j = i+1;
            for(; j < arr.size(); j++ ){
                if( arr[j] == (i+1) ) break;
            }
            reverse(arr.begin() + i, arr.begin() + j+1);
            break;
        }
    }

    for( auto e : arr ){
        cout << e << " ";
    }
    cout << endl;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}