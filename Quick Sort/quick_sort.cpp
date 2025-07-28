#include<bits/stdc++.h>
using namespace std;
int partition( vector < int > &v, int l, int h){
    int pivot = v[l];
    int i = l;
    int j = h;
    while( i < j){
        while( v[i] <= pivot && i <= h - 1){
            i++;
        }
        while( v[j] > pivot && j >= l + 1 ){
            j--;
        }
        if( i < j){
            swap( v[i], v[j] );
        }
    }
    swap( v[l], v[j]);
    return j;
}

void quick_sorting( vector < int > &v, int l, int h){
    if( l < h ){
        int pivot_index = partition(v, l, h);
        quick_sorting(v, l, pivot_index - 1);
        quick_sorting(v, pivot_index + 1, h);
    }
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
    quick_sorting(v, 0, n - 1);
    for( int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
}