//
// Created by 31831 on 25-7-26.
//

#ifndef VECTOR_H
#define VECTOR_H

#include <algorithm>
#include <iostream>
#include <vector>
namespace Vector_use {

class Vector {
public:

    std::vector<int> a;
    std::vector<int> b;
    std::vector<int> c;

    //第一种容器取值操作
    void test01();
    //第二种容器取值操作
    void test02();
    //第三种容器取值操作
    void test03();
    //特殊类型的容器
    void test04();
    //嵌套容器
    void test05();

};

} // vector

#endif //VECTOR_H
