#include <windows.h> 
#include "fonction.h"
#include <locale.h> 

int main(){
    SetConsoleOutputCP(CP_UTF8); 
    SetConsoleCP(CP_UTF8); 
    setlocale(LC_ALL, ".UTF-8");
    Conso a = initialiser();
    return 0;
}