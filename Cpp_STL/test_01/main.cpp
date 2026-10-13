#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

int main()
{
    std::vector<std::string> labels = {
        "car", "person", "car",
        "bicycle", "person", "car"
    };

    std::unordered_map<std::string, int> counts;

    for (int i = 0; i < labels.size(); i++)
    {
        counts[labels[i]]++;
    }

    std::cout << "car: " << counts["car"] << std::endl;
    std::cout << "person: " << counts["person"] << std::endl;
    std::cout << "bicycle: " << counts["bicycle"] << std::endl;

    return 0;
}