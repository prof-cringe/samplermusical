#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;

void tocarNota(int frequencia, int durancao){
    if(frequencia > 0){
        Beep(frequencia,durancao);
    }
}

void pianoVirtual(){
    cout << "Bem vindo ao criador de trilhas sonoras - Piano" << endl;
    cout << "Tecle q - para encerrar." << endl;

    while (true)
    {
        char tecla = _getch();

        switch (tecla)
        {
        case 'a':
            tocarNota(261,300); //do
            break;
        case 's':
            tocarNota(293,300); //re
            break;
        case 'd':
            tocarNota(329,300); //mi
            break;
        case 'f':
            tocarNota(349,300); //fa
            break;
        case 'g':
            tocarNota(392,300); //sol
            break;
        case 'h':
            tocarNota(440,300); //la
            break;
        case 'j':
            tocarNota(493,300); //si
            break;
        case 'k':
            tocarNota(523,300); //do
            break;
        case 'q':
            cout << "Encerrando o piano virtual" << endl;
            return;
            break;
        default:
            cout << "Voce uso uma tecla skrota" << endl;
            break;
        }
    }
    
}

int main(int argc, char const *argv[])
{
    pianoVirtual();
    return 0;
}
