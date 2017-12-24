#include "ShiftNumber.h"
#include <cctype>

using namespace std;

ShiftNumber::ShiftNumber(int const& shift) : m_shift(shift % 26)
{
}

void ShiftNumber::operator()(char &caractere)
{
    char A('A'), Z('Z');
    if (isalpha(caractere) && isupper(caractere))
    {
        caractere += m_shift;
        if (caractere > Z)
        {
            caractere = A + (caractere - Z - 1);
        }
    }
}

