#include <stdio.h>
#include "Negation.h"

Negation::Negation(const Expression* expr) : UnaryOperation(expr){}

bool Negation::eval(const BooleanInterpretation& interp) const{
    return !expr->eval(interp);
}

Expression* Negation::clone() const{
    return new Negation(expr->clone());
}


