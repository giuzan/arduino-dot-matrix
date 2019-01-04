#ifndef DOT_MATRIX_FONT_SHADOW_INCLUDED_H
#define DOT_MATRIX_FONT_SHADOW_INCLUDED_H

#include "Arduino.h"
#include "dot_matrix_font.h"
#include "dot_matrix_text.h"

class DotMatrixFontShadow : public DotMatrixFont
{
    public:
        DotMatrixFontShadow();
        DotMatrixText getText(char);
};

#endif
