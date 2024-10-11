#include "Integer.h"

Integer::Integer() {
    value = 0;
}

Integer::Integer(int v) {
    value = v;
}

Integer Integer::operator+(const Integer& other) const {
    Integer result;
    result.value = value + other.value;
    return result;
}
Integer& Integer::operator+=(const Integer& other) {
    value += other.value;
    return *this;
}


Integer Integer::operator-(const Integer& other) const {
    Integer result;
    result.value = value - other.value;
    return result;
}
Integer& Integer::operator-=(const Integer& other) {
    value -= other.value;
    return *this;
}


Integer Integer::operator*(const Integer& other) const {
    Integer result;
    result.value = value * other.value;
    return result;
}
Integer& Integer::operator*=(const Integer& other) {
    value *= other.value;
    return *this;
}


Integer Integer::operator/(const Integer& other) const {
    if (other.value == 0) {
        throw std::runtime_error("Division par zéro");
    }
    Integer result;
    result.value = value / other.value;
    return result;
}
Integer& Integer::operator/=(const Integer& other) {
    if (other.value == 0) {
        throw std::runtime_error("Division par zéro");
    }
    value /= other.value;
    return *this;
}


Integer Integer::operator%(const Integer& other) const {
    Integer result;
    result.value = value % other.value;
    return result;
}
Integer& Integer::operator%=(const Integer& other) {
    value %= other.value;
    return *this;
}


std::ostream& operator<<(std::ostream& os, const Integer& obj) {
    os << obj.value;
    return os;
}

Integer Integer::pow(int exponent) const {
    Integer result(1);
    for (int i = 0; i < exponent; i++) {
        result.value *= value;
    }
    return result;
}
