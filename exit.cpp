#include <iostream>

using namespace std;

int main()
{
    string text;
    int number,a,sum=0;

    cout << "How many words do you want to enter? "<<"\n";
    cin >> a;




    for (int i=0 ; i<a ; i++)
    {
        cout << "please enter a word "<<"\n";
        cin >> text;


        while (text != "exit" )
        {
            cout << "enter number "<<"\n";
            cin >> number;
            sum += number;
            break;
        }
    }
    cout << "sum :"<< sum << "\n" ;

    return 0;
}
