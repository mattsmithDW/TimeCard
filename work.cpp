File Edit Options Buffers Tools C++ Help
#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
  string date;
  string off;
  string day;
  string week;
  string period;

  cout << "What was the date?" << endl;
  cin >> date;
  cout << "What time did you get off?" << endl;
  cin >> off;
  cout << "How many hours that day?" << endl;
  cin >> day;
  cout << "How many hours that week?" << endl;
  cin >> week;
  cout << "How many hours that period?" << endl;
  cin >> period;
  cout << "[" << date << "] " << off << " Day " << day << " Week " << week << " Period " << period\
 << endl;


  ofstream myfile;
  myfile.open ("Work.txt", ios::out | ios::app | ios::binary);
  myfile << "[" << date << "] " << off << " Day " << day << " Week " << week << " Period " << peri\
od << "\r\n";
  myfile.close();




  date.erase(remove_if(date.begin(), date.end(), bind2nd(equal_to<char>(), '/')), date.end());
  off.erase(remove_if(off.begin(), off.end(), bind2nd(equal_to<char>(), ':')), off.end());
  day.erase(remove_if(day.begin(), day.end(), bind2nd(equal_to<char>(), ':')), day.end());
  week.erase(remove_if(week.begin(), week.end(), bind2nd(equal_to<char>(), ':')), week.end());
  period.erase(remove_if(period.begin(), period.end(), bind2nd(equal_to<char>(), ':')), period.end\
());




  //cout << date << off << day << week << period << endl;

  myfile.open ("Numbers.txt", ios::out | ios::app | ios::binary);
  myfile << date << off << day << week << period << "\r\n";
  myfile.close();

}










