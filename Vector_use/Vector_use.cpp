//
// Created by 31831 on 25-7-26.
//

#include "Vector_use.h"
#include <vector>
#include <algorithm>

namespace Vector_use {

    //程序示例类Person
    class Person {
    public:
        Person(const std::string &name,const std::string &phone,const int &age) {
            m_name = name;
            m_phone = phone;
            m_age = age;
        }
        std::string m_name;
        std::string m_phone;
        int m_age;
    };
/*
 * ************************************************************************************
 */
    //回调函数

    void print_callback(const int &val) {
        std::cout << val;
    }
    //class回调
    void print_callback_cl(const Person &val) {
        std::cout << val.m_name << std::endl;
        std::cout << val.m_phone << std::endl;
        std::cout << val.m_age << std::endl;
    }
//--------------------------------------------------------------------------------------

    void Vector::test01() {
        a.push_back(1);
        a.push_back(3);
        a.push_back(2);
        a.push_back(5);

        auto it_begin = a.begin();
        auto it_end = a.end();

        while (it_begin != it_end) {
            std::cout << *it_begin;
            ++it_begin;
        }
        std::cout << std::endl;
    }
//----------------------------------------------------------------------

    void Vector::test02() {
        b.push_back(3);
        b.push_back(6);
        b.push_back(7);
        b.push_back(4);
        for (auto it_begin = b.begin(); it_begin != b.end(); ++it_begin) {
            std::cout << *it_begin;
        }
        std::cout << std::endl;
    }


    void Vector::test03() {
        c.push_back(2);
        c.push_back(3);
        c.push_back(8);
        c.push_back(8);
        std::for_each(c.begin(),c.end(),print_callback);
    }
    //将类传入容器的测试
    void Vector::test04() {
        Person b("BOb","mi",20);
        std::vector<Person> v;
        v.push_back(b);
        //第三种方法提取类
        std::for_each(v.begin(),v.end(),print_callback_cl);
    }
    //嵌套容器
    void Vector::test05() {
        std::vector<std::vector<int>> v;
        std::vector<int> v1;
        std::vector<int> v2;
        std::vector<int> v3;

        for (int i = 0; i < 3; ++i) {
            v1.push_back(i);
            v2.push_back(i+4);
            v3.push_back(i+2);
        }
        v.push_back(v1);
        v.push_back(v2);
        v.push_back(v3);
        for (auto it = v.begin(); it != v.end(); ++it) {
            for (auto it2 = it->begin(); it2 != it->end(); ++it2) {
                std::cout << "  " << *it2 ;
            }
            std::cout << std::endl;
        }
    }
} // vector