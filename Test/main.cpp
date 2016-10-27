#include <iostream>
#include <string>
#include <vector>
#include <printable.h>
#include <iterator>

using namespace std;

/*
class PersonalInformation
{
public:

    int age()
    {
        return 2016 - mYear;
    }

    void setYear (const int &age)
    {
             mYear = age;
    }



    }

    std::string name()
    {
        return mName;
    }

    void setAddress(const std::string &address) //уникаємо копіювання const + &
    {
        if (!address.empty())
        {
             mAddress = address;
        }
        else
        {
            std::cout << "ERROR: Invalid address" << std::endl;
        }

    }

    std::string address()
    {
        return mAddress;
    }

    std::vector<string> employeePersonalInformation;

private:
    std::string mName;
    std::string mAddress;
    int mYear;
};*/

class Employee : public Printable
{

public:
    std::string name()
    {
        return mName;
    }

    void setName(const std::string &name)
    {
        if (!name.empty())
        {
             mName = name;
        }
        else
        {
            std::cout << "ERROR: Invalid name" << std::endl;
        }
     }

    std::string numberPhone()
    {
        return mNumberPhone;
    }

    void setNumberPhone(const std::string &numberPhone)
    {
        if (!numberPhone.empty())
        {
             mNumberPhone = numberPhone;
        }
        else
        {
            std::cout << "ERROR: Invalid number phone" << std::endl;
        }
    }

    std::string address()
    {
        return mAddress;
    }

    void setAddress(const std::string &address)
    {
        if (!address.empty())
        {
             mAddress = address;
        }
        else
        {
            std::cout << "ERROR: Invalid address" << std::endl;
        }
    }

    int salary()
    {
        return mSalary;
    }

    int setSalary (const int &salary)
    {
        mSalary = salary;
    }

    int yearStartWork()
    {
        return mYearStartWork;
    }

    int setYearStartWork (const int &yearStartWork)
    {
        mYearStartWork = yearStartWork;
    }

    std::vector<std::string> listToPrint;

    void print();




    Employee();

private:

    std::string mName;
    std::string mNumberPhone;
    std::string mAddress;
    int mSalary;
    int mYearStartWork;
    std::vector <std::string> mPersonalData;

};

void printList(const std::vector<std::string> listToPrint)
{
    for (auto item : listToPrint)
    {
        item->Employee::print();
        std::cout << std::endl;
    }
}

int main(int argc, char** argv)
{
    /*PersonalInformation record;
    record.setName("John");
    record.setAddress("Backer str., 42");
    record.setYear (1965);

    std::cout << record.name() << " has age = " << record.age() << " years" << std::endl;


    record.employeePersonalInformation.push_back(record.name());
    record.employeePersonalInformation.push_back(record.address());

    for (string i : record.employeePersonalInformation) { // c++11 range-based for loop
            std::cout << i << '\n';
        }*/

    std::vector<std::string> employeesToPrint;

    // Створіть об'єкти Employee та наповніть список тут....
    Employee* first;
    first->setName("John");
    first->setAddress("Baker str., 42");
    first->setNumberPhone("066-762-33-23");
    first->setSalary(300);
    first->setYearStartWork(2102);

    employeesToPrint.push_back(first->name());
    employeesToPrint.push_back(first->address());


    printList(employeesToPrint);

    std::cout << printList() << std::endl; // ------------

    cin.get();
}

