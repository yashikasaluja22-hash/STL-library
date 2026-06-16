#include <bits/stdc++.h>
using namespace std;
//agar key khaali chodi hai toh uski value 0 ho jayegi
//agar value string hai toh empty string save hojayega -> " ";
void print(map<int, string> &m){
    cout << m.size() << endl;
    for(auto &i : m){
        cout << i.first << " " << i.second << endl;
    }
}
int main(){
map<int, string> m;
m[1];
m[5] = "abc";
m[3] = "bcd";
m[7] = "egf";
m[5] = "cdc";
//yahan as 5 (key) value change hojayegi from abc to cdc but no duplicacy
print(m);

auto it = m.find(3);//agar 3 nhi hai toh m.end() return hota hai 
if(it == m.end()) {
    cout << "NO VALUE\n";
}
else{
    cout << it->first << " " << it->second << endl;
}
cout << "after doing ERASE operation\n";
auto mo = m.find(5);
m.erase(mo);//iterator dala yahan
//m.erase(3); or we can directly write key in erase function

// WARNING: yahan erase mein daalne wali iterator key exist karni chaiye 
//matalab as key 5 already exists not like key 9 which do not exist 
print(m);
cout << "after using CLEAR operation\n";
m.clear();
print(m);
}
// MAPS mein duplicate keys nhi insert ho sakti matlab key same nhi ho sakti key will always be unique
