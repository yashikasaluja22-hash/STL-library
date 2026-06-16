#include <bits/stdc++.h>
using namepace std;
int main(){
//suppose kisi student with full name tumhe use marks for his subjects store karne hai
// now suppose tumhe aise for a no. of students ke liye karna hai and u want to print them too
map<pair<string, string>, vector<int>> m;
int n;
cin >> n;//n is no. of students total
for(int i = 0; i < n; i++){
    int fn, ln, ct;
    //fn is firstname, ln is lastname, ct is count of no. of subjects of a student
    cin >> fn >> ln >> ct;
    for(int j = 0; j < ct; j++){
        int x;
        cin >> x;
        m[{fn, ln}].push_back(x);
    }
}
for(auto &it : m){
    auto &full_name = it.first;
    auto &list = it.second;
    cout << full_name.first << " " << full_name.second << endl;
    //cout << list.size() << endl; if u want this to print
    for(auto &element : list){
        cout << element << " ";
    } 
cout << endl;
}

}