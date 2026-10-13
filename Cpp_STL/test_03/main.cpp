//查找目标值的索引
//题目：给定数组 {4, 7, 2, 9}，查找目标值 2，输出它的索引。如果不存在，输出 -1。
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> data = {4, 7, 2, 9};
    int index = -1;
    auto it = std::find(data.begin(), data.end(), 2);

if (it != data.end())
{
    index = static_cast<int>(it - data.begin());
    
}

std::cout << index << std::endl;

return 0;
}