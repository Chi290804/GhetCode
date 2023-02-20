#include<bits/stdc++.h>
using namespace std;

int Mean ( int n, int a[]){
    int t=0;
    for ( int i=0 ; i<n ; i++){
        t+=a[i];
    }
    return t/n;
}

int max( int n, int a[]){
    int max = a[0];
    int t=0;
    for ( int i=0 ; i<n ; i++){
        if ( a[i] > max) max = a[i];
    }
    return max;
}

int min( int n, int a[]){
    int min = a[0];
    int t=0;
    for ( int i=0 ; i<n ; i++){
        if ( a[i] < min) min = a[i];
    }
    return min;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for ( int i=0 ; i<n ; i++) cin >>a[i];
    cout << Mean(n, a) << endl << max(n,a) << endl << min (n, a);
    return 0;
}