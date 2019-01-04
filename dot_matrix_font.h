#ifndef DOT_MATRIX_FONT_INCLUDED_H
#define DOT_MATRIX_FONT_INCLUDED_H

#include "Arduino.h"
#include "dot_matrix_text.h"

class DotMatrixFont
{
    public:
        DotMatrixFont();
        virtual DotMatrixText getText(char) = 0;

    protected:
        DotMatrixText createTextFromLines(byte[8]);
};

#endif
