#include <bits/stdc++.h>
using namespace std;
void print(multiset<string> &s){
    for(auto it : s){//no need to use & operator as we have already used in above line
     cout << it << endl;
    }
}
int main(){
/*MULTISET allows u to store duplicates
matlab ek se zyada baar u can store same value or insert same value in set
*/
multiset<string> s;
s.insert("abc");
s.insert("llo");
s.insert("ioio");
s.insert("jkh");
s.insert("jkh");
s.insert("abc");
print(s); //MULTISET prints in orderd form

cout << "after find and erase" << endl;

auto it = s.find("abc");
if(it != s.end()){
    s.erase(it);
}
print(s);

cout << "after erase" << endl;

s.erase("jkh");
print(s);
}
/*jab tum iterator (it) use karke erase karte ho in case if duplicates toh sirf first occurance
wali value delete hoti but agar tum simple 
erase("abc") ---> value dalkar directly erase karte ho toh saari duplicate value including orginial delete hojati hai*/

//using iterator ek hi value delete hoti hai