#include<bits/stdc++.h>
using namespace std;
void merge( vector < int > &v, int l, int m, int r){
    vector< int > temp;
    int i = l, j = m + 1;
    while( i <= m && j <= r){
        if( v[i] <= v[j]){
            temp.push_back(v[i]);
            i++;
        }
        else{
            temp.push_back(v[j]);
            j++;
        }
    }
        while( i <= m ){
            temp.push_back(v[i]);
            i++;
        }
        while( j <= r ){
            temp.push_back(v[j]);
            j++;
        }
    for( int i = 0; i < temp.size(); i++){
        v[i + l] = temp[i];
    }
}

void merging( vector < int > &v, int l, int r){
    if( l >= r) return;
    int mid = (l + r) / 2;
    cout << mid << endl;
    merging(v, l, mid);
    merging(v, mid + 1, r);
    merge(v, l, mid, r);
}
int main(){
    int n;
    cin >> n;
    vector < int > v;
    for( int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    merging(v, 0, n - 1);
    for( int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
}