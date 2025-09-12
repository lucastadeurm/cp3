#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    system("cls"); // Limpa a tela (Windows)
    string palavra; // Palavra secreta
    cout << "Jogador 1, digite a palavra secreta: ";
    getline(cin >> ws, palavra); // Permite espaços

    // Limpa a tela (Windows)
    system("cls");

    // Cria a string segredo com o mesmo tamanho da palavra, usando '_' para letras e espaço para espaços
    string segredo = palavra;
    for (char &c : segredo) {
        if (c != ' ') c = '_';
    }

    int tentativas = 6;           // Número de chances
    string entrada;               // Entrada do usuário (usaremos string ao invés de char)

    cout << "=== JOGO DA FORCA ===\n";

    while (tentativas > 0 && segredo != palavra) {
        cout << "\nPalavra: " << segredo << endl;
        cout << "Tentativas restantes: " << tentativas << endl;
        cout << "Digite uma letra: ";
        cin >> entrada;

        if (entrada.length() == 0) continue; // Se nada foi digitado

        string letra = entrada.substr(0, 1); // Pega só a primeira letra digitada
        int encontrou = 0;

        for (int i = 0; i < palavra.length(); i++) {
            if (palavra.substr(i, 1) == letra && segredo.substr(i, 1) == "_") {
                segredo.replace(i, 1, letra);
                encontrou = 1;
            }
        }

        if (encontrou == 0) {
            cout << "Letra errada!\n";
            tentativas = tentativas - 1;
        } else {
            cout << "Letra correta!\n";
        }
    }

    if (segredo == palavra) {
        cout << "\nVocê venceu! A palavra era: " << palavra << endl;
    } else {
        cout << "\nVocê perdeu! A palavra era: " << palavra << endl;
    }

    return 0;
}
