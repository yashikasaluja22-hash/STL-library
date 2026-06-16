#include <bits/stdc++.h>
using namespace std;
void print(set<string> &s){
    for(auto &v : s){
        cout << v << endl;
    }
}
int main(){
// SET = it is a container where u store only unique elements, no duplicacy
// Follows RED-BLACK TREE logic to store
set<string> s;
s.insert("abc");
s.insert("llo");
s.insert("ioio");
s.insert("jkh");

//PRINT U CAN LIKE THIS

/*set<string> ::iterator it = s;
for(it = s.begin(); it != s.end(); ++s){
    cout << it << endl;
}*/
auto it = s.find("ioio");
if(it != s.end()){
    s.erase(it);
}
print(s);
}
//SET sorted order mein print karta hai due to tree logic