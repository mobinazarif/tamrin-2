#include<iostream>
#include<string>

using namespace std;

int main()
{
    int hh, mm, ss,seconds;
    cout << " enter time:" << "\n";
    cout << "Hours : "<<"\n";
    cin >> hh;

    cout << "Minutes : "<<"\n";
    cin >> mm;

    cout << "Seconds : "<<"\n";
    cin >> ss;


    cout <<" time : "<< hh <<":"<< mm <<":"<< ss<<"\n";
    seconds = hh * 3600 + mm * 60 + ss;
    cout << "the time to seconds: " << seconds<<"\n";

    return 0;
}
