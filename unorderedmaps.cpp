#include <bits/stdc++.h>
using namespace std;
void print(unordered_map<int, string> &m){
    cout << m.size() << endl;
    for(auto &hi : m){
        cout << hi.first << " " << hi.second << endl;
    }
}
int main() {
//  DIFF B/W maps & unordered map
// 1. lil bit syntax
//2. time complexity
//3. valid keys datatype
unordered_map<int, string> m;
m[1] = "abc";
m[5] = "cdf";
m[3] = "bcd";
m[7] = "egf";
m[6] = "igk";
print(m);//will print in aan unordered / unsorted pair

cout << "after erase operation\n";
m.erase(7);
print(m);

//you cannot use pair in unordered map
// unordered_map<pair<int, int> , string> m; this is wrong wont work
// BUT maps mein work karega
map<pair<int, int> , string> mp; //like this
}
// SO unordered maps ke andar u can't use pair, vector, sets only simple datatypes like int, string
// BUT in maps u can use all vector, sets, pair , etc;
