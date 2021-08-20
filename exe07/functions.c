#include "functions.h"
/*
 
 - mdc(x, y) = y, se x >= y e x mod y = 0
 - mdc(x, y) = mdc(y, x), se x < y
 - mdc(x, y) = mdc(y, x mod y), caso contrário

 */
int mdc(int x, int y){
    if(x >= y  && x % y == 0) 
        return y;
    else if(x < y)
        return mdc(y, x);
    else
        return mdc(y, x % y);
}
