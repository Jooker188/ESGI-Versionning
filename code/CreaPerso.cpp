
#include <iostream>
#include <string>

#include <stdio.h>>

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
    humain.bioRace="Les humains sont une espece intelligente et diversifiee, disposant de capacite de combat equilibrer.";
    humain.bonusPV=200;
    humain.bonusATTAQUE=200;
    humain.bonusMANA=200;

    Race elfe;
    elfe.nomRace="Elfe";
    elfe.bioRace="Les elfes sont une race mystique, vivant en harmonie avec la nature. Ils disposent d'une longevite exceptionnelle et de capacite magique accrue.";
    elfe.bonusPV=0;
    elfe.bonusATTAQUE=200;
    elfe.bonusMANA=400;

    Race nain;
    nain.nomRace="Nain";
    nain.bioRace="Les nains font partie d'une race robuste et habile, malgre leur petite taille. Ils possedent des capacites physiques superieures a celles des autres races.";
    nain.bonusPV=200;
    nain.bonusATTAQUE=400;
    humain.bonusMANA=0;

    if(raceReq == "Humain")
        return humain;

    else if(raceReq == "Elfe")
        return elfe;
    else if(raceReq == "Nain")
        return nain;

    else
        printf("Erreur race inconnu");
}


class Classes{
public:
    string nom;
    int pv;
    int attaque;
    int mana;

};


#Récupérer la Classe du personnage
Classes getClasse(string nomClasse)
{
    Classes guerrier;
    guerrier.nom="Guerrier";
    guerrier.pv=2000;
    guerrier.attaque=300;
    guerrier.mana=200;

    Classes archer;
    archer.nom="Archer";
    archer.pv=1400;
    archer.attaque=500;
    archer.mana=300;

    Classes mage;
    mage.nom="Mage";
    mage.pv=1200;
    mage.attaque=300;
    mage.mana=600;

    if(nomClasse == "Guerrier")
        return guerrier;
    else if(nomClasse == "Archer")
        return archer;
    else if(nomClasse == "Mage")
        return mage;
    else
        printf("Erreur classe inconnu");


}


class Competances{
public:
    string nom;
    int degats;
    int coutMana;
    int tempRecharge;



};


//contient et affiche les 2 compétances
class CompetanceSet{
public:
    Competances base;
    Competances skill1;

    void afficheComp()
    {
        cout << "Competance 1: " << base.nom << endl;
        cout << "   -Degats: " << base.degats <<endl;
        cout << "   -Cout en mana: " << base.coutMana << endl;
        cout << "   -Temps de recharge: " << base.tempRecharge;
        cout << endl;
        cout << "Competance 2: " << skill1.nom << endl;
        cout << "   -Degats: " << skill1.degats <<endl;
        cout << "   -Cout en mana: " << skill1.coutMana << endl;
        cout << "   -Temps de recharge: " << skill1.tempRecharge;
    }
};



#Récupération des copétance de la bonne classe
CompetanceSet getCompetance(Classes classe)
{
    if(classe.nom == "Guerrier")
    {
        Competances base;
        base.nom ="slash";
        base.degats=classe.attaque;
        base.coutMana=0;
        base.tempRecharge=1;

        Competances skill1;
        skill1.nom="Excalibure";
        skill1.degats=classe.attaque+classe.mana;
        skill1.coutMana=100;
        skill1.tempRecharge=10;

        CompetanceSet compSetGuerrier;
        compSetGuerrier.base=base;
        compSetGuerrier.skill1=skill1;

        return compSetGuerrier;
    }
    else if(classe.nom == "Archer")
    {
        Competances base;
        base.nom="fleche";
        base.degats=classe.attaque;
        base.coutMana=0;
        base.tempRecharge=2;

        Competances skill1;
        skill1.nom="Pluie de fleches";
        skill1.degats=classe.attaque+classe.mana;
        skill1.coutMana=150;
        skill1.tempRecharge=15;

        CompetanceSet compSetArcher;
        compSetArcher.base=base;
        compSetArcher.skill1=skill1;

        return compSetArcher;
    }
    else if(classe.nom == "Mage")
    {
        Competances base;
        base.nom="boule de feu";
        base.degats=classe.attaque;
        base.coutMana=20;
        base.tempRecharge=1;

        Competances skill1;
        skill1.nom="Fatal foudre";
        skill1.degats=classe.attaque+classe.mana;
        skill1.coutMana=200;
        skill1.tempRecharge=12;

        CompetanceSet compSetMage;
        compSetMage.base=base;
        compSetMage.skill1=skill1;

        return compSetMage;
    }
    else
        printf("Classe inconnu");
}



//Vérification du nom
string choixNom(string nom)
{
    //Calcule longeure de Nom
    int nomTaille;
    for(int j=0; nom[j]!='\0'; j++)
    {
        nomTaille=j;
    }
    printf("\n %d \n",nomTaille);


    if(nomTaille <= 15 && nomTaille >= 1 )
    {
        //bool isValid=true;

        for(int i=0; i<nomTaille; i++)
        {
            if(((nom[i] >= 'A' && nom[i] <= 'Z')) || ((nom[i] >= 'a' && nom[i] <= 'z')))
                return nom;
            else
            {
                printf("nom invalide11\n");
                break;
            }
        }

    }
    else
        printf("nom invalide");
}

class Personnage{
public:
    Race race;
    Classes classe;
    CompetanceSet competances;
    string nom;

    void affichPerso()
    {
        cout << "------------------------------Personnage------------------------------" << endl;
        cout << "Nom: " << nom << endl;
        cout << "Race: " << race.nomRace << endl;
        cout << "Classe: " << classe.nom << endl;
        cout << "Stats: PV-" << classe.pv << "   Mana-" << classe.mana << "   Attaque-" << classe.attaque <<endl;
        cout << endl;
        competances.afficheComp();
        cout << endl;
        cout << "----------------------------------------------------------------------" << endl;
    }

};


//Création du personnage
Personnage crePerso() //Creation de personage
{
    Personnage newPerso;
    int choixClasse;
    int choixRace;
    string nomPerso;

    cout << "Interface de creation de personnage" << endl <<endl;

    cout << "Choisissez une Race:" << endl;
    cout << "1)Humain" << endl;
    cout << "2)Elfe" << endl;
    cout << "3)Nain" << endl;
    cin >> choixRace;

    if(choixRace == 1)
    {
        newPerso.race=getRace("Humain");
    }
    else if(choixRace == 2)
    {
        newPerso.race=getRace("Elfe");
    }
    else if(choixRace == 3)
    {
        newPerso.race=getRace("Nain");
    }
    else{
        cout << "Race Invalide" << endl;
    }


    cout << endl;
    cout << "Choisissez une Classe:" << endl;
    cout << "1)Guerrier" << endl;
    cout << "2)Archer" << endl;
    cout << "3)Mage" << endl;
    cin >> choixClasse;

    if(choixClasse == 1)
    {
        newPerso.classe=getClasse("Guerrier");
    }
    else if(choixClasse == 2)
    {
        newPerso.classe=getClasse("Archer");
    }
    else if(choixClasse == 3)
    {
        newPerso.classe=getClasse("Mage");
    }
    else{
        cout << "Classe Invalide" << endl;
    }


    cout << endl;
    cout << "Entre le nom du Personnage(max 15 caracteres):" << endl;
    cin >> nomPerso;
    newPerso.nom=nomPerso;

    newPerso.competances=getCompetance(newPerso.classe);

    return newPerso;


int main(int argc, char** argv) {


    Personnage persoCree;
    persoCree=crePerso();
    persoCree.affichPerso();

}
