#include <iostream>
#include "date.hpp"
using namespace std;

bool is_a_leap_year(int y);

date::date(int y, int m, int d){
  year = y;
  month = m;
  day = d;
}

date::date() {

}

date::~date() {

}

int date::get_date_number() {
  int accumulated_days = (year - 2000)*365;
  //how about leap years?
  for (int ty = 2000; ty < year; ty++){
    if(is_a_leap_year(ty)) {
      accumulated_days++;
    }
  }
  //days due to complete months
  int month_length[] = {31,28,31,30,31,30,31,31,30,31,30,31};
  for(int mt=0;mt<month-1;mt++){
    accumulated_days += month_length[mt];
  }
  //deal with the possibility that the date is in a leap year and we are on or after february
  if((is_a_leap_year(year)) && (month>2)){
    accumulated_days++;
  }

  accumulated_days += day-1;
  return accumulated_days;
}

bool is_a_leap_year(int y) {
  bool r = false;
  if(y%4 == 0){
    r=true;
  }
  if(y%100 == 0) {
    r=false;
  }
  if(y%400 == 0) {
    r=true;
  }
  return r;
}

void date::print_date(){
  cout << year << " " << month << " " << day << endl;
}