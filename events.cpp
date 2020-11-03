#include <iostream>
#include "events.hpp"
using namespace std;

events::events(){
 
}

events::~events()
{
 
}
events::events(int y, int m, int d, string name){
  year= y;
  month = m;
  day = d;
  description = name;
}

void events::print() {
  cout << year << " " << month << " " << day << " " << description << endl;
}
