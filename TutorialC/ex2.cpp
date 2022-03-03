#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream ifs("num.txt");
    ofstream ofs("out.txt");
    for(int x; ifs >> x;){
        ofs << x << endl;
    }
    ifs.close();
    ofs.close();
    return 0;
}
