#pragma once
#include<iostream>
using namespace std;
class A :
    public:
{
    int a;
    void x();
};
class task1:
    public A
{
    void y();
};

class B :
    public task1
{
    void c();
};
