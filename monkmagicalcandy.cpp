#include <bits/stdc++.h>
using namespace std;
int main(){
//check constraints in the ques as well
int t;
cin >> t;
while(t--){
int n , k;
cin >> n >> k;
multiset<long long> bags;
for(int i = 0; i < n; i++){
    int candy_ct;
    cin >> candy_ct;
    bags.insert(candy_ct);
}
long long total_candies = 0;
for(int i = 0; i < k; ++i){
    auto it = prev(bags.end());//assigns last existing value of multiset or just before value of bags.end()
    int candy_ct = *it;
    bags.erase(it);
    total_candies += candy_ct; 
    bags.insert(candy_ct / 2);
}
cout << total_candies << endl;
}
return 0;
}