

#include <iostream>
#include <fstream>
using namespace std;
class employee_management
{
private:
    char name[30];
    char id[5];
    char designation[10];
    char email_address[20];
    int age;
    int ctc;
    int experience;

public:
    void menu();
    void addNewEmployee();
};

void employee_management::menu()
{
menustart:
    int choice;
    char x;
    system("cls");

    cout << "\n\t\t\t>>>>>>>>>  EMPLOYEE MANAGEMENT SYSTEM  <<<<<<<<<";
    cout << "\n";
    cout << "\n\t\t\t------------------------------------------------";
    cout << "\n\t\t\tENTER   1:   To Add New Employee Details";
    cout << "\n\t\t\t------------------------------------------------";
	cout << "\n\t\t\tENTER   2:   To Exit     ";
    cout << "\n\t\t\t------------------------------------------------";
    cout << "\n\t\t\tPlease choose option: [1,2,3,4,5,6]";
    cout << "\n\t\t\t------------------------------------------------";
    cout << "\n\t\t\tPlease Enter Your Choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        do
        {
            addNewEmployee();
            cout << "\n\t\t\tDo u want to add more employee details!(Y,N): ";
            cin >> x;
        } while (x == 'y' || x == 'Y');
        break;

        case 2:
        exit(0);

    default: 
        cout << "\nSorry! I don't understand that! Please try again\n";
        break;
    }
    system("Pause");
    goto menustart;
}
void employee_management::addNewEmployee()
{
    system("cls");
    fstream file;
    cout << "\n\t\t\t>>>>>>>>>  EMPLOYEE MANAGEMENT SYSTEM  <<<<<<<<<";
    cout << "\n\t\t\t----------------------------------------";
    cout << "\n\t\t\t Enter First Name of Employee: ";
    cin >> name;
    cout << "\n\t\t\t----------------------------------------";
    cout << "\n\t\t\tEnter Employee ID [max 4 digits]: ";
    cin >> id;
    cout << "\n\t\t\t----------------------------------------";
    cout << "\n\t\t\t Enter Designation: ";
    cin >> designation;
    cout << "\n\t\t\t----------------------------------------";
    cout << "\n\t\t\t Enter Employee Age: ";
    cin >> age;
    cout << "\n\t\t\t----------------------------------------";
    cout << "\n\t\t\t Enter Employee CTC: ";
    cin >> ctc;
    cout << "\n\t\t\t----------------------------------------";
    cout << "\n\t\t\tEnter Employee Experience: ";
    cin >> experience;
    cout << "\n\t\t\t----------------------------------------";
}

int main()
{

    employee_management system;
    system.menu();

    return 0;
}
