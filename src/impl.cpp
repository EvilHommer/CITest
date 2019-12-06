#include "impl.h"


//constexpr Complex::Complex(const int real, const int imagine)
//    :mReal(real),
//      mImagine(imagine)
//{

//}

//int Complex::getReal(void)const
//{
//    return mReal;
//}

//int Complex::getImagine(void)const
//{
//    return mImagine;
//}

//Complex Complex::operator+(const Complex& op)
//{
//    int real = this->mReal + op.getReal();
//    int imagine = this->mImagine + op.getImagine();
//    Complex sum{real, imagine};
//    return sum;
//}

Complex Complex::operator-(const Complex& op)
{
    int real = this->mReal - op.getReal();
    int imagine = this->mImagine - op.getImagine();
    Complex sum{real, imagine};
    return sum;
}

bool operator==(const Complex& op1, const Complex& op2)
{
    return ((op1.getReal() == op2.getReal()) && (op1.getImagine() == op2.getImagine()));
}





