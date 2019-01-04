#include "single_dot_matrix.h"
#include "dot_matrix_text.h"

SingleDotMatrix::SingleDotMatrix()
{}

SingleDotMatrix::SingleDotMatrix(ShiftRegister* shiftRegister)
{
    this->shiftRegister = shiftRegister;
}

void SingleDotMatrix::write(bool dots[8][8])
{
    bool shiftRegisterOutputs[8][16];

    for (int i=0; i<8; i++) {
        for (int j=0; j<16; j++) {
            if (j < 8)
                shiftRegisterOutputs[i][j] = !dots[i][j];
            else if (j == i + 8)
                shiftRegisterOutputs[i][j] = true;
            else
                shiftRegisterOutputs[i][j] = false;
        }
    }

    for (int i=0; i<8; i++) {
        this->shiftRegister->setOutputPins(shiftRegisterOutputs[i]);
    }
}

void SingleDotMatrix::write(DotMatrixText text)
{
    bool dots[8][8];
    for (int i=0; i<8; i++)
        for (int j=0; j<8; j++)
            dots[i][j] = text.getDot(i, j);

    this->write(dots);
}

void SingleDotMatrix::write(int number, DotMatrixFont& font)
{
    this->write(font.getText(number));
}
