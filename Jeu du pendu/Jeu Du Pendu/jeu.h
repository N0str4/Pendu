#define JEU.H


const auto NOMBRE_ETAPES_PENDU{11};
void afficherLettresTrouvees(std::string_view lettres);
bool verifierLettre(std::string_view mot, char lettre, std::string& lettresTrouvees);
char passerLettreEnMajuscule(char lettre);





#endif
