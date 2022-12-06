#include "lib.h"

bool conv(char &c){
    if(c>=65 and c<=90){
        c=c+32;
        return true;
    }else if(c>=97 and c<=122){
        c=c-32;
        return true;
    }else{
        return false;
    }
}
