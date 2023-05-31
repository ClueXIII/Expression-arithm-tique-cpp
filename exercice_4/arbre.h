#ifndef TD2S2_POO_ARBRE_H
#define TD2S2_POO_ARBRE_H
#include <string>
#include "noeud.h"
using namespace std;

class arbre {
    noeud *racine;  //racine de l'arbre
public:
    arbre(); //constructeur sans argument
    arbre(noeud *racine); //constructeur a partir d'un noeud
    arbre(string expressioninf); //constructeur a partir d'une expression infixe

    void afficher(); //afficher l'arbre
    void afficherRecursive(noeud *noeudActuel, string miseEnPage, bool estDernier); //afficher l'arbre recursivement a partir d'un noeud

    //float evaluer(); //evaluer l'arbre
    //float evaluer(noeud* noeudActuel); //evaluer l'arbre recursivement a partir d'un noeud

    void afficherInfixe(); //afficher l'arbre en notation infixe
    void afficherInfixe(noeud* noeudActuel); //afficher l'arbre en notation infixe recursivement a partir d'un noeud

    void deriver(); //deriver l'arbre
    noeud *deriverRecursive(noeud* current); //deriver l'arbre recursivement a partir d'un noeud

    void deleteTree (noeud *noeudActuel); //supprimer l'arbre recursivement a partir d'un noeud
    ~arbre(); //destructeur
};


#endif