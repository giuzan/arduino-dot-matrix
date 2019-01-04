#include "dot_matrix_font_bold.h"

DotMatrixFontBold::DotMatrixFontBold()
{}

DotMatrixText DotMatrixFontBold::getText(char c)
{
    byte lines[8];

    switch (c) {
        case '0':
            lines[0] = B00000000;
            lines[1] = B00111100;
            lines[2] = B01100110;
            lines[3] = B01101110;
            lines[4] = B01111110;
            lines[5] = B01110110;
            lines[6] = B01100110;
            lines[7] = B00111100;
            break;
        case '1':
            lines[0] = B00000000;
            lines[1] = B00011000;
            lines[2] = B00111000;
            lines[3] = B01111000;
            lines[4] = B00011000;
            lines[5] = B00011000;
            lines[6] = B00011000;
            lines[7] = B01111110;
            break;
        case '2':
            lines[0] = B00000000;
            lines[1] = B00111100;
            lines[2] = B01100110;
            lines[3] = B00000110;
            lines[4] = B00011100;
            lines[5] = B00110000;
            lines[6] = B01100000;
            lines[7] = B01111110;
            break;
        case '3':
            lines[0] = B00000000;
            lines[1] = B00111100;
            lines[2] = B01100110;
            lines[3] = B00000110;
            lines[4] = B00011100;
            lines[5] = B00000110;
            lines[6] = B01100110;
            lines[7] = B00111100;
            break;
        case '4':
            lines[0] = B00000000;
            lines[1] = B00001100;
            lines[2] = B00011100;
            lines[3] = B00111100;
            lines[4] = B01101100;
            lines[5] = B01111110;
            lines[6] = B00001100;
            lines[7] = B00001100;
            break;
        case '5':
            lines[0] = B00000000;
            lines[1] = B01111110;
            lines[2] = B01100000;
            lines[3] = B01111100;
            lines[4] = B00000110;
            lines[5] = B00000110;
            lines[6] = B01100110;
            lines[7] = B00111100;
            break;
        case '6':
            lines[0] = B00000000;
            lines[1] = B00011100;
            lines[2] = B00110000;
            lines[3] = B01100000;
            lines[4] = B01111100;
            lines[5] = B01100110;
            lines[6] = B01100110;
            lines[7] = B00111100;
            break;
        case '7':
            lines[0] = B00000000;
            lines[1] = B01111110;
            lines[2] = B00000110;
            lines[3] = B00001100;
            lines[4] = B00011000;
            lines[5] = B00110000;
            lines[6] = B00110000;
            lines[7] = B00110000;
            break;
        case '8':
            lines[0] = B00000000;
            lines[1] = B00111100;
            lines[2] = B01100110;
            lines[3] = B01100110;
            lines[4] = B00111100;
            lines[5] = B01100110;
            lines[6] = B01100110;
            lines[7] = B00111100;
            break;
        case '9':
            lines[0] = B00000000;
            lines[1] = B00111100;
            lines[2] = B01100110;
            lines[3] = B01100110;
            lines[4] = B00111110;
            lines[5] = B00000110;
            lines[6] = B00001100;
            lines[7] = B00111000;
            break;
        default:
            break;
    }

    return this->createTextFromLines(lines);
}
