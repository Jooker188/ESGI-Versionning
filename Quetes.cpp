#include <iostream>
#include <string>


using namespace std;

Quetes genQuete(int id)
{

    if(id ==1)
    {
        Quetes quete_n1;
        quete_n1.id=1;
        quete_n1.nom="Quete de depart";
        quete_n1.objectif="Rejoiniez les corrdonnees x: 48 ";  //Manque la la corrdonnee y
        quete_n1.ifClear=false;

        return quete_n1;
    }

    else if(id == 2)
    {
        Quetes quete_n2;
        quete_n2.id=2;
        quete_n2.nom="La suite";
        quete_n2.objectif="Parler a Bob";
        quete_n2.ifClear=false;

        return quete_n2;
    }
    else
        cout << "Quete invalide" << endl;

}



int main(int argc, char** argv) {

    Quetes maQuete;
    maQuete=genQuete(1);
    maQuete.affichQueteStatus();

}
