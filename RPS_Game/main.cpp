#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>

using namespace std;

int main(void)
{
    std::string userChoise;

    srand (time(NULL));
    int rand_num = rand() % 3 + 1;


    cout << "Enter Rock, Scissors or Paper: " << endl;
    cin >> userChoise;

    if (userChoise == "Rock" && rand_num == 1)
    {
        cout << "You win!\n";
    }

    else if (userChoise == "Scissors" && rand_num == 2)
    {
        cout << "You win!\n";
    }

    else if (userChoise == "Paper" && rand_num == 3)
    {
        cout << "You win!\n";
    }

    else
    {
        cout << "Looser!!!" << endl;
    }

    return 0;
}

