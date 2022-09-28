#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    unordered_map<int, int> m;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        m[x]++;
    }
    for(int i= 0; i < n -1; i++){
        int x; cin >> x;
        m[x]--;
    }
    for(auto p : m){
        if(p.second == 1){
            cout << p.first;
        }
    }
}