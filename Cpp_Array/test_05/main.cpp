#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> data(n);

    for (int i = 0; i < n; i++)
    {
        data[i] = (i + 1) * 10;
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << data[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}