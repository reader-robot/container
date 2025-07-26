#include <iostream>
#include <vector>


int main() {
    std::vector<int> a;
    a.push_back(1);
    a.push_back(3);
    a.push_back(5);
    a.push_back(4);

    //第一种容器取值操作
    std::vector<int>::iterator it = a.begin();
    std::vector<int>::iterator it2 = a.end();
    while (it != it2) {
        std::cout << *it << std::endl;
        it++;
    }

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
