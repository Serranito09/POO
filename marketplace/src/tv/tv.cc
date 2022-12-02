#include "tv.h"
#include <string>


bool Tv:: set_inch(float inch){
    if(inch>0){
        inch_=inch;
        return true;
    }
    else return false;
    

}