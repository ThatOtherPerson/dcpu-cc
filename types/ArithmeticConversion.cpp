///
/// @addtogroup LibDCPU-CI-Lang-C/Types
/// @{
///

///
/// @file       ArithmeticConversion.cpp
/// @brief      Definition of the ArithmeticConversion helper class.
/// @author     Patrick Flick
///

#include "ArithmeticConversion.h"
#include "IsTypeHelper.h"
#include "IntegralPromotion.h"

using namespace dcpucc;
using namespace dcpucc::types;

ArithmeticType* ArithmeticConversion::commonType(ArithmeticType* t1, ArithmeticType* t2)
{
    // if either operand has type long double, the other operand is converted to long double
    if (IsTypeHelper::isLongDouble(t1) || IsTypeHelper::isLongDouble(t2))
    {
        if (IsTypeHelper::isLongDouble(t1))
            return t1;
        else
            return t2;
    }
    // Otherwise, if either operand has type double, the other operand is converted to double.
    else if (IsTypeHelper::isDouble(t1) || IsTypeHelper::isDouble(t2))
    {
        if (IsTypeHelper::isDouble(t1))
            return t1;
        else
            return t2;
    }
    // Otherwise, if either operand has type float, the other operand is converted to float.
    else if (IsTypeHelper::isFloat(t1) || IsTypeHelper::isFloat(t2))
    {
        if (IsTypeHelper::isFloat(t1))
            return t1;
        else
            return t2;
    }
    
    // Otherwise, the integral promotions are performed on both operands.
    t1 = IntegralPromotion::promote(t1);
    t2 = IntegralPromotion::promote(t2);
    
    // If either operand has type unsigned long int, the other operand is converted to unsigned long int.
    if (IsTypeHelper::isUnsignedLong(t1) || IsTypeHelper::isUnsignedLong(t2))
    {
        if (IsTypeHelper::isUnsignedLong(t1))
            return t1;
        else
            return t2;
    }
    // Otherwise, if one operand has type long int and the other has type
    // unsigned int, if a long int can represent all values of an unsigned
    // int, the operand of type unsigned int is converted to long int
    else if (IsTypeHelper::isSignedLong(t1) || IsTypeHelper::isSignedLong(t2))
    {
        if (IsTypeHelper::isSignedLong(t1))
            return t1;
        else
            return t2;
    }
    // Otherwise, if either operand has type unsigned int, the other
    // operand is converted to unsigned int.
    else if (IsTypeHelper::isUnsignedInt(t1) || IsTypeHelper::isUnsignedInt(t2))
    {
        if (IsTypeHelper::isUnsignedInt(t1))
            return t1;
        else
            return t2;
    }
    // Otherwise, both operands have type int.
    return t1;
}

///
/// @}
///