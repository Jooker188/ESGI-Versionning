#include <iostream>
#include <string.h>

using namespace std;

class Race {
public:
    string nomRace;
    string bioRace;
    int bonusPV;
    int bonusATTAQUE;
    int bonusMANA;


};

Race getRace(string raceReq)
{
    Race humain;
    humain.nomRace="Humain";
    humain.bioRace="Les humains sont une espèce intelligente et diversifiée, disposant de capacité de combat équilibrer.";
    humain.bonusPV=100;
    humain.bonusATTAQUE=100;
    humain.bonusMANA=100;

    Race elfe;
    elfe.nomRace="Elfe";    //erreur, bio erroné.
    elfe.bioRace="Les humains sont une espèce intelligente et diversifiée, disposant de capacité de combat équilibrer.";
    elfe.bonusPV=0;
    elfe.bonusATTAQUE=100;
    elfe.bonusMANA=200;

    Race nain;
    nain.nomRace="Nain";
    nain.bioRace="Les nains font partie d'une race robuste et habile, malgré leur petite taille. Ils possèdent des capacités physiques supérieures à celles des autres races.";
    nain.bonusPV=100;
    nain.bonusATTAQUE=200;
    nain.bonusMANA=0;

    if(raceReq == "Humain")
        return humain;

    else if(raceReq == "Elfe")
        return elfe;
    else if(raceReq == "Nain")
        return nain;

    else
        printf("Erreur race inconnu");
}

int main(int argc, char** argv) {

    getRace(argv[1]);

}
