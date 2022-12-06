#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char c=0;
    cin>>c;
    if(conv(c)==1){
        cout<<c<<endl;
    }else{
        cout<<"errore"<<endl;
    }
    return 0;
}
