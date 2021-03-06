#include <iostream>
#include "motsPossibles.h"
#include <random>
#include "jeu.h"
#include <array>
#include "jeu.cpp"
#include <string_view>
#include <string.h>

using namespace std;


int main(){
    auto generateurAleatoire = std::random_device{};
    auto generateur = std::mt19937{generateurAleatoire()};
    auto distribution = std::uniform_int_distribution{0, TAILLE_MOTS_POSSIBLES-1};
    auto mot = motsPossibles[distribution(generateur)];
    auto chaineDebut= string(strlen(mot),'-');

    // ------------------- //
    //      START PENDU
    // ------------------- //

    cout<<"Bienvenue au jeu du Pendu !"<<endl;
    cout<<chaineDebut<<endl;

    // ------------------- //
    cout<<mot<<endl;
    cout<<mot[1]<<endl;
    auto returnlettre = demanderLettre(mot);
    bool lettreFindBool =false;
    cout<<returnlettre<<endl;



    lettreFindBool = verifierLettre(mot,returnlettre,lettreFindBool);
    auto totalChain = remplaceMot(chaineDebut, returnlettre,mot);
    cout<<totalChain<<endl;
    returnlettre = demanderLettre(mot);
    totalChain = remplaceMot(totalChain, returnlettre,mot);
    cout<<totalChain<<endl;
}
