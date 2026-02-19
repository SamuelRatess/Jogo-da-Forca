#include <iostream>
#include <cstdlib>

int main(){

    char palavra[50], descobrir[50], letra, resp;
    int chances = 6, acertos = 0, tamanho = 0, i = 0;
    bool verify = false;
    
    
    
    do
    {
        system("cls");

        std::cout << "Peca para seu amigo virar de costas e digite a palavra:  ";
        std::cin >> palavra;

        tamanho = 0;
        acertos = 0;
        chances = 6;

        system("cls");

        for (i = 0; palavra[i] != '\0'; i++) {
            descobrir[i] = '-';
            tamanho++;
        }

        descobrir[tamanho] = '\0';
        
        do {
            verify = false;
            std::cout << "Chances Restantes: " << chances;
            std::cout << "\n\nPALAVRA A SER ADIVINHADA:   "; 
            for (int j = 0; j < tamanho; j++) {
                std::cout << descobrir[j];
            }
            std::cout << "\n\nLetra para tentar:  ";
            std::cin >> letra;
            for (int j = 0; j < tamanho; j++) {
                if (letra == palavra[j] && descobrir[j] == '-') {
                    descobrir[j] = letra;
                    acertos++;
                    verify = true;
                }
            }
            if (!verify) {
                chances--;
            }

            system("cls");

        } while (chances > 0 && acertos < tamanho);
        
        if (chances == 0) {
            std::cout << "Fim de jogo! A palavra era " << palavra << std::endl;
        } else {
            std::cout << "Parabens! Voce descobriu a palavra: " << palavra << std::endl;
        }

        std::cout << "Deseja jogar novamente? ";
        std::cin >> resp;
    } while (resp == 'S' || resp == 's');
    

    return 0;
}