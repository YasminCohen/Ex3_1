#include "Fraction.hpp"
#include <iostream>
#include <stdexcept>

using namespace std;

using namespace ariel;

    Fraction::Fraction(int up, int down) : upOfFraction(up), downOfFraction(down) {}

    //////////////////////////////////////////////////////////////////////////////////
    Fraction& Fraction::operator++() {// ++a
        return *this;
    }

    Fraction Fraction::operator++(int) { //a++
        return Fraction(1, 1); 
    }

    Fraction& Fraction::operator--() {
        return *this;
    }

    Fraction Fraction::operator--(int) {
        return Fraction(1, 1); 
    }

    //////////////////////////////////////////////////////////////////////////////////
    Fraction Fraction::operator+(const Fraction& other) const {
        return Fraction(1, 1); 
    }
    Fraction Fraction::operator+(const float& num) const{
        return Fraction(1, 1); 
    }

    //////////////////////////////////////////////////////////////////////////////////
    Fraction Fraction::operator-(const Fraction& other) const {
        return Fraction(1, 1); 
    }
    Fraction Fraction::operator-(const float& num) const{
        return Fraction(3, 2); 
    }

    //////////////////////////////////////////////////////////////////////////////////

    Fraction Fraction::operator*(const Fraction& other) const {
        return Fraction(1, 1); 
    }
    Fraction Fraction:: operator*(const float& num) const{
        return Fraction(3, 2); 
    }

    //////////////////////////////////////////////////////////////////////////////////
    Fraction Fraction::operator/(const Fraction& other) const {
        return Fraction(1, 1); 
    }
    Fraction Fraction:: operator/(const float& num) const{
        return Fraction(3, 2); 
    }

    //////////////////////////////////////////////////////////////////////////////////
    bool Fraction::operator==(const Fraction& other) const {
        return true;
    }
    bool Fraction:: operator==(const float& num) const{
        return true; 
    }

    //////////////////////////////////////////////////////////////////////////////////

    bool Fraction::operator<(const Fraction& other) const {
        return true;
    }
    bool Fraction:: operator<(const float& num) const{
        return true; 
    }

    //////////////////////////////////////////////////////////////////////////////////
    bool Fraction::operator>(const Fraction& other) const{
        return true;
    }

    bool Fraction::operator>(const float& other) const{
        return true;
    }

    //////////////////////////////////////////////////////////////////////////////////
    bool Fraction::operator>=(const Fraction& other) const {
        return true;
    }
    bool Fraction::operator>=(const float& other)const {
        return true;
    }

    //////////////////////////////////////////////////////////////////////////////////
    bool Fraction::operator<=(const Fraction& other) const {
        return true;
    }
    bool Fraction::operator<=(const float& other) const {
        return true;
    }

    //////////////////////////////////////////////////////////////////////////////////
    std::string Fraction::toString() const {
        return "";
    }

