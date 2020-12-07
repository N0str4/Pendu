#include <iostream>
#include <string>
#include <windows.h>
#include <string_view>
using namespace std;



void afficher(string& chaine){

    cout << chaine<<endl;

}


int main()
{
    SetConsoleOutputCP(65001);
    auto chaine2("Bijour"s);
    afficher("Bijour");
    return 0;
}
