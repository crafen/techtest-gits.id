#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    getline(cin,str);

    string res="";
    if(str[str.length()-2] == 'P'){
        res = str.substr(0,5);
    }else{
        int temp;
        temp = stoi(str.substr(0,2));
        temp -= 12;
        res = "0" + to_string(temp) + str.substr(2,3);
    }

    cout << res;
    return 0;
}