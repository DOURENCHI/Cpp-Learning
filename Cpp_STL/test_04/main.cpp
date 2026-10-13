//判断字符串是否包含子串

//题目：判断 "autonomous_driving" 是否包含 "driving"

#include <iostream>
#include <string>

int main()
{
    std::string text = "autonomous_driving";
    std::string target = "driving";

    if (text.find(target) != std::string::npos)
    //std::string::npos 表示未找到时返回的特殊位置值。

    //记忆方法：
    // - find() 返回位置。
    // - 找不到时返回 npos。
    // - 返回值不等于 npos，说明找到了。
    {
        std::cout << "找到了" << std::endl;
    }
    else
    {
        std::cout << "没有找到" << std::endl;
    }

    return 0;
}