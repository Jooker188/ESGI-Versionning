include "string.h"

string choixNom(string nom)
{
    if(strlen(nom) >= 15 || strlen(nom) <= 1 )
        return nom;
    else
        printf("nom invalide");
}

int main(int argc, char** argv) {

    choixNom(argv[1]);


}
