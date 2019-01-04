#ifndef DOT_MATRIX_FONT_SQUARED_INCLUDED_H
#define DOT_MATRIX_FONT_SQUARED_INCLUDED_H

#include "Arduino.h"
#include "dot_matrix_font.h"
#include "dot_matrix_text.h"

class DotMatrixFontSquared : public DotMatrixFont
{
    public:
        DotMatrixFontSquared();
        DotMatrixText getText(char);
};

#endif
