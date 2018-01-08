/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: olga
 *
 * Created on January 5, 2018, 2:21 PM
 */

#include <cstdlib>
#include "ClassA/ClassA.h"
#include "KeyWords/KeyWords.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    KeyWords::explicit_exmpl();
    KeyWords::const_reference_exmpl();
    KeyWords::copy_constructor_exmpl();
    KeyWords::macros_func_exmpl();

    return 0;
}

