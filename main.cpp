// Salary Mangement System

#include <iostream>
using namespace std;

class Employee
{
private:
    int empno, time;
    char name[20];
    float basic, da, hra, gross, net;

protected:
    void Egetinfo()
    {
        cout << "Enter Employee Number: ";
        cin >> empno;
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter time(months) worked: ";
        cin >> time;
    }
    void Ecalculate()
    {
        basic = 10000 * time;
        da = 0.5 * basic;
        hra = 0.3 * basic;
        gross = basic + da + hra;
        net = gross - 0.1 * gross;
    }
    void Edisplay()
    {
        cout << "Employee No: " << empno << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary = " << basic << endl;
        cout << "DA = " << da << endl;
        cout << "HRA = " << hra << endl;
        cout << "Gross Salary = " << gross << endl;
        cout << "Net Salary = " << net << endl;
    }
};
class Managers
{
private:
    int empno, time;
    char name[20];
    float basic, da, hra, gross, net;

protected:
    void Mgetinfo()
    {
        cout << "Enter Employee Number: ";
        cin >> empno;
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter time(months) worked: ";
        cin >> time;
    }
    void Mcalculate()
    {
        basic = 20000 * time;
        da = 0.5 * basic;
        hra = 0.3 * basic;
        gross = basic + da + hra;
        net = gross - 0.1 * gross;
    }
    void Mdisplay()
    {
        cout << "Employee No: " << empno << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary = " << basic << endl;
        cout << "DA = " << da << endl;
        cout << "HRA = " << hra << endl;
        cout << "Gross Salary = " << gross << endl;
        cout << "Net Salary = " << net << endl;
    }
};
class BoardOfDirectors
{
private:
    int empno, time;
    char name[20];
    float basic, da, hra, gross, net;

protected:
    void Bgetinfo()
    {
        cout << "Enter Employee Number: ";
        cin >> empno;
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter time(months) worked: ";
        cin >> time;
    }
    void Bcalculate()
    {
        basic = 30000 * time;
        da = 0.5 * basic;
        hra = 0.3 * basic;
        gross = basic + da + hra;
        net = gross - 0.1 * gross;
    }
    void Bdisplay()
    {
        cout << "Employee No: " << empno << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary = " << basic << endl;
        cout << "DA = " << da << endl;
        cout << "HRA = " << hra << endl;
        cout << "Gross Salary = " << gross << endl;
        cout << "Net Salary = " << net << endl;
    }
};
class Salary : public Employee, public Managers, public BoardOfDirectors
{
private:
    int rank;

public:
    Salary()
    {
        rank = 0;
        getrank();
    }
    void getrank()
    {
        cout << "For Employee enter 1, for Manager enter 2, for Board of Directors enter 3, to exit enter 4: ";
        cout << "Enter rank: ";
        cin >> rank;
    }
    void display()
    {
        switch (rank)
        {
        case 1:
            Egetinfo();
            Ecalculate();
            Edisplay();
            break;
        case 2:

            Mgetinfo();
            Mcalculate();
            Mdisplay();
            break;
        case 3:
            Bgetinfo();
            Bcalculate();
            Bdisplay();
            break;
        case 4:
            exit(0);
            break;
        default:
            cout << "Invalid Rank";
            break;
        }
    }
};
int main()
{
    Salary s;
    s.display();
    return 0;
}