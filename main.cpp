#include <iostream>
#include "events.hpp"
#include<string>

using namespace std;

int main() {
  events descriptions[20];
  int y,m,d, count = 0;
  string name;
  char c;
  
  cout<<"Enter the events in year month day:description format, one per line. To finish, enter the date 0 0 0.\n";
  
  cin >> y >> m >> d;
  while((y!=0)&&(m!=0)&&(d!=0)&&count<20){
    cin >> c;
    getline(cin, name);
    descriptions[count] = events(y,m,d, name);
    count++;
    cin >>y >> m >>d;
   }

for (int j = 0; j < count; j++) {
    int index_min = j;
    int min = descriptions[index_min].get_date_number();
    events temp = descriptions[index_min];
    for (int i = j+1; i <count ; i++) {
      if (descriptions[i].get_date_number() < min) {
        min = descriptions[i].get_date_number();
        index_min = i;
        temp = descriptions[i];
      }
    }
    descriptions[index_min] = descriptions[j];
    descriptions[j] = temp; // mimic swap
  }

  for (int i=0;i<count;i++) {
    descriptions[i].print();
  }

  return 0;
}