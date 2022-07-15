#include <iostream>

using namespace std;

int s = 0, q = 0; //global variables
int main()
{
   /* int x;
    float y;
    cout << "Please enter 2 numbers: "<< endl;
    cin>> x>> y;
    cout << "X+Y= "<<x+y<<endl<< "X-Y= "<<x-y<< endl;
    float l, m, n;
    cout<<"Enter three number to get their avg: :" <<endl;
    cin>> l >> m>>n;
    cout << "Average = " << (l + m + n)/3 << endl;

    //prefix
    int r = 0, c = 0;
    c = ++r;
    cout << c << endl;
    cout << r << endl;

    //postfix
    int z = 0;
    c = z++;
    cout << c << endl;
    cout << z << endl;


    q = s++ + ++s;
    //q = 1 +  (1) > as it's as it's post fix
    cout << q << endl;
    // add 1 after printing to s
    cout << s << endl;

    {
        int s = 5, q = 20; //local variables
        cout << ::s << endl<< q<< endl; //:: means give the global variable not the local
    }

    //if statements
    int g = 0;
    cout << "Enter your grade: " << endl;
    cin>> g;
    if (g > 90)
        cout << " Your letter grade is A! " << endl;
    else if (g > 80)
        cout << " Your letter grade is B! " << endl;
    else if (g > 60)
        cout << " Your letter grade is C! " << endl;
    else
        cout << "Failure!" << endl;

    //odd and even numbers
    int num = 9;
    if (num % 2 == 0)
        cout << " Your num is even " << endl;
    else
        cout << "Your num is odd!" << endl;

    //short if condition
    cout << ((5 < 10) ? true : false) << endl;
    int i = (5 < 7) ? 5 : 7;
    cout << i << endl;

    int t = 0;
    cout << "Enter your age: ";
    cin >> t;
    char p = '\0';
    cout << "Enter your gender: ";
    cin >> p;
    if (t <18 && p == 'm')
        cout <<"Boy" << endl;
    else if (t>=18 && p == 'm')
        cout << "Man" << endl;
    else if (t<18 && p =='f' )
        cout << "Girl ! ;) " << endl;
    else if (t >=18 && p == 'f')
        cout << "Lady ! " << endl;
    else
        cout << "False info " << endl; */

    switch (6)
    {
    case 1:
        cout << "Case 1" << endl;
        break;
    case 2:
        cout << "Case 2" << endl;
        break;
    case 3:
        cout << "Case 3" << endl;
        break;
    default:
        cout<< "Out of range" << endl;
        break;
    }

    int x = 0;
    cout<<x<<endl<<sizeof(x)<<endl<<&x<<endl;
    wchar_t o = 'ج';
    wcout<<o<<endl;
    string l = "Ayaaah is beutiful";
    cout << l << endl;
    return 0;
}
