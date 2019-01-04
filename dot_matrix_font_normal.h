#ifndef DOT_MATRIX_FONT_NORMAL_INCLUDED_H
#define DOT_MATRIX_FONT_NORMAL_INCLUDED_H

#include "Arduino.h"
#include "dot_matrix_font.h"
#include "dot_matrix_text.h"

class DotMatrixFontNormal : public DotMatrixFont
{
    public:
        DotMatrixFontNormal();
        DotMatrixText getText(char);
};

#endif
