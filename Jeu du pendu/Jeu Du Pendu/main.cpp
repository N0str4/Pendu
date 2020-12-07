#include <iostream>
#include "motsPossibles.h"
#include <random>
#include "jeu.h"

using namespace std;


int main()
{
    auto generateurAleatoire = std::random_device{};
    auto motRecherche = motsPossibles[generateurAleatoire];

    return 0;
}
