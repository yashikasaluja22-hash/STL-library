#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <climits>
using namespace std;
// Generally iterators ka jo code hota hai woh bahut lamba hota hai 
// to yahan hum learn karenge ki iterators ke code ko short mein kaise likhe jaaye in c++
// using FOREACH LOOP
int main(){
vector<pair<int, int>> v = {{1, 2}, {2, 3}, {3, 4}, {4, 5}};
for(auto &i : v){
    cout << i.first << " " << i.second << endl; 
}
cout << "ORR\n";
for(auto &[x, y] : v){
    cout << x << " " << y << endl;
}
}