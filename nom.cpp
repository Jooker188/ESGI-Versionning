include "string.h"

string choixNom(string nom)
{

    if(strlen(nom) >= 15 || strlen(nom) <= 1 )
    {
        bool isValid=true;
        int nomLen=strlen(nom);

        for(int i=0; i<nomLen; i++)
        {
            if(((nom[i] >= 'A' && nom[i] <= 'Z')) || ((nom[i] >= 'a' && nom[i] <= 'z')))
                return nom;
            else
            {
                printf("nom invalide");
                break;
            }
        }

    }
    else
        printf("nom invalide");
}

int main(int argc, char** argv) {

    choixNom(argv[1]);


}
