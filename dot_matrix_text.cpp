#include "dot_matrix_text.h"

DotMatrixText::DotMatrixText()
{
    for (int i=0; i<8; i++)
        for (int j=0; j<8; j++)
            this->dots[i][j] = 0;
}

DotMatrixText::DotMatrixText(bool dots[8][8])
{
    for (int i=0; i<8; i++)
        for (int j=0; j<8; j++)
            this->dots[i][j] = dots[i][j];
}

bool DotMatrixText::getDot(int i, int j) const
{
    return this->dots[i][j];
}
