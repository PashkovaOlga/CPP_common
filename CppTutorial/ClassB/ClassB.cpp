/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ClassB.cpp
 * Author: olga
 * 
 * Created on January 5, 2018, 2:36 PM
 */

#include "ClassB.h"

ClassB::ClassB(const ClassB& orig)
    : ind(0)
{
    
}

ClassB::ClassB(const int x)
    : ind(0)
{
    
}

ClassB::ClassB(const std::string& str)
    : ind(0)
{
    std::cout << str << std::endl;
}

ClassB::~ClassB() {
}

int ClassB::GetNextIndex() const
{
    return ++ind;
}

