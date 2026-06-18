#include <bits/stdc++.h>
using namespace std;
int main(){
cout << [](int x){return x+2;}(2);
cout << [](int x, y){return x+y;}(4, 6);
//here 2 is initial value given to x;
//so output will be 4;

auto sum = [](int x, y){return x+y;};
cout << sum(4, 6);
}