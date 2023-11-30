class Classes{
public:
    string nom;
    int pv;
    int attaque;
    int mana;

};

Classes getClasse(string nomClasse)
{
   Classes guerrier;
   guerrier.nom="Guerrier";
   guerrier.pv=1000;
   guerrier.attaque=300;
   guerrier.mana=200;

   Classes archer;
   archer.nom="Archer";
   archer.pv=700;
   archer.attaque=500;
   archer.mana=300;

   Classes mage;
   mage.nom="Mage";
   mage.pv=600;
   mage.attaque=300;		//Attaque corriger
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

int main(int argc, char** argv) {

    getRace(argv[1]);
    getClasse(argv[2]);

}
