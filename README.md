# C

> Ce dépôt contient un travail de lecture, traduction, de synthèse et d'annotation du livre [The C Programming Language, 2nd edition](https://www.oreilly.com/library/view/c-programming-language/9780133086249/) (ou livre K&R), de Brian W.Kernighan et Dennis M.Ritchie, publié en 1988. Tous les exercices proposés sont réalisés et documentés sous la forme de code source pour chaque chapitre.

- [C](#c)
  - [Général](#général)
  - [Introduction au langage C](#introduction-au-langage-c)
  - [Chapitre 1 : tutoriel](#chapitre-1--tutoriel)
    - [*Hello World*](#hello-world)
    - [Arithmétique](#arithmétique)
    - [for et while](#for-et-while)
    - [Constantes symboliques](#constantes-symboliques)
- [Références](#références)


## Général

La première édition du livre *The C Programming language* a été publiée en 1978.

La seconde édition décrit le C comme il est défini par le standard ANSI (American National Standards Institute), c'est-à-dire "défini sans ambiguïté et machine-indépendant".

Le C a originellement été désigné et implémenté pour le système d'exploitation UNIX, sur [DEC PDP-11](https://fr.wikipedia.org/wiki/PDP-11) par Dennis Ritchie.

L'OS, le compilateur C et tous les programmes UNIX (dont ceux qui ont servi à écrire ce livre) sont écrits en C.

> On peut s'amuser à émuler ces anciennes machines avec le simulateur [SimH](http://simh.trailing-edge.com/).

## Introduction au langage C

C est un langage de programmation *généraliste*. 

C fournit les éléments de contrôle du flot d'exécution nécessaires à la réalisation de programmes bien structurés: `if-else`, `switch`, `while`, `for`, `do`, `break`.

Les fonctions peuvent retourner des valeurs de type de base, des structures, des unions ou des pointeurs. N'importe quelle fonction peut être appelée de manière récursive. Les variables locales sont créées de manière automatique. Un programme C peut être divisé en plusieurs fichiers source *compilés séparément*. Les variables peuvent être internes à une fonction, externes à une fonction, mais connues uniquement dans le fichier source où elle est déclarée, ou visible pour le programme entier.

Une *phase de préprocessing* réalise des substitutions de macro sur du *programme texte* (text program), l'inclusion d'autres fichiers sources et de la compilation conditionnelle.

C est un langage plutôt bas niveau. Cela signifie que le C manipule les mêmes objets que la plupart des ordinateurs : des caractères, des nombres et des adresses.

C ne fournit aucune instruction pour manipuler directement des objets composites comme des chaînes de caractères, des sets, des listes ou des tableaux.

C n'a pas de gestion automatique de la mémoire (garbage collector). C lui même ne fournit aucun moyen simple pour les entrées/sorties, il n'y a pas d'instructions READ ou WRITE, et aucune méthode d'accès aux fichiers de manière native. Tous ces mécanismes de haut niveau doivent être fournis par des appels de fonction explicites. La plupart des implémentations du C fournissent une bibliothèque standard pour ces fonctions.

Le C offre uniquement un flot de contrôle monothreadé.

De garder le langage de si petite taille a des bénéfices. Comme C est petit, il peut être expliqué et appris rapidement. Un·e programmeur·se C peut raisonnablement envisager de connaître, comprendre et utiliser *tout* le langage.

> Cette proposition est contenue *dans le livre lui-même*. La première impression que le livre fait lorsqu’on le prend en main c'est sa taille: 260 pages. Si on retire les annexes, les index et le chapitre 8, qui porte sur l'interface avec le système UNIX, le livre fait 168 pages ! À l'image du langage C, les auteurs ont choisi de publier un livre *de petite taille*. En 168 pages, ciselées, où chaque mot est pesé, on étudie ce livre comme on étudie le langage C. Si le livre a été publié avec des outils écrits en C, le contenu du livre est lui aussi *C-driven*: expressif, concis et simple. Rien que par ses dimensions et son style, cet ouvrage, concis et complet, est un *grand livre*. Sans même ouvrir le livre, rien que par sa taille, on sent qu'on *peut facilement* apprendre le C et que le faire doit avoir un intérêt.

Le C standardisé ANSI vient avec une bibliothèque de fonctions: des fonctions pour accéder à l'OS (par exemple pour lire et écrire des fichiers, allouer la mémoire, manipuler des chaînes de caractères, etc.). Une collection de headers standards fournit un accès uniforme à la déclaration de ces fonctions et des types de données qui les accompagnent. *Les programmes qui utilisent la librairie standard sont garantis de se comporter exactement de la même manière sur chaque système d'exploitation*. La librairie standard fournit une interface commune à tous les systèmes d'exploitation. La plupart de la bibliothèque standard est fondée sur la "standard I/O library" (stdio) du système UNIX.

## Chapitre 1 : tutoriel

> Le chapitre 1 se veut une introduction rapide au langage C sans se perdre trop dans les détails. Le but n'est pas d'être exhaustif, mais de mettre la main sur le langage pour rapidement écrire des programmes intéressants. Il se concentre sur les bases: les variables, les constantes, l'arithmétique, le flot de contrôle, les fonctions et quelques notions d'entrée/sortie. Les concepts nécessaires à l'écriture de programmes plus complexes (pointeurs, structures, la librairie standard, etc.) sont volontairement laissés de côté pour l'instant.

### *Hello World*

Pour écrire ce programme, il faut écrire du texte dans un fichier, le compiler avec succès, le charger en mémoire, l'exécuter et trouver où il a écrit sa sortie. Une fois ces détails techniques maîtrisés, le reste vient assez facilement.

~~~C
#include<stdio.h>
main(){
    printf("Hello, world !\n);
}
~~~

Pour compiler ce programme, il faut enregistrer le fichier avec l'extension `.c`, le compiler avec le compilateur `cc` (ou `gcc`) pour créer un fichier exécutable `a.out`. Puis l'exécuter.

~~~
cc -Wall hello.c
./a.out
~~~

Un programme C est composé de *fonctions* et de *variables*.

> A l'époque, et notamment lors de la seconde édition du livre en 1988, la programmation orientée objet était déjà bien présente avec Simula (1967), SmallTalk (1972) et C++ (1980). Contrairement à ce que l'on pourrait penser, le C, orienté fonction et variable, de taille modeste, dispose d'un design assez radical par rapport à la plupart des langages de son époque et aux tendances conceptuelles du moment. Il s'inspire davantage de Fortran (1957) et de Pascal(1970, 2 ans avant le C). On peut penser notamment à SmallTalk qui vient avec tout un système d'exploitation, tout un package (intégralement orienté objet comme UNIX est intégralement réécrit en C, à la différence que C, de par sa petite taille, est plus facilement portable). Le C est donc déjà bâti avec un regard critique dans le rétroviseur.

La fonction `main` est spéciale: le programme commence toujours par exécuter cette fonction. Tout programme C doit avoir une fonction `main`.

En C, *toutes les variables doivent être déclarées* avant d'être utilisées. Par convention, on les place au début de la fonction *avant toute instruction*.

### Arithmétique

En C, la division entière tronque le résultat. Par exemple 5/9, comme 5 et 9 sont des entiers 5/9 sera tronqué à 0.

`printf` est une fonction de la librairie standard (C ne définit aucune fonction d'entrée/sortie)

>En C, la multiplication à la précédence sur la division.

>Dans la première partie sur la conversion Farenheiht-Celsius, les auteurs sont habiles, car ils proposent d'utiliser un pas qui leur permet d'utiliser la division entière dans l'expression `5 * (fahr - 32) / 9` sans fournir de mauvais résultat. En effet, si on passe le pas à 1 par exemple, pour les valeurs 31 et 33 la division sera tronquée et la valeur en Celsius sera égale à 0 (faux).

Quelques types de base offerts par le C:

- `char`: un caractère encodé sur un octet (8 bits, ou 1 *byte* en anglais)
- `int`: un entier encodé sur 16 bits ou 32 bits (machine dépendante)
- `short`: un entier *court* (minimum sur 16 bits)
- `long`: en entier *long* (minimum sur 32 bits)
- `float` : nombre à virgule, typiquement sur 32bit
- `double` : double précision nombre à virgule

Si une opération arithmétique a pour opérandes deux entiers, une opération entier à entier est réalisée. Si un opérande est un float et l'autre un entier, *l'entier est converti en float et une opération float à float est réalisée*.

Quelques spécifications de conversion de la fonction printf:

- `%d` : converti un entier en chaîne de caractères
- `%f` : converti un float en chaîne de caractères
- `%3d` : converti un entier sur 3 colonnes
- `%6.1f` : converti un float sur *au moins* 6 caractères, avec 1 chiffre derrière la virgule
- `%3.0f`: converti un float sur au moins 3 caractères, avec aucun chiffre derrière la virgule (pas de virgule)
- `%.4f`: converti un float, avec 4 chiffres derrière la virgule (pas de virgule)
- `%s`: chaîne de caractères. Par défaut padding à droite.
- `%10s`: chaîne de caractères sur *au moins* 10 caractères.
- `%-10s`: chaîne de caractères sur *au moins* 10 caractères, padding à gauche.
- `%c`: caractère

### for et while

Le choix entre `for` et `while` est arbitraire: choisir celui qui rend le code *plus clair*. `for` est approprié pour des boucles où les instructions d'*initialisation* et d'*incrémentation* sont *logiquement reliées*. La boucle `for` est plus compacte, car elle garde les instructions de contrôle de la boucle *au même endroit*.  

### Constantes symboliques

Les *nombres magiques* dans un programme sont mauvais, car ils ne fournissent aucune information évidente à une personne qui voudrait lire le programme plus tard, et ils sont difficiles à trouver de manière systématique. Une façon de gérer ces nombres, c'est de leur donner un nom avec un sens. Une ligne qui débute par `#define` définit *un nom symbolique* ou *une constante symbolique* comme une chaîne de caractères particulière (le nom symbolique est remplacé par la chaîne de caractère durant la phase de *préprocessing*)

~~~C
#define nom texte de remplacement
~~~

Par convention, les constantes symboliques sont écrites en MAJUSCULES pour ne pas les confondre avec les variables définies dans le programme. Le nom de la constante symbolique doit commencer par une lettre. Le texte de remplacement peut être *n'importe quelle chaîne de caractères*.

# Références

- [The C Programming Language, 2nd edition](), de Brian W.Kernighan et Dennis M.Ritchie, 1988, aux éditions [Prentice Hall](https://fr.wikipedia.org/wiki/Prentice_Hall) (dont la société mère est l'éditeur [Pearson](https://fr.wikipedia.org/wiki/Pearson_(maison_d%27%C3%A9dition)), qui détient aussi l'éditeur [Addison-Wesley](https://fr.wikipedia.org/wiki/Addison-Wesley), qui a publié, entre autres, *The Art of Computer Programming* de Knuth, *The Feynman lectures and Physics* de Feynman et *The Mythical Man-Month* de Brooks)
- [C documentation](https://devdocs.io/c/)