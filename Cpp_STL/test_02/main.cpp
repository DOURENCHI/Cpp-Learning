#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

int main()
{
    int n;
    std::cin >> n;

    if (n <= 0)
    {
        return 0;
    }

    std::vector<int> data;

    for (int i = 0; i < n; i++)
    {
        int x;
        std::cin >> x;
        data.push_back(x);
    }

    std::sort(data.begin(), data.end());

    for (int i = 0; i < data.size(); i++)
    {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;

    std::unordered_map<int, int> counts;

    for (int i = 0; i < data.size(); i++)
    {
        counts[data[i]]++;
    }

    for (int i = 0; i < data.size(); i++)
    {
        if (counts[data[i]] > 0)
        {
            std::cout << data[i] << ": "
                      << counts[data[i]] << std::endl;

            counts[data[i]] = 0;
        }
    }

    return 0;
}