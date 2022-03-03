#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);

    for(int i=0; i<v1.size(); i++){
        cout << v1[i] << endl;
    }
    for(auto i: v1){
        cout << "-> " << i << endl;
    }
    vector<int>::iterator it = v1.begin();
    while (it!=v1.end()){
        cout << "** " << *it << endl;
        it++;
    }
    
    map<char,int> m;
    m['a']=5;
    m['b']=10;

    for(pair<char,int> i : m){
        cout << "map " << i.first << ";" << i.second << endl;
    }

    return 0;
}