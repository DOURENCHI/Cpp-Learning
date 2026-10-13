#include <iostream>
#include <vector>

int getSum(const std::vector<int>& data)
{
    int sum = 0;

    for (int i = 0; i < data.size(); i++)
    {
        sum += data[i];
    }

    return sum;
}

int getMax(const std::vector<int>& data)
{
    int maxValue = data[0];

    for (int i = 1; i < data.size(); i++)
    {
        if (data[i] > maxValue)
        {
            maxValue = data[i];
        }
    }

    return maxValue;
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> data;

    for (int i = 0; i < n; i++)
    {
        int x;
        std::cin >> x;
        data.push_back(x);
    }

    std::cout << getSum(data) << std::endl;
    std::cout << getMax(data) << std::endl;

    return 0;
}