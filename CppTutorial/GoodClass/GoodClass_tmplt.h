#ifndef __GOOD_CLASS_TMPLT_H__
#define __GOOD_CLASS_TMPLT_H__

namespace SP1
{
    //if ERROR: "undefined reference" to template function arise
    template<typename type_t>
    void GoodClass_1::foo_2(type_t& var) const
    {

        //if ERROR: "expected primary-expression before >" to template function arise
        INT value = 3;
        template foo_3<INT>(value);
    }
}

#endif//__GOOD_CLASS_TMPLT_H__