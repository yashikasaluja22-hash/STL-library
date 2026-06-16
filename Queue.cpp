#include <bits/stdc++.h>
using namespace std;
int main(){
queue<string> q;
q.push("abc");
q.push("def");
q.push("efg");
q.push("hik");
q.push("lmo");
while(!q.empty()){
    cout << q.front << endl;
    q.pop();
}

}