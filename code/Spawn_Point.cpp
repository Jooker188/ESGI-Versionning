#include <iostream>
#include <string>


using namespace std;


class Spawn_point{
public:
    string nom_lieu;
    int coor_X;
    int coor_Y;
    int spawnID;

    void affichSpawn()
    {
        cout << "Lieu: " << nom_lieu << endl;
        cout << "X: " << coor_X << "       Y:" << coor_Y << endl;
    }
};

Spawn_point create_spawn_point(int spawnID)
{
    if(spawnID == 1)
    {
        Spawn_point ville;
        ville.nom_lieu="Ville";
        ville.spawnID=1;
        ville.coor_X=63;
        ville.coor_Y=381;

        return ville;
    }
    else if(spawnID == 2)
    {
        Spawn_point foret_des_elfes;
        foret_des_elfes.nom_lieu="Foret des Elfes";
        foret_des_elfes.spawnID=2;
        foret_des_elfes.coor_X=167;
        foret_des_elfes.coor_Y=125;

        return foret_des_elfes;
    }
    if(spawnID == 3)
    {
        Spawn_point cite_des_nains;
        cite_des_nains.nom_lieu="Cite des Nains";
        cite_des_nains.spawnID=3;
        cite_des_nains.coor_X=1687;
        cite_des_nains.coor_Y=963;

        return cite_des_nains;
    }

}

int main(int argc, char** argv) {

    //getRace(argv[1]);
    //cout << getClasse(argv[1]).attaque << endl;
    //competanceSet PersoCompetances;
    //PersoCompetances = getCompetance(getClasse(argv[1]));
    //Familier familierChoisis;
    //familierChoisis = choixFamilier(argv[1]);
    //cout << choixNom("Name");
    //    Personnage persoCree;
    //    persoCree=crePerso();
    //    persoCree.affichPerso();

    //    Quetes maQuete;
    //    maQuete=genQuete(1);
    //    maQuete.affichQueteStatus();

    Spawn_point mySpawn;
    mySpawn =create_spawn_point(3);
    mySpawn.affichSpawn();


}
