#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    std::vector<int> inputValues;

    do
    {
        int input = 0;
        std::cin >> input;
        if (input)
        {
            inputValues.push_back(input);
        }
        else
        {
            break;
        }

    }
    while (true);


    std::cout << "--------------" << std::endl;

//Sorting(algorithm)

    std::sort(std::begin(inputValues), std::end(inputValues));


//algorithm
    auto mult = [](int &value){ value = value * 2;};

    std::for_each(inputValues.begin(), inputValues.end(), mult);

//first example

    for (int i = 0; i < inputValues.size(); ++i)
    {
        std::cout << inputValues.at(i) << std::endl;
    }


//second example

    for (int value : inputValues)
    {
        std::cout << value << std::endl;
    }

//third example (we can use there auto type for iterator)

    for ( /*std::vector<int>::const_iterator*/ auto it = std::begin(inputValues);
        it != std::end(inputValues);
        ++it)
    {
        std::cout << *it << std::endl;
    }



    return 0;
}

