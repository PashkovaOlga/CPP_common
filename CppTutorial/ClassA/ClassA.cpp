/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ClassA.cpp
 * Author: olga
 * 
 * Created on January 5, 2018, 2:22 PM
 */

#include "ClassA.h"

ClassA::ClassA()
    : x(-1)
{
    
}

ClassA::ClassA(const ClassA& orig) 
    : x(-1)
{
    std::cout << "Copy constructor ClassA" << std::endl;
}

ClassA::ClassA(const int var)
    : x(var)
{
    
}

ClassA::ClassA(std::string &str)
{
    std::cout << str << std::endl;
}

ClassA::~ClassA() {
}

bool ClassA::operator == (const ClassA &Aobj)
{
    return (this->x == Aobj.x);
}

bool ClassA::operator != (const ClassA &Aobj)
{
    return !(this->x == Aobj.x);
}


const ClassA& ClassA::operator = (const ClassA &Aobj)
{
    std::cout << "ClassA::operator =" << std::endl;
    if (this != &Aobj)
    {
        return Aobj;
    }
    else
    {
        return *this;
    }
}