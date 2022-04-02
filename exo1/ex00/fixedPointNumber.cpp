#include "fixedPointNumber.h"
#include "iostream"
using namespace std;

Fixed::Fixed():
    m_fixedPointValue(0){
        cout << "Default constructor called" << endl;
}

Fixed::~Fixed(){
    cout << "Destructor called" << endl;
}

Fixed::Fixed(const Fixed& original):
    m_fixedPointValue(original.m_fixedPointValue){
    cout << "Copy constructor called" << endl;
}

Fixed& Fixed::operator=(const Fixed& original){
    cout << "Assignment operator called" << endl;
    m_fixedPointValue = original.m_fixedPointValue;
    return *this;
}

