#include <bits/stdc++.h>
using namespace std;
int main(){
    int wc, hc, ws, hs;
    cin >> wc >> hc >> ws >> hs;
    if(ws < wc-1 && hs <hc-1){
        cout << 1;
    }
    else{
        cout << 0;
    }
}