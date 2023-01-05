#include <iostream>

using namespace std;

int main()
{
  int x, y, sum;
  string stop;
  cout <<"Enter a digit \n";
  cin >>x;
  cout <<"Enter a digit again\n";
  cin >>y;
  sum = x + y;
  cout <<"result = "<<sum;
  getline(cin, stop);
  return 0;
}
