
#include <iostream>
#include <string>
#define def "iAmDefine"

int value = 0;

namespace io
{
    int getValue() 
    {
        return 7;
    }
};

int sum(int fP, int sP);

void test2()
{
    std::cout << "Test" << std::endl;
}

void test();

std::string hello();

int main()
{
    std::cout << "Hello World!\n";
    test();
    std::cout << io::getValue() << std::endl;
    test2();
    std::cout << hello() << std::endl;
    std::cout << "Sum : " << sum(2, 3) << "\n\t I am Vika" << std::endl;
    value = sum(4, 7);
    std::cout << "Value : "<< value << std:: endl;
    return 0;
}

void test() 
{
    std::cout << def << std::endl;
}

std::string hello()
{
    return "eehuc";
}

int sum(int fP, int sP)
{
    return fP + sP;
}