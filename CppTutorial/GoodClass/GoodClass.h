#ifndef __GOOD_CLASS_H__
#define __GOOD_CLASS_H__

namespace SP1
{
    typedef int INT;

    class GoodClass_1
    {
    private:
        explicit GoodClass_1(const GoodClass_1& orig){}; 
        GoodClass_1& operator = (const GoodClass_1&){};

    public:
        explicit GoodClass_1(const int x=0){};
        virtual ~GoodClass_1(){};

        void foo();

        //if ERROR: "undefined reference" to template function arise
        template<typename type_t>
        void foo_2(type_t& var) const;

        //if ERROR: "expected primary-expression before >" to template function arise
        template<typename type2_t>
        void foo_3(type2_t& var) const;
    };
}
#include "GoodClass_tmplt.h"

#endif//__GOOD_CLASS_H__