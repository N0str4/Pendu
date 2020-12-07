#include "jeu.h"
#include <iostream>


using namespace std;

void afficherLettresTrouvees(string& lettres){
    for(auto lettre : lettres){

        cout<<lettre << "";

    }
}

void afficherDebut(int arg1){

    cout<<"Bienvenue au jeu du Pendu !"<<endl;
    cout<<arg1<<endl;
}
