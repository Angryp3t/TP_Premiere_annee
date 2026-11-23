#include <windows.h> 
#include <locale.h> 
#include <stdio.h>
#include "fonction.h"

int main(){
    SetConsoleOutputCP(CP_UTF8); 
    SetConsoleCP(CP_UTF8); 
    setlocale(LC_ALL, ".UTF-8");
    AfficherMenu();
    return 0;
}