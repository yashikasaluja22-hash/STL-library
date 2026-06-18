#include <bits/stdc++.h>
using namespace std;
bool should_i_swap(pair<int, int> a, pair<int, int> b){
  if(a.first != b.first){
     if(a.first > b.first) return true;
     return false;
  }else{
    if(a.second > b.second) return trun
    return false;
  }    
}
int main(){
int n;
cin >> n;
vector<pair<int, int>> a(n);
for(int i = 0; i < n; i++){
    cin >> a[i].first >> a[i].second;
}
sort(a.begin(), a.end(), should_i_swap);

//or instead of above function u can also use
//sort(a.begin(), a.end(), greater<pair<int, int>> ());

for(int i = 0; i < n; ++i){
    cout << a[i].first << a[i].second << endl;
}
return 0;
}