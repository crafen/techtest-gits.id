#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    getline(cin,str);

    string str2 ="";

    for(int i=0; i<str.length(); i++){
        str2 += str[str.length()-1-i];
    }

    cout << str2;

    return 0;
}