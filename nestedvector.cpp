#include <bits/stdc++.h>
using namespace std;

// PAIR WALA ARRAY generally hum vector use karte hai
// uss vector mein har ek element ek pair hota hai

void printVec(vector<pair<int, int>> &v){
    cout << "size is " << v.size() << '\n';
    for(auto [x, y] : v){
        cout << x << " " << y << '\n';
    }
}
int main(){
vector<pair<int, int>> v = {{1, 2}, {2, 3}, {3, 4}, {4, 5}};
printVec(v);

vector<pair<int, int>> v1;
int n;
cout << "enter n";
cin >> n;
for(int i = 0; i < n; i++){
    int x, y;
    cout << "enter x, y: ";
    cin >> x >> y;
    v1.push_back({x, y});
    //OR
    //v1.push_back(make_pair(x, y));
}
printVec(v1);
}