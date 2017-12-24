#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include "ShiftNumber.h"

using namespace std;

int main()
{
    // Le message a crypter
    string text("BIENVENUE SUR LE MOOC C++ D'OCR !!");

    // Demande du decalage a l'utilisateur
    cout << "Quel decalage voulez-vous utiliser ? ";
    int shift;
    cin >> shift;

    // Chaine de caracteres pour le message crypter
    string cryptedText = text;
    for_each(cryptedText.begin(), cryptedText.end(), ShiftNumber(shift));

    // Affichage
    cout << endl << "Message : " << text << endl;
    cout << "Message crypte : ";
    copy(cryptedText.begin(), cryptedText.end(), ostream_iterator<char>(cout, ","));

    return 0;
}
