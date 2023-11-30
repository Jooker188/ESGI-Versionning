#include "classes.h"

class competances{
public:
    string nom;
    int degats;
    int coutMana;
    int tempRecharge;

};

class competanceSet{
public:
    competances base;
    competances skill1;
};

competanceSet getCompetance(Classes classe)
{
    if(classe.nom == "Guerrier")
    {
        competances base;
        base.nom ="slash";
        base.degats=classe.attaque;
        base.coutMana=0;
        base.tempRecharge=1;

        competances skill1;
        skill1.nom="Excalibure";
        skill1.degats=classe.attaque+classe.mana;
        skill1.coutMana=100;
        skill1.tempRecharge=10;

        competanceSet compSetGuerrier;
        compSetGuerrier.base=base;
        compSetGuerrier.skill1=skill1;

        return compSetGuerrier;
    }
    else if(classe.nom == "Archer")
    {
        competances base;
        base.nom="flèche";
        base.degats=classe.attaque;
        base.coutMana=0;
        base.tempRecharge=2;

        competances skill1;
        skill1.nom="Pluie de flèches";
        skill1.degats=classe.attaque+classe.mana;
        skill1.coutMana=150;
        skill1.tempRecharge=15;

        competanceSet compSetArcher;
        compSetArcher.base=base;
        compSetArcher.skill1=skill1;

        return compSetArcher;
    }
    else if(classe.nom == "Mage")
    {
        competances base;
        base.nom="boule de feu";
        base.degats=classe.attaque;  	//attaque corriger
        base.coutMana=20;
        base.tempRecharge=1;

        competances skill1;
        skill1.nom="Fatal foudre";
        skill1.degats=classe.attaque+classe.mana;
        skill1.coutMana=200;
        skill1.tempRecharge=12;

        competanceSet compSetMage;
        compSetMage.base=base;
        compSetMage.skill1=skill1;

        return compSetMage;
    }
    else
        printf("Classe inconnu");
}


int main(int argc, char** argv) {


    competanceSet PersoCompetances;
    PersoCompetances = getCompetance(getClasse(argv[1]));

}
