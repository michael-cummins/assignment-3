#pragma once
#include <string>
#include "date.hpp"
using namespace std;

class events : public date {
  private:
  string description;
  public:
  events();
  ~events();
  events(int y, int m, int d, string name);
  void print();
};