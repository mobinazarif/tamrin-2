#include <iostream>

using namespace std;

int main()

{

    int n , a=1, b=1, c;

    cout << "enter the number "<<"\n";

    cin >> n;

    cout << 1 << "," << 1 << ",";
  
    if(n>2){

    for (int i =0; i < n-2; i++) {

    c=a+b;

    cout << c << ","<<" ";

    a=b;

    b=c;

    }
  }
    return 0;

}
