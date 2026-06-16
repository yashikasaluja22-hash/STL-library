#include <bits/stdc++.h>
using namespace std;
void print(unordered_set<string> &s){
    for(auto &v : s){
        cout << v << endl;
    }
}
int main(){
/* UNORDERED SETS use hash table logic and cannot use complex datatypes like pair, vector, etc 
 just like unordered maps
*/

unordered_set<string> s;
s.insert("abc");
s.insert("llo");
s.insert("ioio");
s.insert("jkh");
auto it = s.find("jkh");
if(it != s.end()){
s.erase(it);
}
//or
s.erase("abc");
print(s);
}
//u can do this whole code with normal ordered sets too