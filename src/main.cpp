#include <iostream>

class TestClass
{
    public:
        TestClass(){};
        virtual ~TestClass(){};

        void doStuff();
};

void TestClass::doStuff()
{
    std::cout << "Doing stuff" << std::endl;
}

int main(void)
{
    TestClass testInstance;

    testInstance.doStuff();

    return 0;
}
