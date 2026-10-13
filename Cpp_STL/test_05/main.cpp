//找出数组中的最大值及其索引
//题目：给定数组 {3, 8, 2, 10, 6}，输出最大值及其索引。
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> data = {3, 8, 2, 10, 6};

    int maxValue = data[0];
    int maxIndex = 0;

    for (int i = 1; i < data.size(); i++)
    {
        if (data[i] > maxValue)
        {
            maxValue = data[i];
            maxIndex = i;
        }
    }

    std::cout << "最大值：" << maxValue << std::endl;
    std::cout << "索引：" << maxIndex << std::endl;

    return 0;
}