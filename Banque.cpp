#include <iostream>
#include "Banque.h"

using namespace std;
using namespace Banque;

Compte::Compte(){
    strcpy(this->nomProprietaire," ");
    this->numCompte = 0;
    this->solde = 0;
}

Compte::Compte(char* np, int nc, double s){
    strcpy(this->nomProprietaire,np);
    this->numCompte = nc;
    this->solde = s;
}

bool Compte::retirerArgent(double s){
    if (this->solde >= s){
        this->solde =this->solde - s;
        return true;
    }
    else
        return false;
}

void Compte::deposerArgent(double s){
    this->solde =this->solde + s;
}

void Compte::consulterSolde(){
    cout << "Proprietaire : " << this->nomProprietaire << "\n";
    cout << "Numero Compte : " << this->numCompte << "\n";
    cout << "Solde : " << this->solde <<"dhs\n";
}

void Compte::transfererArgent(Compte Z, double s){
    if(this->retirerArgent(s))
        Z.deposerArgent(s);
}