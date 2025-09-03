#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
    cout << "Bem vindo ao jogo de adivinhar!\n";
    cout << "Tente advinhar o numero que estou pensando entre 1 e 100.\n";
    srand(time(0));
    int numerosecreto = rand() % 100 + 1;
    int palpite;
    int tentativa = 0;
    cout << "Digite seu palpite 1: ";
    cin >> palpite
    tentativa=tentativa+1
    if (palpite == numerosecreto)
    {
        cout << "Parabéns você acertou\n";
        return 0;
    } 
    else (palpite != numerosecreto){
        cout << "Errou\n";
    }
      cout << "Digite seu palpite 2: ";
    cin >> palpite;
    tentativas=tentativas+1;
    if(palpite == numeroSecreto){
            cout << "Parabens! Voce acertou o numero\n";
            return 0;
    }
    cout << "Digite seu palpite 3: ";
    cin >> palpite;
    tentativas=tentativas+1;
    if(palpite == numeroSecreto){
            cout << "Parabens! Voce acertou o numero\n";
            return 0;
    }
    cout << "Suas tentativas acabaram, o numero era: \n" << numerosecreto << "\n";
    return 0;
    
}