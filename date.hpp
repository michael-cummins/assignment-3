#pragma once
#include <string>
using namespace std;
class date {
  protected:
    int year;
    int month;
    int day;
  public:
   date(int y, int m, int d); //convinience constructer
   date(); //default constructer
  ~date(); //destructer
  void print_date();
  int get_date_number();
};