#pragma once


class Complex
{
public:
    constexpr Complex(const int real, const int imagine)
        :mReal(real),
          mImagine(imagine){}

    constexpr int getReal(void)const{
        return mReal;
    }
    constexpr int getImagine(void)const{
        return mReal;
    }

    constexpr Complex operator+(const Complex& op)
    {
       constexpr int real = this->mReal + op.getReal();
       constexpr int imagine = this->mImagine + op.getImagine();
       constexpr Complex sum{real, imagine};
       return sum;
    }

    Complex operator-(const Complex& op);

private:
    const int mReal;
    const int mImagine;
};

bool operator==(const Complex& op1, const Complex& op2);

