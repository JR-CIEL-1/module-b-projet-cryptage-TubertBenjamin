#include <iostream>
#include <cstring>

using namespace std;

int main() {
int i =0;
char tab[30];
char inverse[30];

cout << "Entrez une phrase" << endl;
cin.getline(tab,30);  
int longueur = strlen(tab);
for(i=0;i<longueur+1;i++){
    inverse[i-1]=tab[longueur -i]; 
}

cout << "Votre phrase est " << inverse << endl; 
return 0; 
}
