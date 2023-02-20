#include <bits/stdc++.h>

using namespace std;

bool MMM( int a, int b , int c){
    if (a==b && b==c && c==a) return true;
    else return false;
}


int main() {
	int a, b, c;
    cin >> a >> b >> c;
    if (MMM(a,b,c)) cout << "true";
    else cout <<"false";
    return 0;
}