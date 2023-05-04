#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
#include <stdexcept>

using namespace std;

namespace ariel{

    class Fraction{

        private:

            int upOfFraction;
            int downOfFraction;

        public:

            Fraction(int upOfFraction , int downOfFraction);
            //////////////////////////////////////////////////////////////////////

            Fraction& operator++();
            Fraction operator++(int);
            Fraction& operator--(); 
            Fraction operator--(int);
            //////////////////////////////////////////////////////////////////////

            Fraction operator-(const Fraction& FractionOther) const;
            Fraction operator-(const float& number) const;
            friend Fraction operator-(const float& number, const Fraction& FractionOther){
                return Fraction(3, 2); 
            }
            //////////////////////////////////////////////////////////////////////

            Fraction operator+(const Fraction& FractionOther) const;
            Fraction operator+(const float& number) const;
            friend Fraction operator+(const float& number, const Fraction& FractionOther){
                return Fraction(3, 2); 
            }
            //////////////////////////////////////////////////////////////////////

            Fraction operator*(const Fraction& FractionOther) const;
            Fraction operator*(const float& number)const;
            friend Fraction operator*(const float& number, const Fraction& FractionOther){
                return Fraction(3, 2); 
            }
            //////////////////////////////////////////////////////////////////////

            Fraction operator/(const Fraction& FractionOther) const;
            Fraction operator/(const float& number)const;
            friend Fraction operator/(const float& number, const Fraction& FractionOther){
                return Fraction(3, 2); 
            }
            //////////////////////////////////////////////////////////////////////

            bool operator==(const Fraction& FractionOther) const;
            bool operator==(const float& number)const;
            friend bool operator==(const float& number, const Fraction& FractionOther){
                return true; 
            }
            //////////////////////////////////////////////////////////////////////

            bool operator<(const Fraction& FractionOther) const;
            bool operator<(const float& number)const;
            friend bool operator<(const float& number, const Fraction& FractionOther){
                return true; 
            }
            ///////////////////////////////////////////////////////////////////////

            bool operator>(const Fraction& FractionOther) const;
            bool operator>(const float& number)const;
            friend bool operator>(const float& number, const Fraction& FractionOther){
                return true; 
            }
            ///////////////////////////////////////////////////////////////////////

            bool operator>=(const Fraction& FractionOther) const;
            bool operator>=(const float& number)const;
            friend bool operator>=(const float& number, const Fraction& FractionOther){
                return true; 
            }
            ///////////////////////////////////////////////////////////////////////


            bool operator<=(const Fraction& FractionOther) const;
            bool operator<=(const float& number)const;
            friend bool operator<=(const float& number, const Fraction& FractionOther){
                return true; 
            }
            ///////////////////////////////////////////////////////////////////////

            friend ostream& operator<<(std::ostream& ostream, const Fraction& fraction){
                return ostream;
            }

            friend std::istream& operator>>(std::istream& HeSheIt, Fraction& fraction){
                return HeSheIt;
            }

            std::string toString() const;
        
    };
    
}
#endif