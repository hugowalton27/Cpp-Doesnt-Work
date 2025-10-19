#include <iostream>
using namespace std;

int main()
{
    string equation;
    string Mult = "Multiply";
    string Div = "Divide";
    string Add = "Add";
    string Sub = "Subtract";
    string Hold;
    string NO1;
    string NO2;
    cout << "Would you like to Multiply, Divide, Add or Subtract" << endl;
    cin >> equation;

    if (equation == Mult)
    {
        cout << "You chose Multiply" << endl;
        cout << "What would you like to multiply?" << endl;
        cin >> NO1 >> NO2;
        cout << stoi(NO1) * stoi(NO2) << endl;
    }
    else if (equation == Div)
    {
        cout << "You chose Divide" << endl;
        cout << "What would you like to divide?" << endl;
        cin >> NO1 >> NO2;
        cout << stoi(NO1) / stoi(NO2) << endl;
    }
    else if (equation == Add)
    {
        cout << "You chose Add" << endl;
        cout << "What would you like to add?" << endl;
        cin >> NO1 >> NO2;
        cout << stoi(NO1) + stoi(NO2) << endl;
    }
    else if (equation == Sub)
    {
        cout << "You chose Subtract" << endl;
        cout << "What would you like to subtract?" << endl;
        cin >> NO1 >> NO2;
        cout << stoi(NO1) - stoi(NO2) << endl;
    }

    cin >> Hold;

    return 0;
}