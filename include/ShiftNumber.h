#ifndef SHIFTNUMBER_H
#define SHIFTNUMBER_H

#include <iostream>
#include <string>

// Foncteur qui effectue un chiffrement par decalage
class ShiftNumber{

public:
    // Constructeur prenant le decalage voulu en argument
    ShiftNumber(int const& shift = 0);
    void operator()(char &caractere);

private:
    int m_shift; // Le decalage a appliquer au texte
};


#endif // SHIFTNUMBER_H
