#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; // Elirás
    std::cout << '1-100 ertekek duplazasa'; //String rosszul van kiirva
    for (int i = 0;) // Ciklus feltétel hiányos
    {
        b[i] = i * 2; // i+1 hogy 1től kezdődjön a duplázás
    }
    for (int i = 0; i; i++) // Ciklus feltétel javitása
    {
        std::cout << "Ertek:" //Hiányzó kiirás  + bezárás
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // kezdeti ertekadas
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i] // ; hiánya
    }
    atlag /= N_ELEMENTS; 
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
