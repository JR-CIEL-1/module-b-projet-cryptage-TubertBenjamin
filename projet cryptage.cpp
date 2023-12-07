#include <iostream>
#include <cstring>

using namespace std;

int main() {
int i =0;
char tab[30] ="";
char inverse[30] ="";
char sortie[30] = "" ;
int decal=2;

cout << "Entrez une phrase" << endl;

cin.getline(tab,30);  

int longueur = strlen(tab);

for(i=0;i<longueur+1;i++){
    inverse[i-1]=tab[longueur -i]; 
    if ((inverse[i] >= 'A' && inverse[i] <= 'Z')) { // Si le ième caractère est compris entre ‘A' et ‘Z'
            sortie[i] = (((inverse[i] - 65) + decal) % 26) + 65; // inverse[i] -65 +2 le reste
        } else if  ((inverse[i] >= 'a' && inverse[i] <= 'z')) {  // 
            sortie[i] = (((inverse[i] - 97) + decal) % 26) + 97; //
        } else{
            sortie[i] = inverse[i];
        }
}

cout << "Votre phrase est " << inverse << endl; 
cout << "Votre phrase est " << sortie << endl; 
return 0; 
}
