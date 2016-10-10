#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>

using namespace std;

int main(void)
{
    int num;
    srand (time(NULL));
    int rand_num = rand() % 1000 + 1;

    for (int i = 0; i < 10; ++i)
    {
        cout << "Please, enter your number from 1 to 1000: " << endl;
        cin >> num;

        if (num > rand_num)
        {
            cout << "My number is smaller\n";
        }

        else if (num < rand_num)
        {
            cout << "My number is bigger\n";
        }

        else
        {
            cout << "You win!!!" << endl;
        }
    }

    return 0;
}
