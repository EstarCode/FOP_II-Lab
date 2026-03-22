#include <cmath>
#include "mathfuncs.h"

double processNumber(int num) {
    if (num < 0) 
        return num * num;
    else 
        return sqrt(num);
}