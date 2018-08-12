#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string S;
    getline(cin,S);
    int i = 0, len = S.length(), space = 0;
    while(i<len){
        if(i == 0 && (S[i] >= 'a' && S[i] <= 'z')){
            S[i] -= 32;
            continue;
        }
        if(S[i] == ' '){
            i++;
            if(S[i] >= 'a' && S[i] <= 'z'){
                S[i] -= 32;
            }
            continue;
        }
        i++;
    }
    cout<<S;
    return 0;
}