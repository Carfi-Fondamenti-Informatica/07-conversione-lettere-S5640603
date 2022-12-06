#include "lib.h"

bool convertLet(char c){
    if (c>=65 && c<=90){
        c+=32;
        return true;
    }else if(c>=97 && c<=122){
        c-=32;
        return true;
    }else{
        return false;
    }
}
