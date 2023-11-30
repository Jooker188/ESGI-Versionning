class Familier{
public:
    string nom;
    int pv;
    int attaque;
};


Familier choixFamilier(string nom)
{
    if(nom=="Loup")
    {
        Familier loup;
        loup.nom="Loup";
        loup.pv=500;
        loup.attaque=30;
    }
    else if(nom=="Harpie")
    {
        Familier harpie;
        harpie.nom="harpie";
        harpie.pv=500;
        harpie.attaque=30;
    }
    else if(nom=="Pégase")
    {
        Familier pegase;
        pegase.nom="Pégase";
        pegase.pv=500;
        pegase.attaque=30;
    }
    else
        printf("Nom inconnu");
}

int main(int argc, char** argv) {

    Familier familierChoisis;
    familierChoisis = choixFamilier(argv[1]);

}
