#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    float s = (a + b + c + d) / 2.0;
    float area = sqrt((s - a) * (s - b) * (s - c) * (s - d));
    cout << setprecision(7)<< fixed << area;
}