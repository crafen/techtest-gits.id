#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    if(n%3 == 0){
        if(n%5 == 0){
            cout << "Hello World";
        }
        else{
            cout << "Hello";
        }
    }else if(n%5 == 0){
        cout << "World";
    }

    return 0;
}