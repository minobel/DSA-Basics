#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector < int > v;
    for( int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    for( int i = n - 1; i >= 0; i--){
        for( int j = 0; j <= i; j++){
            if(v[j] > v[j + 1])
                swap(v[j], v[j + 1]);
        }
    }
    for( int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
}