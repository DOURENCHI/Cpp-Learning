
#include <iostream>
#include <memory>

class InferenceEngine
{
public:
    InferenceEngine()
    {
        std::cout << "推理引擎初始化" << std::endl;
    }

    void run()
    {
        std::cout << "执行模型推理" << std::endl;
    }

    ~InferenceEngine()
    {
        std::cout << "推理引擎释放" << std::endl;
    }
};

int main()
{
    {
        std::unique_ptr<InferenceEngine> engine =
            std::make_unique<InferenceEngine>();

        engine->run();
    }

    std::cout << "程序继续执行" << std::endl;

    return 0;
}
