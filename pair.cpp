#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <climits>
using namespace std;
int main(){
//pair<datatype1, datatype2>;
pair<int, string> p;
p = make_pair(2, "abd");
//OR
//p = {2, "acd"};
cout << p.first << " " << p.second << '\n';
//pass by reference using pair
pair<int, string> &p1 = p;
p1.first = 3;
cout << p.first << endl;
//agar &p1 ki jagah p1 use kiya sirf toh value change nhi hogi in p
cout << "enter p1 first\n";
cin >> p1.first;
cout << p.first << '\n';
//PAIR ARRAYS
pair<int, int> p_array[3];
p_array[0] = {1, 2};
p_array[1] = {2, 3};
p_array[2] = {3, 4};
for(auto i : p_array){
    cout << i.first << " " << i.second << '\n';
}
//TRY SWAP NOW
cout << "after swap\n";
swap(p_array[0], p_array[2]);
for(auto i : p_array){
    cout << i.first << " " << i.second << '\n';
}
}