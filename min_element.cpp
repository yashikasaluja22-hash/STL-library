#include <bits/stdc++.h>
using namespace std;
int main(){
//algorithm library has min_element in-built function to print min element
/* but this min_element return a pointer of that element
so to get the min value we use a star * before it
*/
int n;
cin>> n;
vector<int> v(n);
for(int i = 0; i < n; i++){
    cin >> v[i];
}
int min = *min_element(v.begin() + 3, v.end());
//or u can directly us this --> cout << *min_element(v.begin() + 3, v.end());
cout << min << endl;

//max elemnt
int max = *max_element(v.begin(), v.end());
cout << max << endl;

//accumulate function
int sum = accumulate(v.begin(), v.end(), 0);
//intially sum ki value tumhe deni padti hai accumulate ko here that is 0
cout << sum << endl; 

//count function
int ct = count(v.begin(), v.end(), 3)
//konse element ka count chaiye hai matlab woh element kitni baar occur ho rha hai
//here it is 3
cout << ct << endl;

//FIND function
int element = *find(v.begin(), v.end(), 2);
if(it != v.end()){
    cout << element << endl; 
}else{
    cout << "not found\n";
}
//or in below code we have not used * before find as we r using iterator
auto it = *find(v.begin(), v.end(), 2);;
cout << *it << endl;

//Reverse function
string s = "abcdefghijk";
reverse(s.begin(), s.end());
cout << s << endl;
}