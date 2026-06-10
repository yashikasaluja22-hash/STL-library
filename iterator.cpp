#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <climits>
using namespace std;
int main() {
vector<int> v = {1, 2, 3, 4, 5};
for(int i = 0; i < v.size(); i++){
    cout << v[i] << endl;
}
cout << endl;
vector<int> ::iterator it = v.begin(); //DECLARING ITERATOR 
//using star * we print values of v.begin() or using v.begin()
cout << *it << endl;
cout << (*(it + 1)) << endl;

//PRINTING VALUES USING ITERATORS
for(it = v.begin(); it != v.end(); it++){//u can also use ++it means same thing
cout << (*it) << endl;
}
cout << "blah blah blah\n";
vector<pair<int, int>> v_p = {{1, 2}, {2, 3}, {3, 4}, {4, 5}};
vector<pair<int, int>> ::iterator itt;//name can be customized for iterator
for(itt = v_p.begin(); itt != v_p.end(); itt++){
  cout << (*itt).first << " " << (*itt).second << endl;  
}
cout << "ORR\n";
//we can also use below cleaner method
for(itt = v_p.begin(); itt != v_p.end(); itt++){
    cout << (itt->first) << " " << (itt->second) << endl;
}
}
///SUMMARY
//Vectors ki values ko access karne 2 tarike hote hai ek normale for loop ue karke 
// dusra iterators ko use karke bas... 