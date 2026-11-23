#include <windows.h> 
#include "fonction.h"
#include <locale.h> 
#include <stdio.h>
#include "fonction.h"

int main(){
    SetConsoleOutputCP(CP_UTF8); 
    SetConsoleCP(CP_UTF8); 
    setlocale(LC_ALL, ".UTF-8");
    char consommes[7][50]={
        "Eau 💧",
        "Café ☕",
        "Bonbons 🍬",
        "Gâteau 🍰 ",
        "Légumes 🥦",
        "Fruits 🍎",
        "Protéines 🍗"};
    Conso a = initialiser();
    AfficherMenu();
    return 0;
}