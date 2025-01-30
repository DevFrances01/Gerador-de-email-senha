#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

std::string generatePassword(int length)
{
    const std::string chars = "QWERTYUIOPASDFGHJKLÇZXCVBNMqwertyuiopasdfghjklçzxcvbnm!@#$%¨&*()_-<>:?*+,.789456120|";
    std::string password;

    std::srand(std::time(0));

    for (int i = 0; i < length; ++i)
    {
        password += chars[std::rand() % chars.size()];
    }

    return password;
}

void gerarEmailGoogle(char nome[])
{
    char email[100];
    snprintf(email, sizeof(email), "%s%d@gmail.com", nome, rand() % 1000);
    std::cout << "E-mail gerado: " << email << std::endl;
}
void gerarEmailHotmail(char nome[])
{
    char email[100];
    snprintf(email, sizeof(email), "%s%d@hotmail.com", nome, rand() % 1000);
    std::cout << "E-mail gerado: " << email << std::endl;
}

void printHeart()
{
    const std::string cor_vermelha = "\033[1;31m";
    const std::string cor_reset = "\033[0m";
    std::cout << cor_vermelha;
    std::cout << "\n\t\t\tObrigado por utilizar.... \n";
    std::cout << "\t\t............****************.........\n";
    std::cout << "\t\t..........********************.......\n";
    std::cout << "\t\t.........**********************......\n";
    std::cout << "\t\t.........***********************.....\n";
    std::cout << "\t\t..........*********************......\n";
    std::cout << "\t\t...........*******************.......\n";
    std::cout << "\t\t............*****************........\n";
    std::cout << "\t\t.............***************.........\n";
    std::cout << "\t\t..............*************..........\n";
    std::cout << "\t\t...............***********...........\n";
    std::cout << "\t\t................*********............\n";
    std::cout << "\t\t.................*******.............\n";
    std::cout << "\t\t..................*****..............\n";
    std::cout << "\t\t...................***...............\n";
    std::cout << "\t\t................... *................\n";
    std::cout << cor_reset;
}

void printDD()
{
    const std::string cor_vermelha = "\033[1;31m";
    const std::string reset_cor = "\033[0m";
//MUDAR O TEXTO PARA Gera email tambem
    std::cout << cor_vermelha;
    printf("\n            ____________________________________________");
    printf("\n            |                                          |");
    printf("\n            |               OBS:                       |");
    printf("\n            |                                          |");
    printf("\n            |   O APK    GERA UMA SENHA PARA VOCE      |");
    printf("\n            |                                          |");
    printf("\n            |   OBS: SELECIONE A SENHA, COPIE E COLE   |");
    printf("\n            |         o mesmo para o e-mail            |");
    printf("\n            |   Obrigado por utilizar nosso APK!       |");
    printf("\n            |__________________________________________|");
    std::cout << reset_cor;
}
//explica melhor oque faz o progrma  agora que ta com gerador de email também;
void printf8()
{
    printf("\n               ________________________________________");
    printf("\n              /                                        /");
    printf("\n             /      GERADOR DE SENHAS E EMAILS         /");
    printf("\n            /__________________________________________/");
    printf("\n            |                                          |");
    printf("\n            |   BEM-VINDO AO GERADOR SEGURO            |");
    printf("\n            |                                          |");
    printf("\n            |   Este programa foi criado para gerar    |");
    printf("\n            |   senhas seguras e emails de forma       |");
    printf("\n            |   rapida e facil.                        |");
    printf("\n            |                                          |");
    printf("\n            |   Voce pode escolher gerar uma senha     |");
    printf("\n            |   forte, composta por letras, numeros e  |");
    printf("\n            |   simbolos, ou criar um e-mail aleatorio.|");
    printf("\n            |                                          |");
    printf("\n            |  Basta inserir as opcoes desejadas, e o  |");
    printf("\n            |   programa cuidara do resto, garantindo  |");
    printf("\n            |   a seguranca e a praticidade para voce. |");
    printf("\n            |__________________________________________|");
    printf("\n            |                                          |");
    printf("\n            |   [ GERAR SENHA ]  [ GERAR EMAIL ]       |");
    printf("\n            |__________________________________________|");
    printf("\n             \\________________________________________/"); 
    printf("\n              \\______________________________________/");
}
void printf30()
{
    printf("\n\n\n\t Ao escolher a opcao gerar email  quando pedir para colocar seu nomer nao coloque espacao !"); 
    
    
}

int main()
{
    int length, escolha, gerarEmail;
    char nome[50], S[50];

    printf8();
    printDD();
 printf30();


    std::time_t agora = std::time(nullptr);
    std::tm *tempo_local = std::localtime(&agora);

    std::cout << "\t\n\nPrograma Aberto as: "
              << tempo_local->tm_hour << ":"
              << tempo_local->tm_min << ":"
              << tempo_local->tm_sec << std::endl;

    std::cout << "\nDigite qualquer tecla para saber o limite de caracteres: ";
    std::cin >> S;

    printf("\nO Gmail permite: 4.096 caracteres\n");
    printf("\nO Hotmail permite: 256 caracteres\n");

    const std::string cor_verde = "\033[1;32m";
    std::cout << cor_verde;
    std::cout << "\nDIGITE O LIMITE DA SENHA (OBS: SOMENTE NUMEROS): ";
    std::cin >> length;

    const std::string cor_amarelo = "\033[1;33m";
    std::cout << cor_amarelo;
    std::string password = generatePassword(length);
    std::cout << "\nSENHA GERADA: " << password << std::endl;

    std::cout << "\nDeseja gerar um e-mail? (1 - Sim, 2 - Nao): ";
    std::cin >> gerarEmail;

    if (gerarEmail == 1)
    {
        std::cout << "\nDigite seu nome para gerar um e-mail: ";
        std::cin >> nome;

        std::cout << "\nEscolha uma opcao:\n";
        std::cout << "1 - Gerar e-mail do Google\n";
        std::cout << "2 - Gerar e-mail do Hotmail\n";
    
        std::cout << "Digite sua escolha: ";
        std::cin >> escolha;

        if (escolha == 1)
        {
            gerarEmailGoogle(nome);
        }
        else if (escolha == 2)
        {
            gerarEmailHotmail(nome);
        }
        else
        {
            std::cout << "Opcao invalida.\n";
        }
    }

    printHeart();

    std::cout << "\nPressione Enter para sair...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}
