#ifndef DOT_MATRIX_INCLUDED_H
#define DOT_MATRIX_INCLUDED_H

#include "Arduino.h"
#include <shift_register.h>

class SingleDotMatrix
{
    private:
        ShiftRegister* shiftRegister;

    public:
        SingleDotMatrix();
        SingleDotMatrix(ShiftRegister* shiftRegister);
        void write(bool matrix[8][8]);
};

#endif
