#include <stdio.h>
#include "Date.h"
#include <iostream>


Date::Date(int year,int month,int day){
    this->year = year;
    this->month = month;
    this->day = day;
}

void Date::printDate() const{
    std::cout<<day<<"."<<month<<"."<<year<<std::endl;
}



