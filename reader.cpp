// Reads data from Salaries.txt

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class salary
{
    int ID;                                                                     // 1
    string EmployeeName;                                                        // 2
    string JobTitle;                                                            // 3
    float BasePay, OvertimePay, OtherPay, Benefits, TotalPay, TotalPayBenefits; // 4-9
    int Year;                                                                   // 10
    string Notes;                                                               // 11
    string Agency;                                                              // 12
    string Status;                                                              // 13
    ifstream fin;

public:
    float getSalaryByID(int ID = 1)
    {
        float sal = (float)NULL;
        fin.open("Salaries.txt", ios::in);
        if (!fin)
        {
            cout << "Error opening file\n";
            return 0;
        }






        fin.close();
        return sal;
    }
};

int main()
{
    salary s;
    cout << s.getSalaryByID(4);
    return 0;
}