/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ClassB.h
 * Author: olga
 *
 * Created on January 5, 2018, 2:36 PM
 */

#ifndef CLASSB_H
#define CLASSB_H

#include <string>
#include <iostream>
#include "../ClassA/ClassA.h"

class ClassB
{
private:
    explicit ClassB(const ClassB& orig); 
    ClassB& operator = (const ClassB&){};

public:
    explicit ClassB(const int x=0);
    explicit ClassB(const std::string&);
    virtual ~ClassB();
    
    template<typename T>
    static inline bool Equal(const T& l, const T& r)
    {
        return (l == r);
    }
    
private:


};

#endif /* CLASSB_H */

