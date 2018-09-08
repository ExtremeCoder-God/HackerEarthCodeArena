/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

class hint{
  public:
    long int ai,di;
    bool trust;
};

class stage{
  public:
    long int t,id;
};

int main(){
    vector <hint> hints;
    vector <stage> stages;
    long int n,q,ip,yip;
    cin>>n>>q;
    while(n--){
        cin>>ip>>yip;
        hint obj;
        obj.ai = ip;
        obj.di = yip;
        hints.push_back(obj);    
    }
    while(q--){
        cin>>ip>>yip;
        stage obj;
        obj.t = ip;
        obj.id = yip;
        stages.push_back(obj);
    }
    long int len = stages.size();
    for (long int i = 0; i < len; ++i){
        if(stages[i].t == 1){
            long int ai2 = hints[stages[i].id-1].ai, di2 = hints[stages[i].id-1].di;
            hints[stages[i].id-1].ai = 
            if (ai2 == 0 || di2 == 0){
                cout<<"1 "<<  ((ai2>di2)  ?  ai2-di2 : di2-ai2) <<endl;
            }
            else{
                cout<<"2 ";
                ai2>di2 ? cout<<ai2-di2<<" "<<ai2+di2<<endl : cout<<ai2+di2<<endl; 
            }
        }
        else if (stages[i].t == 2){
            cout<<"0"<<endl;
        }
        else if(stages[i].t == 3){
            cout<<"-1"<<endl;
        }
    }
    return 0;
}