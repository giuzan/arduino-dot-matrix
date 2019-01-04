#ifndef DOT_MATRIX_FONT_BOLD_INCLUDED_H
#define DOT_MATRIX_FONT_BOLD_INCLUDED_H

#include "Arduino.h"
#include "dot_matrix_font.h"
#include "dot_matrix_text.h"

class DotMatrixFontBold : public DotMatrixFont
{
    public:
        DotMatrixFontBold();
        DotMatrixText getText(char);
};

#endif
