#include <iostream>
#include "motsPossibles.h"
#include <random>
#include "jeu.h"
#include <array>
#include "jeu.cpp"
#include <string_view>

using namespace std;


int main(){
    auto generateurAleatoire = std::random_device{};
    auto generateur = std::mt19937{generateurAleatoire()};
    auto distribution = std::uniform_int_distribution{0, TAILLE_MOTS_POSSIBLES-1};
    auto test = motsPossibles(distribution(generateur));

    //Début pour le nombre
    auto chaineDebut= string(test.size,'-');

    afficherDebut(chaineDebut);


    return 0;
}
