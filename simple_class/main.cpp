#include <vector>
#include <string>
#include <iostream>
#include <array>

class PersonalInformation
{
public:

    //methods of class

    int age()
    {
        return 2016 - mYear;
    }

    // setter
    void setName(const std::string &name) //уникаємо копіювання const + &
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

    // getter
    std::string name()
    {
        return mName;
    }

    // fields of class - for members of class "m" before name
private:
    std::string mName;
    std::string mAddress;
    int mYear;
};


// for using without std::

using namespace std;

void func1(std::string s)
{
    std::cout << s << std::endl;
}

void func2(std::string &s)
{
    std::cout << s << std::endl;
}


int main()
{
    string a;
    a = "qqqqq";
    func1(a);
    std::cout << a << std::endl;

    string &refA = a;
    std::cout << refA << std::endl;

/*types of data
 *
    std::string a;
    std::vector<int> vec;
    std::array<int, 3> array;
*/

    PersonalInformation record;
    record.setName("John");
    /**
    record.mName = "John";
    record.mAddress = "Backer str., 42";
    record.mYear = "1965";
    */
    std::cout << record.name() << "has age = " << record.age() << " years" << std::endl;


    /*std::cout << record.mName << "has age = "
<< record.age() << "years" << std::endl;*/
}
