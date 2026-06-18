#include <bitsstdc++.h>
using namespace std;
int main(){
/*jis no. ko search karne ke liye bolte ho kisi array/vector mein se toh
toh lower bound jo same number ya agar woh no. exist nhi karta toh usse just bada no. jo uss
array/vector mein ho woh return karta hai

now upper bound search kiye hue number se bada number dhoondhta hai array/vector mein
aur woh just bada no. return karta hai
*/
int n;
cin >> n;
int a[n];
for(int i = 0; i < n; i++){
    cin >> a[i];
}
for(int i : a){
    cout << i << " ";
}
cout << endl;
int *ptr = lower_bound(a, a+n, 5);
cout << *ptr << endl;
//first 2 values is the lower and upper limit to search for lower bound 
//and 3rd value is the no. jiska ka lower bound find out karna hai

//so a+n == a.end() wali position matlab last element se just agle wali which do not exists
//agar given element ka lower bound nhi hai present matlab usse bada koi element hi nhi hai 
//toh woh last element se agli position return karta hai i.e a+n in case of array and a.end() in vector
if(ptr == (a+n)){
    cout << "NOT FOUND\n";
}


//UPPER BOUND
int *ptr2 = upper_bound(a, a+n, 7);
if(ptr2 == (a+n)){
    cout << "not found upper bound\n";
}else{
    cout << *ptr2 << endl;
}
}