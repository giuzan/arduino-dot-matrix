#include "single_dot_matrix.h"

SingleDotMatrix::SingleDotMatrix()
{}

SingleDotMatrix::SingleDotMatrix(ShiftRegister* shiftRegister)
{
    this->shiftRegister = shiftRegister;
}

void SingleDotMatrix::write(bool matrix[8][8])
{
    // We assume that there are two shift registers, the
    // first drives the columns and the second the rows.
    // The outputs of the shift registers are 8, one for
    // each line of the dot matrix.
    bool shiftRegisterOutputs[8][16];

    for (int i=0; i<8; i++) {
        for (int j=0; j<16; j++) {
            if (j < 8)
                shiftRegisterOutputs[i][j] = !matrix[i][j];
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
