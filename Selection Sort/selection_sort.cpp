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
    for( int i = 0; i <= n - 2; i++){
        int mini = i;
        for( int j = i; j <= n - 1; j++){
            if(v[j] < v[mini])
            mini = j;
        }
        swap( v[mini], v[i]);
    }
    for( int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
}