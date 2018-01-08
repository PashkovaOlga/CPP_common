/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ClassA.h
 * Author: olga
 *
 * Created on January 5, 2018, 2:22 PM
 */

#ifndef CLASSA_H
#define CLASSA_H

#include <string>
#include <iostream>

class ClassA {
public:
    explicit ClassA();
    ClassA(const ClassA& orig);
    ClassA(const int var);
    explicit ClassA(std::string&);
    virtual ~ClassA();
    const ClassA& operator = (const ClassA &Aobj);
    
    bool operator == (const ClassA &Aobj);
    bool operator != (const ClassA &Aobj);
    
private:
    int x;
    

};

#endif /* CLASSA_H */

