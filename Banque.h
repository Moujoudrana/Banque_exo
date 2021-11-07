#pragma once
namespace Banque{
    class Compte{
        private:
            char* nomProprietaire;
            int numCompte;
            double solde;
        public:
            Compte();
            Compte(char* np, int nc, double s);
            bool retirerArgent(double s);
            void deposerArgent(double s);
            void consulterSolde();
            void transfererArgent(Compte Z, double s);
    };
}