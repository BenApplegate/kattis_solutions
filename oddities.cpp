#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >>x;
        abs(x)%2 == 1? cout << x << " is odd\n" : cout << x << " is even\n";
    }
}