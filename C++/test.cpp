// Your First C++ Program

#include <iostream>

int main()
{
    int n;
    std::cout << "How many stairs you want?\n";
    std::cin >> n;
    int a = 1;

    while (a < (n + 1))
    {
        for (int i = 0; i < (n - a); i++)
        {
            std::cout << " ";
        }

        for (int i = 0; i < a; i++)
        {
            std::cout << "#";
        }
        std::cout << "\n";
        a++;
    }
    return 0;
}
