#include <bits/stdc++.h>

using namespace std;

int main(){
    unordered_map<char, int> m;
    string s; cin >> s;
    for(char c : s){
        m[c]++;
    }
    for(auto p : m){
        if(p.second > 1){
            cout << 0;
            return 0;
        }
    }
    cout << 1;
}