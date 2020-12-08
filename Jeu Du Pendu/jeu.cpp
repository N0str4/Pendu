#include "jeu.h"
#include <iostream>
#include <string_view>


using namespace std;

auto afficherLettresTrouvees(auto lettres){

    for(auto lettre : lettres){

        cout<<lettre << "";

    }
}



auto remplaceMot(auto chaineDebut, char lettre, auto mot){

    if(lettre==mot[0]){

        chaineDebut[0]= lettre;

    }else if(lettre==mot[1]){
        chaineDebut[1]= lettre;


    }else if(lettre==mot[2]){

        chaineDebut[2]= lettre;

    }else if(lettre==mot[3]){

        chaineDebut[3]= lettre;

    }else if(lettre==mot[4]){

        chaineDebut[4]= lettre;

    }else if(lettre==mot[5]){

        chaineDebut[5]= lettre;

    }else if(lettre==mot[6]){

        chaineDebut[6]= lettre;

    }

    return chaineDebut;


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
void afficherPendu(auto nbErreur){
    cout << endl;
switch (nbErreur){
case 11 :
    cout << R"(
                                                    ______
                                                    |/   |
                                                    |    o
                                                    |   /|\
                                                    |   / \
                                                    |
                                                  __|__

               )" << endl;
    break;
case 10 :
    cout << R"(
                                                    ______
                                                    |/   |
                                                    |    o
                                                    |   /|\
                                                    |   /
                                                    |
                                                  __|__

               )" << endl;
    break;
case 9 :
    cout << R"(
                                                    ______
                                                    |/   |
                                                    |    o
                                                    |   /|\
                                                    |
                                                    |
                                                  __|__

               )" << endl;
    break;
case 8 :
    cout << R"(
                                                    ______
                                                    |/   |
                                                    |    o
                                                    |   /|
                                                    |
                                                    |
                                                  __|__

               )" << endl;
    break;
case 7 :
    cout << R"(
                                                    ______
                                                    |/   |
                                                    |    o
                                                    |    |
                                                    |
                                                    |
                                                  __|__

               )" << endl;
    break;
case 6 :
    cout << R"(
                                                    ______
                                                    |/   |
                                                    |    o
                                                    |
                                                    |
                                                    |
                                                  __|__

               )" << endl;
    break;
case 5 :
    cout << R"(
                                                    ______
                                                    |/   |
                                                    |
                                                    |
                                                    |
                                                    |
                                                  __|__

               )" << endl;
    break;
case 4 :
    cout << R"(
                                                    ______
                                                    |/
                                                    |
                                                    |
                                                    |
                                                    |
                                                  __|__

               )" << endl;
    break;
case 3 :
    cout << R"(
                                                    ______
                                                    |
                                                    |
                                                    |
                                                    |
                                                    |
                                                  __|__

               )" << endl;
    break;
case 2 :
    cout << R"(

                                                    |
                                                    |
                                                    |
                                                    |
                                                    |
                                                  __|__

               )" << endl;
    break;
case 1 :
    cout << R"(






                                                  __ __

               )" << endl;
    break;
default :
     cout << R"(








               )" << endl;
    break;
}}

void majuscule(auto lettreentree){
    char final;
if (lettreentree >= 97){
int trans = static_cast<int>(lettreentree);
trans = trans - 32;
final = static_cast<char>(trans);
}
else {
    final = lettreentree;
}
cout << final;
}
