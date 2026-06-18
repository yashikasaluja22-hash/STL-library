#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
int a[n];
for(int i = 0; i < n; i++){
    cin >> a[i];
}
sort(a, a+n);//arrays mein sort karne ke liye jahan se sort karna woh value
//jahan tak sorting karani hai uske agle wali ki value
// or sort(a, a+3);
for(int i : a){
    cout << i << " ";
}
cout << endl;
}