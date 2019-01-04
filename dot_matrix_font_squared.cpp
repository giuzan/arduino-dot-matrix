#include "dot_matrix_font_squared.h"

DotMatrixFontSquared::DotMatrixFontSquared()
{}

DotMatrixText DotMatrixFontSquared::getText(char c)
{
    byte lines[8];

    switch (c) {
        case '0':
            lines[0] = B00000000;
            lines[1] = B00111110;
            lines[2] = B00100010;
            lines[3] = B00100010;
            lines[4] = B00100010;
            lines[5] = B00100010;
            lines[6] = B00100010;
            lines[7] = B00111110;
            break;
        case '1':
            lines[0] = B00000000;
            lines[1] = B00001000;
            lines[2] = B00011000;
            lines[3] = B00001000;
            lines[4] = B00001000;
            lines[5] = B00001000;
            lines[6] = B00001000;
            lines[7] = B00001000;
            break;
        case '2':
            lines[0] = B00000000;
            lines[1] = B00111110;
            lines[2] = B00000010;
            lines[3] = B00000010;
            lines[4] = B00111110;
            lines[5] = B00100000;
            lines[6] = B00100000;
            lines[7] = B00111110;
            break;
        case '3':
            lines[0] = B00000000;
            lines[1] = B00111110;
            lines[2] = B00000010;
            lines[3] = B00000010;
            lines[4] = B00111110;
            lines[5] = B00000010;
            lines[6] = B00000010;
            lines[7] = B00111110;
            break;
        case '4':
            lines[0] = B00000000;
            lines[1] = B00100010;
            lines[2] = B00100010;
            lines[3] = B00100010;
            lines[4] = B00111110;
            lines[5] = B00000010;
            lines[6] = B00000010;
            lines[7] = B00000010;
            break;
        case '5':
            lines[0] = B00000000;
            lines[1] = B00111110;
            lines[2] = B00100000;
            lines[3] = B00100000;
            lines[4] = B00111110;
            lines[5] = B00000010;
            lines[6] = B00000010;
            lines[7] = B00111110;
            break;
        case '6':
            lines[0] = B00000000;
            lines[1] = B00111110;
            lines[2] = B00100000;
            lines[3] = B00100000;
            lines[4] = B00111110;
            lines[5] = B00100010;
            lines[6] = B00100010;
            lines[7] = B00111110;
            break;
        case '7':
            lines[0] = B00000000;
            lines[1] = B00111110;
            lines[2] = B00000010;
            lines[3] = B00000010;
            lines[4] = B00000100;
            lines[5] = B00001000;
            lines[6] = B00001000;
            lines[7] = B00001000;
            break;
        case '8':
            lines[0] = B00000000;
            lines[1] = B00111110;
            lines[2] = B00100010;
            lines[3] = B00100010;
            lines[4] = B00111110;
            lines[5] = B00100010;
            lines[6] = B00100010;
            lines[7] = B00111110;
            break;
        case '9':
            lines[0] = B00000000;
            lines[1] = B00111110;
            lines[2] = B00100010;
            lines[3] = B00100010;
            lines[4] = B00111110;
            lines[5] = B00000010;
            lines[6] = B00000010;
            lines[7] = B00111110;
            break;
        default:
            lines[0] = B00000000;
            lines[1] = B00011100;
            lines[2] = B00100010;
            lines[3] = B00000010;
            lines[4] = B00000100;
            lines[5] = B00001000;
            lines[6] = B00000000;
            lines[7] = B00001000;
            break;
    }

    return this->createTextFromLines(lines);
}
