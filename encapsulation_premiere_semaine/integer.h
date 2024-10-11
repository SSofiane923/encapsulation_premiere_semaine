#pragma once
#ifndef INTEGER_H
#define INTEGER_H
#include <iostream> 

class Integer {
private:
    int value; 

public:
    
    Integer();          
    Integer(int v);    

    
    Integer operator+(const Integer& other) const; 
    Integer& operator+=(const Integer& other); 

    Integer operator-(const Integer& other) const; 
    Integer& operator-=(const Integer& other); 

    Integer operator*(const Integer& other) const; 
    Integer& operator*=(const Integer& other); 

    Integer operator/(const Integer& other) const; 
    Integer& operator/=(const Integer& other); 

    Integer operator%(const Integer& other) const;
    Integer& operator%=(const Integer& other);

  
    friend std::ostream& operator<<(std::ostream& os, const Integer& obj); 

   
    Integer pow(int exponent) const;
};

#endif
