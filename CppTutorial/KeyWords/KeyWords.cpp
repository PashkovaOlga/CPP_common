/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   KeyWords.cpp
 * Author: olga
 * 
 * Created on January 5, 2018, 2:43 PM
 */

#include <iosfwd>
#include <iostream>
#include "KeyWords.h"
#include "../ClassA/ClassA.h"
#include "../ClassB/ClassB.h"

void KeyWords::explicit_exmpl()
{    
    //WRONG USING
    ClassA A1 = 10;
    ClassA A2(ClassA (10));
    
    //ClassB B1 = 10; ERROR!!! explicit ClassB(const int x=0)
    ClassB B1(10);
   
    if(A1 == A2)
    {
        std::cout << "A1 Equal A2" << std::endl;
    }
 

}

void KeyWords::const_reference_exmpl()
{
    //ClassA A1("Hello"); ERROR!!!
    ClassB B1("Hello");
}

void KeyWords::copy_constructor_exmpl()
{
    ClassA A1;
    ClassA A2 = A1; //copy constructor
    
    A1 = A2;//operator =
    
}

void KeyWords::const_vars_exmpl()
{
    static const int arr_size = 10;
    int arr[arr_size];
    
    enum {arr_size2 = 10};
    int arr2[arr_size2];
    
    //WRONG
    #define ARR_SIZE 10
    int arr3[ARR_SIZE];
    //#undef ARR_SIZE
}

void KeyWords::macros_func_exmpl()
{
    std::cout << "Equal: " << ClassB::Equal<int>(5, 10) << std::endl;
    
    //WRONG
    std::cout << "EQUAL: " << EQUAL(5, 10) << std::endl;
}