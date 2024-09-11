#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; // Elirás
    std::cout << "1-100 ertekek duplazasa" << std::endl; //String rosszul van kiirva
    for (int i = 0; i < N_ELEMENTS; i++) // Ciklus feltétel hiányos
    {
        b[i] = (i + 1) * 2;  // i+1 hogy 1től kezdődjön a duplázás
    }

     for (int i = 0; i < N_ELEMENTS; i++) // Ciklus feltétel javitása
    {
          std::cout << "Ertek: " << b[i] << std::endl; //Hiányzó kiirás  + bezárás
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0; // kezdeti ertekadas
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        atlag += b[i]; // ; hiányaa
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
