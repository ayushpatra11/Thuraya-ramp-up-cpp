#include<iostream>
#include<map>

using namespace std;

void display(map<int, string> :: iterator it, map <int, string> m){
    cout<<"\nThe map is as follows:\n";
    for(it=m.begin(); it!=m.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    } 
}

void find(map<int, string> :: iterator it, map<int, string> m, int ele){
    int flag=0;
    auto it2=m.find(ele);
    if(it2 == m.end())
        cout<<"/n The element is not present inside the map\n";
    else
        cout<<"\nThe element is found, details are as follows: \n"<<it2->first<<" "<<it2->second<<endl;
    
}

int main(){
    map <int, string> m;

    m[11]="Ayush";
    m[9]="Amit";
    m[8]="Aksmit";
    m[4]="Sushita";
    map<int, string> :: iterator it;

//The display function is called
    display(it, m);

    int key = 11;
    find(it, m, key);
    m.erase(8); //erase can have either an iterator or a key value passed to delete an element. In case of a key which does not exist is passed, segmentation fault is seen
    display(it, m);

    

    return 0;
}