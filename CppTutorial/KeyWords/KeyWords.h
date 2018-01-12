/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   KeyWords.h
 * Author: olga
 *
 * Created on January 5, 2018, 2:43 PM
 */

#ifndef KEYWORDS_H
#define KEYWORDS_H

#include "Declaration.h"

class KeyWords {
private:
    //ALLWAYS EXISTS
    KeyWords(){};
    KeyWords(const KeyWords& orig){};
    virtual ~KeyWords(){};
    KeyWords& operator = (const KeyWords& kw){};
 
public:
    static void explicit_exmpl();
    static void const_reference_exmpl();
    static void copy_constructor_exmpl();
    static void const_vars_exmpl();
    static void macros_func_exmpl();
    static void mutable_const_exmpl();
    
    

};

#endif /* KEYWORDS_H */

