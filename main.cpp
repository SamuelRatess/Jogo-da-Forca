#include <iostream>
#include <cstdlib>

int main(){

    char palavra[50], descobrir[50], letra;
    int chances = 6, acertos = 0, tamanho = 0, i = 0;
    bool verify;
    
    std::cout << "Peça para seu amigo virar de costas e digite a palavra:  ";
    std::cin >> palavra;

    system("cls");

    for (i = 0; palavra[i] != '\0'; i++) {
        descobrir[i] = '-';
        tamanho++;
    }

    do {
        std::cout << "Chances Restantes: " << chances;
        std::cout << "\n\nPALAVRA A SER ADIVINHADA:   "; 
        for (int j = 0; j < tamanho; j++) {
            std::cout << descobrir[j];
        }
        std::cout << "\n\nLetra para tentar:  ";
        std::cin >> letra;
        for (int j = 0; j < tamanho; j++) {
            if (letra == palavra[j]) {
                descobrir[j] = palavra[j];
                verify = true;
            } else {
                verify = false;
            }
        }
        if (verify) {
            acertos++;
        } else {
            chances--;
        }
    } while (!(acertos == tamanho || chances == 0));
    
    

    return 0;
}