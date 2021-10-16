#include<iostream>
using namespace std;

int main()
{
	int seconds, hours, minutes;
int h,m,s;
	cout << " Please enter seconds : ";
	cin >> seconds;

  s=seconds;
	minutes = seconds / 60;
  m=minutes;
	hours = minutes / 60;
  h=hours;
	cout << "\n The time is " <<h%24<< " : " <<m%60<<" : " <<s%60;

	return 0;
}
