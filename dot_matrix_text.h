#ifndef DOT_MATRIX_TEXT_INCLUDED_H
#define DOT_MATRIX_TEXT_INCLUDED_H

#include "Arduino.h"

class DotMatrixText
{
    public:
        DotMatrixText();
        DotMatrixText(bool[8][8]);
        bool getDot(int, int) const;

    private:
        bool dots[8][8];
};

#endif
