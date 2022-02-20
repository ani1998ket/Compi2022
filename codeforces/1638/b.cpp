    #include "bits/stdc++.h"
    using namespace std;

    void solve(){
        int N;
        cin >> N;
        vector<int> arr(N);
        for( auto& i : arr ){
            cin >> i;
        }
        
        int p = 0;
        while( p < arr.size() && arr[p] % 2 != 0 ) p++;
        bool sorted_even = true;
        for( int i = p+1; i < arr.size(); i++ ){
            if( arr[i] % 2 != 0 ) continue; // if odd
            if( arr[p] > arr[i] ){
                sorted_even = false;
                break;
            }
            p = i;
        }

        int q = 0;
        while( q < arr.size() && arr[q] % 2 == 0 ) q++;
        bool sorted_odd = true;
        for( int i = q+1; i < arr.size(); i++ ){
            if( arr[i] % 2 == 0 ) continue; // if even
            if( arr[q] > arr[i] ){
                sorted_odd = false;
                break;
            }
            q = i;
        }

        if( sorted_even && sorted_odd )
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    int main(){
        int T;
        cin >> T;
        while(T--){
            solve();
        }
        return 0;
    }