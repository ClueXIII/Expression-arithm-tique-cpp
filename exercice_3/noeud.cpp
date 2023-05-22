#include "noeud.h"

noeud::noeud() {
    fg = nullptr;
    fd = nullptr;
}

int getpriority (char op) {
    if (op == '('){
        return 0; //parenthèse ouvrante
    }else if (op == '+' || op == '-'){
        return 1; //addition, soustraction
    } else if (op == '*' || op == '/' || op == '%'){
        return 2; //multiplication, division, modulo
    } else if (op == '^'){
        return 3; //puissance (associativité à droite)
    }else if (op == ')') {
        return 4; //parenthèse fermante
    } else {
        return -1; //l'op donné est un operande
    }
}

noeud::noeud(char caractere) {
    if (getpriority(caractere)==-1){
        this->type = 'f';
        this->val = caractere;
        fg = nullptr;
        fd = nullptr;
    } else {
        this->type = 'o';
        this->ope = caractere;
        fg = nullptr;
        fd = nullptr;
    }

}

void noeud::setfgfd(noeud *fg, noeud *fd) {
    this->fg = fg;
    this->fd = fd;
}

noeud::~noeud() {
    if (fg != nullptr && fd != nullptr) {
        delete fg;
        delete fd;
        delete suivant;
    }
}
