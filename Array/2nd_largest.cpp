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
    int maxi = INT_MIN;
    int sec_max = INT_MIN;
    for( int i = 0; i < n; i++){
        if( v[i] > maxi){
            sec_max = maxi;
            maxi = v[i];
        }
        else if( v[i] > sec_max and v[i] != maxi){
            sec_max = v[i];
        }
    }
    cout << sec_max << endl;
}