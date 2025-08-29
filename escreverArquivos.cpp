#include <iostream>
#include <fstream>
#include <string>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL,"");
    ofstream meuArquivo("novo_arquivo.txt");
        if (meuArquivo.is_open()){
            meuArquivo << "Testando a função ofstream" << endl;
            meuArquivo << "Frase 2" << endl;
            meuArquivo << "Frase 3" << endl;
            meuArquivo.close();
            cout << "Frase foram adicionadas!\n";
        }
        else 
            cout << "Não foi possível abrir o arquivo\n";
        return 0;


}
#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
   cout << "Ola mundo\n";
   system("pause");
   system("cls");
   system("color 0A");
   cout << "Ola mundo\n";
   system("dir");
   return 0;
}