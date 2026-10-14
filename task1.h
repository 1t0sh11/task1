#pragma once
#include<iostream>
using namespace std;
class A :
    public:
{
    int a;
    void x(int a);
};
class task1:
    public A
{
    void y(int a);
};

class B :
    public task1
{
    void c(int a, int a1);
};
