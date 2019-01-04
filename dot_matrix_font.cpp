#include "dot_matrix_font.h"

DotMatrixFont::DotMatrixFont()
{}

DotMatrixText DotMatrixFont::createTextFromLines(byte lines[8])
{
    bool dots[8][8];

    for (int i=0; i<8; i++) {
        for (int j=0; j<8; j++) {
            byte line = lines[i];

            bool value = (bool) (line >> (8-j-1) & 0x01);

            dots[i][j] = value;
        }
    }

    return DotMatrixText(dots);
}
