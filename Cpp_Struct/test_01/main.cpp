//使用 struct 保存检测结果，使用 enum class 表示推理状态，再用范围 for 遍历结果

#include <iostream>
#include <string>
#include <vector>

struct DetectionResult
{
    std::string label;
    float confidence;
};

enum class InferenceStatus
{
    Ready,
    Running,
    Failed
};

int main()
{
    std::vector<DetectionResult> results = {
        {"car", 0.95f},
        {"person", 0.88f},
        {"bicycle", 0.76f}
    };

    InferenceStatus status = InferenceStatus::Ready;

    if (status == InferenceStatus::Ready)
    {
        for (const auto& result : results)
        {
            std::cout << result.label << ": "
                      << result.confidence << std::endl;
        }
    }

    return 0;
}
