#include <bits/stdc++.h>
using namespace std;
int main(){
map<int, string> m;
m[1] = "abc";
m[3] = "bca";
m[5] = "cab";
//OR u can also give element to map like below
m.insert({4, "egf"});
map<int, string> ::iterator it;
for(it = m.begin(); it != m.end(); it++){
    cout << (it->first) << " " << (it->second) << endl;
}
//IDHAR humne map ko unordered pair mein store kiya but compiler by default usse ordered pair (acc. to key) store karega
//ordered pair mein hi output/print karega
cout << "ORR\n";
//FOREACH LOOP ->short code
for(auto &hi : m){
    cout << hi.first << " " << hi.second << '\n';
}
}