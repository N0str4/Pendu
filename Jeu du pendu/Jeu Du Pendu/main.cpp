#include <iostream>
#include "motsPossibles.h"
#include <random>
//#include "jeu.h"
//#include <array>
#include "jeu.cpp"

using namespace std;


int main(){
    auto generateurAleatoire = std::random_device{};
    auto generateur = mt19937{generateurAleatoire()};
    auto distribution = std::uniform_int_distribution{0,TAILLE_MOTS_POSSIBLES-1};
    auto motRecherche = motsPossible(distribution(generateur));

    //Début pour le nombre
    auto chaineDebut= string(motRecherche.size,'-');

    afficherDebut(chaineDebut);
    cout<<generateurAleatoire<<endl


    return 0;
}
