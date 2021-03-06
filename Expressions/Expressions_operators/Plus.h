//
// created by omri & gal on 12/10/18.
//

#ifndef PROG1PROJECT_PLUS_H
#define PROG1PROJECT_PLUS_H


#include "../BinaryExpression.h"

class Plus : public BinaryExpression {

public:

    // constructor.
    Plus(Expression* left, Expression* right):
        BinaryExpression("+", left, right) {}

    // the implementation of operation - plus.
    double operation(double var1, double var2) {return var1 + var2;};
};


#endif //PROG1PROJECT_PLUS_H
