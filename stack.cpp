#include <bits/stdc++.h>
using namespace std;
int main(){
stack<int> s;
//u can use any datatype inside stack including pair, set, vector, etc;
s.push(2);
s.push(3);
s.push(4);
s.push(5);
while(!s.empty()){
    cout << s.top() << endl; //wud print top element of stack(last inserted element)
    s.pop(); //deletes top element of stack
} 
}
//take out stl library notes while studying these really really important