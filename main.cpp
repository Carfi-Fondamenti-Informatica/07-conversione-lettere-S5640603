#include <iostream>
#include "lib.cpp"
using namespace std;

int main() {
    char c;
    cin>>c;
    if (convertLet(c)==true) {
        cout << c <<endl;
    }else{
        cout<< "errore" <<endl;
    }
    return 0;
}
