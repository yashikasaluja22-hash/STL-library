#include <bits/stdc++.h> 
using namepace std;//no need to add line 1 and 2 in leetcode as this is already automated in it
class Solution {
public:
    bool isValid(string s) {
     unordered_map<char, int> symbols = {{'(', -1}, {'{', -2}, {'[', -3}, {')', 1}, {'}', 2}, {']',3}};
     stack<char> st;
     for(char bracket : s){
        if(symbols[bracket] < 0){
            st.push(bracket);
        }else{
            if(st.empty()) return false;
            char top = st.top();
            st.pop();
            if(symbols[bracket] + symbols[top] != 0) return false;
        }
     }
    if(st.empty()) return true;
    else return false;  
    }
};
//in leetcode valid parenthesis ques ans is till here only
int main(){
int t;
cin >> t;
while(t--){
    string s;
    cin >> s;
    cout << isValid(s);
}
}