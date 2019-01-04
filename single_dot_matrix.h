#ifndef SINLGE_DOT_MATRIX_INCLUDED_H
#define SINLGE_DOT_MATRIX_INCLUDED_H

#include "Arduino.h"
#include <shift_register.h>
#include "dot_matrix_font.h"
#include "dot_matrix_text.h"

class SingleDotMatrix
{
    private:
        ShiftRegister* shiftRegister;

    public:
        SingleDotMatrix();
        SingleDotMatrix(ShiftRegister*);
        void write(bool[8][8]);
        void write(DotMatrixText);
        void write(int, DotMatrixFont&);
};

#endif
