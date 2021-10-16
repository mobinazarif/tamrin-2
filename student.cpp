#include<iostream>
#include<string>

using namespace std;
int main() {
	int n=100;
	float avg, max = 0, min = 20, sum = 0;
  cout<<"enter the number"<<"\n";
	cin >> n;
	float arr[n]=0;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
   	sum += arr[i];
		if (arr[i] > max)
      max = arr[i];
		if (arr[i] < min)
      min = arr[i];
	}

	avg = sum /n;

	cout << "AVERAGE = " << avg << endl
		<< "Max = " << max << endl
		<< "MIN = " << min << endl;
  
  return 0;
}
