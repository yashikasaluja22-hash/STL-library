#include <bits/stdc++.h>
using namespace std;
bool is_positive(int x){
    return x > 0;
}
int main(){
vector<int> v = {2, 8, 5};
cout << all_of(v.begin(), v.end(), [](int x){return x > 0;}) << endl;
/* toh yahan all_of function vector ke har element ko pass karayga thru lambda function
aur sirf tabhi value 1 ya 0 (true/false) dega jab woh har element ke loye true hoga
if kisi bhi ek element ke liye false hoga toh 0 return hoga
*/

cout << all_of(v.begin(), v.end(), is_positive); //another way to do it

cout << any_of(v.begin(), v.end(), [](int x){return x > 0;});
/*agar koi bhi element ke liye yeh true hai toh treu return hoga warna
warn ajab sab hi element ke liye false hoga tabhi false return hoga
*/

cout << none_of(v.begin(), v.end(), [](int x){return x > 0;});
/*jab saare elements ke liye above condition false hogi tabhi true return karega
*/
}