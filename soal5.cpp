#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    getline(cin,str);

    bool palin = true;
    for(int i=0; i<str.length()/2; i++){
        if(str[i] != str[str.length()-1-i]){
            palin = false;
            break;
        }
    }

    cout << palin;

    return 0;
}