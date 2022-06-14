#include<iostream>
#include<map>

using namespace std;

const int N=10;

int main(){
    map <string, int> m;
    string names[N]={"Ayush", "Aksmit", "Amit", "Sushita", "Ayush", "Aksmit", "Amit", "Sushita", "Ayush", "Aksmit"};

    // for(int i=0; i<N; i++){
    //     m[names[i]]=0;
    // }

    for(int i=0; i<N; i++){
        m[names[i]]+=1;
    }

    for(auto &i: m){
        cout<<"\n"<<i.first<<" "<<i.second<<"\n";
    }

    return 0;
}