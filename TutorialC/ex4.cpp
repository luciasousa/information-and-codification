#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main(){
    ifstream ifs("num.txt");
    vector<int> v1;
    for(int x; ifs >> x;){
        v1.push_back(x);
    }
    for(int i=0; i<v1.size(); i++){
        cout << v1[i] << endl;
    }

    ifs.close();
    return 0;
}