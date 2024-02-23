#include <iostream>

using namespace std;

struct Gladiador {
    string nome;
    int Forca;
    int Habilidade;
    int idade;
};
Gladiador gladiador[5];
int choice1, choice2;

void Registro(){
     for(int i = 0; i < 5; i++){ //complexidade assintótica: 5
        cout << "Entre com o nome do gladiador: " << endl;
        getline(cin >> ws, gladiador[i].nome);
        cout << "Entre com a força do gladiador: " << gladiador[i].nome << endl;
        cin >> gladiador[i].Forca;
        cout << "Entre com a Habilidade do gladiador: " << gladiador[i].nome << endl;
        cin >> gladiador[i].Habilidade;
        cout << "Entre com a idade do gladiador: " << gladiador[i].nome << endl;
        cin >> gladiador[i].idade;
    }
};


bool Combate(Gladiador glad1,Gladiador glad2){
    int vida1,vida2 = 100;
    while(vida1 > 0 && vida2 > 0){
        vida2 = vida2 - (glad1.Forca + (2^glad1.Habilidade));
        vida1 = vida1 - (glad2.Forca + (2^glad2.Habilidade));
    }
    if(vida1 <= 0)
     return true;
    if(vida2 <= 0)
     return false;
}

void menu(){
    cout << "escolha dois gladiadores para a batalha!" << endl;
    for (int i=0;i<5; i++)
    {
        cout << gladiador[i].nome << " " << i << endl;   //Complexidade assintótica: n = 5; 
    }
    cin >> choice1 >> choice2;

}

int main() {

    Registro();
    while(choice1 != -1 || choice2 != -1){
        menu();
        if(Combate(gladiador[choice1],gladiador[choice2]))
        cout << gladiador[choice2].nome << " ganhou a batalha contra " << gladiador[choice1].nome << "." << endl;
        else 
        cout << gladiador[choice1].nome << " ganhou a batalha contra " << gladiador[choice2].nome << "." << endl;
    }
    return 0;
}
