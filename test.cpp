#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

    int menu, quantidade, pagamento, num_cartao, validade, csc, i, mes, ano, telemovel, op_paypal, crypto_coin;
    float saldo_cartao=100, saldo_paypal=73, total, btc_eur, btc, eth_eur, eth, doge_eur, doge, ltc_eur, ltc;
    string email, pass;

void Menu()
{
    do{
    cout << "|*------------------------------MENU------------------------------*|\n\n";
    cout << "(1)  Menu Big Mac                          €5.50\n";
    cout << "(2)  Menu HappyMeal                        €4.75\n";
    cout << "(3)  Menu CrispyBacon                      €5.00\n";
    cout << "(4)  Menu Cheese Burger                    €4.00\n";
    cout << "(5)  Menu McChicken                        €4.50\n";
    cout << "(6)  Menu Chicken nuggets                  €3.50\n\n";

    cout << "Por Favor Selecione o Número do Menu: ";
    cin >> menu;
    if(menu < 1 || menu > 6){
        cout << "Erro! Selecione um Menu Válido!\n";
        Sleep(850);
        system("cls");
    }
    }while(menu < 1 || menu > 6);

    cout << "Indique o Número De Menus desejados: ";
    cin >> quantidade;
}
void Carregar()
{
    for(int i=0; i<3; i++){
        cout << "Carregando o seu pedido";
        Sleep(500);
        cout << ".";
        Sleep(500);
        cout << ".";
        Sleep(500);
        cout << ".";
        Sleep(500);
        system("cls");
    }
}
void Pedido()
{
    switch (menu){
    case 1:
        cout << "Menu: Big Mac\n";
        cout << "Número de Menus: " <<  quantidade << "\n";
        cout << "Preço de cada menu: €5.50\n";
        total=5.5*quantidade;
        cout << "Preço Total: " << total << "\n\n";
        
        cout << "~------------------------OBRIGADO POR VIR-------------------------~";
        break;
    case 2:
        cout << "Menu: HappyMeal\n";
        cout << "Número de Menus: " <<  quantidade << "\n";
        cout << "Preço de cada menu: €4.75\n";
        total=4.75*quantidade;
        cout << "Preço Total: " << total << "\n\n";
        
        cout << "~------------------------OBRIGADO POR VIR-------------------------~";
        break;
    case 3:
        cout << "Menu: CrispyBacon\n";
        cout << "Número de Menus: " <<  quantidade << "\n";
        cout << "Preço de cada menu: €5.00\n";
        total=5*quantidade;
        cout << "Preço Total: " << total << "\n\n";
        
        cout << "~------------------------OBRIGADO POR VIR-------------------------~";
        break;
    case 4:
        cout << "Menu: Cheese Burger\n";
        cout << "Número de Menus: " <<  quantidade << "\n";
        cout << "Preço de cada menu: €4.00\n";
        total=4*quantidade;
        cout << "Preço Total: " << total << "\n\n";
        
        cout << "~------------------------OBRIGADO POR VIR-------------------------~";
        break;
    case 5:
        cout << "Menu: McChicken\n";
        cout << "Número de Menus: " <<  quantidade << "\n";
        cout << "Preço de cada menu: €4.50\n";
        total=4.5*quantidade;
        cout << "Preço Total: " << total << "\n\n";
        
        cout << "~------------------------OBRIGADO POR VIR-------------------------~";
        break;
    case 6:
        cout << "Menu: Chicken Nuggets\n";
        cout << "Número de Menus: " <<  quantidade << "\n";
        cout << "Preço de cada menu: €3.50\n";
        total=3.5*quantidade;
        cout << "Preço Total: " << total << "\n\n";
        
        cout << "~------------------------OBRIGADO POR VIR-------------------------~";
        break;
    }
}
void Pagamento()
{
    cout << "|*---------------------------PAGAMENTO---------------------------*|\n\n";
    
    cout << "Métodos De Pagamento:\n\n";
    cout << "(1)  Cartão de crédito\n";
    cout << "(2)  MbWay\n";
    cout << "(3)  PayPal\n";
    cout << "(4)  Crypto Balance\n";
    cin >> pagamento;
    system("cls");

    switch (pagamento){
        case 1:
        do{
            cout << "Digite o seu Número do cartão de crédito (Sem espaços): ";
            cin >> num_cartao;
            if(num_cartao > 6599999999999999 || num_cartao < 4000000000000000){
                cout << "Erro! Número de cartão inválido!\n";
                Sleep(850);
                system("cls");
            }
        }while(num_cartao > 6599999999999999 || num_cartao < 4000000000000000);
            cout << "Digite a Data de validade do seu cartão: ";
        do{
            cout << "Mês: ";
            cin >> mes;
            if(mes < 1 || mes > 12){
                cout << "Erro! Digite um mês válido!";
            }
        }while(mes < 1 || mes > 12);
            cout << "Ano: ";
            cin >> ano;
        do{
            cout << "Digite o CSC: ";
            cin >> csc;
            if(mes < 0 || mes > 999){
                cout << "Erro! Digite um csc válido!";
            }
        }while(mes < 0 || mes > 999);
            cout << "Confirmando os dados";
        for(int i=0; i<3; i++){
                Sleep(500);
                cout << ".";
                Sleep(500);
                cout << ".";
                Sleep(500);
                cout << ".";
                Sleep(500);
                system("cls");
                }
            cout << "Concluindo";
        for(int i=0; i<3; i++){
                Sleep(500);
                cout << ".";
                Sleep(500);
                cout << ".";
                Sleep(500);
                cout << ".";
                Sleep(500);
                system("cls");
                }
            cout << "\nPagamento efetuado com sucesso!!\n\n";
        break;
        case 2:
        do{
            cout << "Digite 0 para colocar o telemovel...\n";
            cout << "Coloque o telemovel ao lado da seta ----> ";
            cin >> telemovel;
            if(telemovel != 0){
                cout << "Digite 0!!";
                Sleep(800);
                system("cls");
            }
        }while(telemovel != 0);
            if(telemovel == 0){
                cout << "Digite 0 para colocar o telemovel...\n";
                cout << "Coloque o telemovel ao lado da seta ----> ";
                for(int i=0; i<4; i++){
                Sleep(500);
                cout << ".";
                Sleep(500);
                cout << ".";
                Sleep(500);
                cout << ".";
                Sleep(500);
                system("cls");
                }
                cout << "Concluido!\n\n";
            }
        break;
        case 3:
            cout << "Digite o email: ";
            cin >> email;
            cout << "Digite a password: ";
            cin >> pass;
            system("cls");
            do{
            cout << "Deseja pagar com:\n\n";
            cout << "(1)  Saldo PayPal - " << saldo_paypal << "€ disponivel        Método Preferencial\n";
            cout << "(2)  Cartão de crédito ****9453 - " << saldo_cartao << "€ disponivel\n";
            cout << "Insira a opção: ";
            cin >> op_paypal;
            if(saldo_paypal < total){
                cout << "\nNão tem saldo disponivel, tente novamente mais tarde!\n";
                Sleep(800);
                system("cls");
            }
            }while(saldo_paypal < total);
            cout << "Efetuando o pagamento";
            for(int i=0; i<3; i++){
                Sleep(500);
                cout << ".";
                Sleep(500);
                cout << ".";
                Sleep(500);
                cout << ".";
                Sleep(500);
                system("cls");
                }
            cout << "\nPagamento efetuado com sucesso!!\n\n";
            break;
            case 4:
                cout << "Digite o email: ";
                cin >> email;
                cout << "Digite a password: ";
                cin >> pass;
                system("cls");
                do{
                do{
                do{
                do{
                cout << "Sua carteira Crypto:\n\n";
                btc_eur=37037.38*btc;
                cout << "(1)  BTC - " << btc << " = " << btc_eur << "€\n";
                eth_eur=2782.74*eth;
                cout << "(2)  ETH - " << eth << " = " << eth_eur << "€\n";
                doge_eur=0.13*doge;
                cout << "(3)  DOGE - " << doge << " = " << doge_eur << "€\n";
                ltc_eur=114.72*ltc;
                cout << "(4)  LTC - " << ltc << " = " << ltc_eur << "€\n\n";
                cout << "Introduza a moeda desejada: ";
                cin >> crypto_coin;
                if(crypto_coin == 1 && btc_eur < total){
                    cout << "\nMontante Insuficiente!!";
                    Sleep(800);
                    system("cls");
                }
                if(crypto_coin == 2 && eth_eur < total){
                    cout << "\nMontante Insuficiente!!";
                    Sleep(800);
                    system("cls");
                }
                if(crypto_coin == 3 && doge_eur < total){
                    cout << "\nMontante Insuficiente!!";
                    Sleep(800);
                    system("cls");
                }
                if(crypto_coin == 4 && ltc_eur < total){
                    cout << "\nMontante Insuficiente!!";
                    Sleep(800);
                    system("cls");
                }
                }while(crypto_coin == 1 && btc_eur < total);
                }while(crypto_coin == 2 && eth_eur < total);
                }while(crypto_coin == 3 && doge_eur < total);
                }while(crypto_coin == 4 && ltc_eur < total);
                system("cls");
            switch(crypto_coin){
                case 1:
                    cout << "Moeda selecionada: BTC\n";
                    cout << "Pagando";
                    for(int i=0; i<3; i++){
                        Sleep(500);
                        cout << ".";
                        Sleep(500);
                        cout << ".";
                        Sleep(500);
                        cout << ".";
                        Sleep(500);
                        system("cls");
                        }
                    cout << "\nPagamento Concluido!\n\n";
                break;
                case 2:
                    cout << "Moeda selecionada: ETH\n";
                    cout << "Pagando";
                    for(int i=0; i<3; i++){
                        Sleep(500);
                        cout << ".";
                        Sleep(500);
                        cout << ".";
                        Sleep(500);
                        cout << ".";
                        Sleep(500);
                        system("cls");
                        }
                    cout << "\nPagamento Concluido!\n\n";
                break;
                case 3:
                    cout << "Moeda selecionada: DOGE\n";
                    cout << "Pagando";
                    for(int i=0; i<3; i++){
                        Sleep(500);
                        cout << ".";
                        Sleep(500);
                        cout << ".";
                        Sleep(500);
                        cout << ".";
                        Sleep(500);
                        system("cls");
                        }
                    cout << "\nPagamento Concluido!\n\n";
                break;
                case 4:
                    cout << "Moeda selecionada: LTC\n";
                    cout << "Pagando";
                    for(int i=0; i<3; i++){
                        Sleep(500);
                        cout << ".";
                        Sleep(500);
                        cout << ".";
                        Sleep(500);
                        cout << ".";
                        Sleep(500);
                        system("cls");
                        }
                    cout << "\nPagamento Concluido!\n\n";
                break;
            }
    }
}
int main()
{
    setlocale(LC_ALL, "Portuguese");
    total=0;
    Menu();
    Carregar();
    Pedido();
    Pagamento();
}