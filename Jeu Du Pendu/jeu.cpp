#include "jeu.h"
#include <iostream>
#include <string_view>


using namespace std;

auto afficherLettresTrouvees(auto lettres){

    for(auto lettre : lettres){

        cout<<lettre << "";

    }
}

char demanderLettre(auto motsPossibles){
    auto lettre='b';

    cout<<"Proposez une lettre :"<<endl;
    cin>>lettre;
    return lettre;
}

bool verifierLettre(auto mot, char lettre, bool LettreTrouve){


    if (lettre==mot[0]){

    LettreTrouve= true;

    }else if(lettre==mot[1]){

        LettreTrouve= true;


    }else if(lettre==mot[2]){

        LettreTrouve= true;

    }else if(lettre==mot[3]){

        LettreTrouve= true;

    }else if(lettre==mot[4]){

        LettreTrouve= true;

    }else if(lettre==mot[5]){

        LettreTrouve= true;

    }else if(lettre==mot[6]){

        LettreTrouve= true;

    }else{
        LettreTrouve=false;
    }
    return LettreTrouve;


}
