#include <iostream>
//容器的头文件
//#include <vector>
#include "Vector_use/Vector_use.h"
#include <string>


int main() {

    Vector_use::Vector v1;

    v1.test01();
    std::cout << "--------------" << std::endl;
    v1.test02();
    std::cout << "--------------" << std::endl;
    v1.test03();
    std::cout << std::endl << "--------------" << std::endl;
    v1.test04();
    std::cout << "--------------" << std::endl;
    v1.test05();
    // while (true) {
    //
    // }
    return 0;
}
