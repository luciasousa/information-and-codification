#include <iostream>
#include <fstream>
#include <map>
using namespace std;

int main(){
    ifstream ifs("char.txt");
    map<char,int> m;
    
    for(char x; ifs >> x;){
        m[x]++;
    }
    for(pair<char,int> i : m){
        cout << "map " << i.first << " -> " << i.second << endl;
    }
    
    ifs.close();
    return 0;
}