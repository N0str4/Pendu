#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    auto chaine= string("bonjouuur"), chaine2= string("Cà va ?");
    auto chaine3 = chaine + chaine2;
    cout << chaine3 << endl;
    return 0;
}
