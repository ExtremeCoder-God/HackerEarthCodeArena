/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int t;
    vector <int> p;
    int ip,count = 1, sum = 1;
    cin>>t;
    while(t--){
        cin>>ip;
        p.push_back(ip);
    }
    int len = p.size();
    for(int i = 0; i<len-1; i++){
        if(p[i] < p[i+1]){
           sum += ++count;
        }
        else{
           sum += --count;
        }
    }
    cout<<sum;
    return 0;
}