#include <bits/stdc++.h>
using namespace std;
int main(){
map<pair<int, int> , int> m;
pair<int, int> p1, p2;
p1 = {1, 2};
p2 = {2, 3};
cout << (p1 > p2) << endl;
/* ">" is symbol for greater than
and "<" is symbol for less than means they are asking whether this thing is less than that thing or not
so if p1 greater than p2 than it will return 1
if not then return 0
and that depends on the first digit of each pair
if first digits of both pairs are same then it will look for second digits of both pair and compare that
*/

cout << (p1 < p2) << endl;
/* if p1 is less than p2 then it wud return 1
otherwise wud return 0
*/

//in the same manner as above sets are also compared and first digits of both sets are looked upon
set<int> s1 = {1, 2, 3};
set<int> s2 = {2, 3};
cout << (s1 > s2) << endl;
}