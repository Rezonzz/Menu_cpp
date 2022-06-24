#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

    int menu, quantidade, pagamento, num_cartao, validade, csc, i, mes, ano, telemovel, op_paypal, crypto_coin;
    float saldo_cartao=100, saldo_paypal=73, total, btc_eur, btc=0.2, eth_eur, eth=1.1, doge_eur, doge=2, ltc_eur, ltc=5;
    string email, pass;

void Menu()
{
    do{
    cout << "|*------------------------------MENU------------------------------*|\n\n";
    cout << "(1)  Menu Big Mac                          $5.50\n";
    cout << "(2)  Menu HappyMeal                        $4.75\n";
    cout << "(3)  Menu CrispyBacon                      $5.00\n";
    cout << "(4)  Menu Cheese Burger                    $4.00\n";
    cout << "(5)  Menu McChicken                        $4.50\n";
    cout << "(6)  Menu Chicken nuggets                  $3.50\n\n";

    cout << "Please enter the number of your menu: ";
    cin >> menu;
    if(menu < 1 || menu > 6){
        cout << "Error! Enter a valid menu!\n";
        Sleep(850);
        system("cls");
    }
    }while(menu < 1 || menu > 6);

    cout << "Please enter the Number of Menus you want: ";
    cin >> quantidade;
}
void Carregar()
{
    for(int i=0; i<3; i++){
        cout << "Loading your order";
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
        cout << "Number of Menus: " <<  quantidade << "\n";
        cout << "Price of each menu: $5.50\n";
        total=5.5*quantidade;
        cout << "Total price: " << total << "\n\n";

        cout << "~------------------------THANK FOR COMING-------------------------~";
        break;
    case 2:
        cout << "Menu: HappyMeal\n";
        cout << "Number of Menus: " <<  quantidade << "\n";
        cout << "PPrice of each menu: $4.75\n";
        total=4.75*quantidade;
        cout << "Total price: " << total << "\n\n";

        cout << "~------------------------THANK FOR COMING-------------------------~";
        break;
    case 3:
        cout << "Menu: CrispyBacon\n";
        cout << "Number of Menus: " <<  quantidade << "\n";
        cout << "Price of each menu: $5.00\n";
        total=5*quantidade;
        cout << "Total price: " << total << "\n\n";

        cout << "~------------------------THANK FOR COMING-------------------------~";
        break;
    case 4:
        cout << "Menu: Cheese Burger\n";
        cout << "Number of Menus: " <<  quantidade << "\n";
        cout << "Price of each menu: $4.00\n";
        total=4*quantidade;
        cout << "Total price: " << total << "\n\n";

        cout << "~------------------------THANK FOR COMING-------------------------~";
        break;
    case 5:
        cout << "Menu: McChicken\n";
        cout << "Number of Menus: " <<  quantidade << "\n";
        cout << "Price of each menu: $4.50\n";
        total=4.5*quantidade;
        cout << "Total price: " << total << "\n\n";

        cout << "~------------------------THANK FOR COMING-------------------------~";
        break;
    case 6:
        cout << "Menu: Chicken Nuggets\n";
        cout << "Number of Menus: " <<  quantidade << "\n";
        cout << "Price of each menu: $3.50\n";
        total=3.5*quantidade;
        cout << "Total price: " << total << "\n\n";

        cout << "~------------------------THANK FOR COMING-------------------------~";
        break;
    }
}
void Pagamento()
{
    cout << "\n\n|*---------------------------PAYMENT---------------------------*|\n\n";

    cout << "Payment methods:\n\n";
    cout << "(1)  Credit Card\n";
    cout << "(2)  MbWay\n";
    cout << "(3)  PayPal\n";
    cout << "(4)  Crypto Balance\n";
    cin >> pagamento;
    system("cls");

    switch (pagamento){
        case 1:
        do{
            cout << "Enter your Credit Card Number (No spaces): ";
            cin >> num_cartao;
            if(num_cartao > 6599999999999999 || num_cartao < 4000000000000000){
                cout << "Error! Credit Card Number invalid!\n";
                Sleep(850);
                system("cls");
            }
        }while(num_cartao > 6599999999999999 || num_cartao < 4000000000000000);
            cout << "Enter your card expiry date: ";
        do{
            cout << "Month: ";
            cin >> mes;
            if(mes < 1 || mes > 12){
                cout << "Error! Enter a valid month!";
            }
        }while(mes < 1 || mes > 12);
            cout << "Year: ";
            cin >> ano;
        do{
            cout << "Enter the CVC: ";
            cin >> csc;
            if(mes < 0 || mes > 999){
                cout << "Error! Enter a valid cvc!";
            }
        }while(mes < 0 || mes > 999);
            cout << "Confirming the data";
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
            cout << "Completed";
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
            cout << "\nPayment made successfully!!\n\n";
        break;
        case 2:
        do{
            cout << "Enter 0 to place the cell phone...\n";
            cin >> telemovel;
            if(telemovel != 0){
                cout << "Enter 0!!";
                Sleep(800);
                system("cls");
            }
        }while(telemovel != 0);
            if(telemovel == 0){
                cout << "Place your cell phone next to the arrow ----> ";
                for(int i=0; i<6; i++){
                Sleep(500);
                cout << ".";
                Sleep(500);
                cout << ".";
                Sleep(500);
                cout << ".";
                Sleep(500);
                system("cls");
                }
                cout << "Completed!\n\n";
            }
        break;
        case 3:
            cout << "Enter the email: ";
            cin >> email;
            cout << "Enter the password: ";
            cin >> pass;
            system("cls");
            do{
            cout << "Do you want to pay with:\n\n";
            cout << "(1)  PayPal Balance - " << saldo_paypal << "€ available    -    Preferred Method\n";
            cout << "(2)  Credit Card ****9453 - " << saldo_cartao << "€ available\n";
            cout << "Enter the option: ";
            cin >> op_paypal;
            if(saldo_paypal < total){
                cout << "\nNo balance available, please try again later!\n";
                Sleep(800);
                system("cls");
            }
            }while(saldo_paypal < total);
            cout << "Making the payment";
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
            cout << "\nPayment made successfully!!\n\n";
            break;
            case 4:
                cout << "Enter the email: ";
                cin >> email;
                cout << "Enter the password: ";
                cin >> pass;
                system("cls");
                do{
                do{
                do{
                do{
                cout << "Your Crypto Wallet:\n\n";
                btc_eur=37037.38*btc;
                cout << "(1)  BTC - " << btc << " = " << btc_eur << "$\n";
                eth_eur=2782.74*eth;
                cout << "(2)  ETH - " << eth << " = " << eth_eur << "$\n";
                doge_eur=2.13*doge;
                cout << "(3)  DOGE - " << doge << " = " << doge_eur << "$\n";
                ltc_eur=114.72*ltc;
                cout << "(4)  LTC - " << ltc << " = " << ltc_eur << "$\n\n";
                cout << "Enter the desired currency: ";
                cin >> crypto_coin;
                if(crypto_coin == 1 && btc_eur < total){
                    cout << "\nInsufficient Amount!!";
                    Sleep(800);
                    system("cls");
                }
                if(crypto_coin == 2 && eth_eur < total){
                    cout << "\nInsufficient Amount!!";
                    Sleep(800);
                    system("cls");
                }
                if(crypto_coin == 3 && doge_eur < total){
                    cout << "\nInsufficient Amount!!";
                    Sleep(800);
                    system("cls");
                }
                if(crypto_coin == 4 && ltc_eur < total){
                    cout << "\nInsufficient Amount!!";
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
                    cout << "Selected currency: BTC\n";
                    cout << "Paying";
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
                    cout << "\nPayment made successfully!\n\n";
                break;
                case 2:
                    cout << "Selected currency: ETH\n";
                    cout << "Paying";
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
                    cout << "\nPayment made successfully!\n\n";
                break;
                case 3:
                    cout << "Selected currency: DOGE\n";
                    cout << "Paying";
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
                    cout << "\nPayment made successfully!\n\n";
                break;
                case 4:
                    cout << "Selected currency: LTC\n";
                    cout << "Paying";
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
                    cout << "\nPayment made successfully!\n\n";
                break;
            }
    }
}
int main()
{
    setlocale(LC_ALL, "Portuguese");
    total=0;
    saldo_paypal=500;
    saldo_cartao=3500;
    Menu();
    Carregar();
    Pedido();
    Pagamento();
}
