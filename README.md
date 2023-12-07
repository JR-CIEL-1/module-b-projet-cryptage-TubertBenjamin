# M1-Cryptage

## Module cryptage

Ce logiciel devra être capable de coder un texte tapé par l'utilisateur à la console ou dans un fichier.

Pour décoder le texte il faudra utiliser votre logiciel et connaître la clé de cryptage.

La livraison du logiciel sera présentée des intervenants extérieurs à la classe.

## Conditions imposées.


Une recette devra être préparée et présentée à des personnes ne connaissant pas forcement l'informatique, à une date qui vous sera communiquée.

Le travail s'effectuera en classe et à la maison.

Votre travail (différentes versions ) devra être archivé et modifiable via l'utilitaire gitHub.

Pour la présentation vous réaliserez les diagrammes sysml suivants :

**Diagramme des cas d'utilisation** 

**Diagramme de séquences**

Un protocole d'utilisation de votre logiciel devra être crée.

Vous creerez une branche de developpement lors de chaque partie.

## Partie 1

Faites un programme qui demande à l'utilisateur de saisir une phrase. 

Sans faire de fonctions, faites les programmes suivants :

1) Affichez la phrase à l'envers :

Exemple : « ma petite phrase » doit afficher « esarhp etitep am »

2) Décalez chaque caractère de 2 lettres (a devient c, b devient d, c devient e,..., y devient a et z devient b.)

Exemple : « ma petite phrase » doit afficher « oc rgvkvg rjtcug »

### remarque :
Si le ième caractère est compris entre ‘A' et ‘Z'

sortie[i]=(((phrase[i]‐65)+nbCaract)%26)+65

Si le ième caractère est compris entre ‘a' et ‘z'

sortie[i]=(((phrase[i]‐97)+nbCaract)%26)+97

## Partie 2

Reprenez les deux programmes et utilisez‐les pour faire les deux fonctions suivantes :

‐ string inversePhrase(string phrase) ;

Comme vous le voyez, elle a un paramètre de type string et elle renvoie un string. Il faut que la variable que vous renvoyez soit transformée de la même manière que dans le premier exemple.

- string decalePhrase(string phrase, int nbCaract)

Le string qui est renvoyé doit être le 1er paramètre (la phrase) décalé d'autant de caractère que l'indique le 2ème paramètre (suivant le même principe que le second programme). 

## Partie 3

Maintenant, on va créer une structure qui nous permet d'enregistrer la phrase d'origine, le code et la phrase cryptée. Nous l'appellerons Crypt. Le principe du cryptage est le suivant : on inverse la phrase puis on décale les caractères de X caractères (X étant le code secret...)

## Partie 4

Vous réaliserez le codage du texte contenu dans un fichier.txt. Vous créerez un fichier code.txt qui contiendra le texte codé de fichier.txt

## Partie 5

Vous ferez ensuite un main qui demande à l'utilisateur de saisir entre une phrase et un fichier puis un nombre (le code). Vous utiliserez ensuite la fonction crypter, et afficherez la phrase cryptée.

Ensuite, entrez la phrase suivante et décryptez la (sachant que le code est 12 !) :

! eqzgqV eqx ahmdN


