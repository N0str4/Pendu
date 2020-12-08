#ifndef JEU_H
#include <string_view>
#define JEU_H



auto afficherLettresTrouvees(std::string_view lettres);
bool verifierLettre(std::string_view mot, char lettre, std::string& lettresTrouvees);
char passerLettreEnMajuscule(char lettre);
char demanderLettre(auto motsPossibles);
#endif
