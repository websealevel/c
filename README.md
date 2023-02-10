# C

## Général

La première édition du livre *The C Programming language* a été publiée en 1978.

La seconde édition décrit le C comme il est défini par le standard ANSI (American National Standards Institute), c'est à dire "défini sans ambiguité et machine-indépendant".

Le C a originellement été designé et implémenté pour le système d'explotiation UNIX, sur [DEC PDP-11](https://fr.wikipedia.org/wiki/PDP-11) par Dennis Ritchie.

L'OS, le compilateur C et tous les programmes UNIX (dont ceux qui ont servi à écrire ce livre) sont écrits en C.

> On peut s'amuser à émuler ces anciennes machines avec le simulateur [SimH](http://simh.trailing-edge.com/).

## Introduction au langage C

C est un langage de programmation *généraliste*. 

C fournit les éléments de contrôle du flot d'éxecution nécessaires à la réalisation de programmes bien structurés: `if-else`, `switch`, `while`, `for`, `do`, `break`.

Les fonctions peuvent retourner des valeurs de type de base, des structures, des unions ou des pointeurs. N'importe quelle fonction peut être appelée de manière récursive. Les variables locales sont crées de manère automatiques. Un programme C peut être divisé en plusieurs fichiers source *compilés séparémment*. Les variables peuvent être internes à une fonction, externes à une fonction mais connue uniquement dans le fichier source où elle est déclarée, ou visible pour le programme entier.

Une *phase de préprocessing* réalise des substitutions de macro sur du *programme texte* (text program), l'inclusion d'autres fichiers sources et de la compilation conditionnelle.

C est un langage plutôt bas niveau. Cela signifie que le C manipule les mêmes objets que la plupart des ordinateurs : des caractères, des nombres et des adresses.

C ne fournit aucune instruction pour manipuler directement des objets composites comme des chaînes de caractères, des sets, des listes ou des tableaux.

C n'a pas de gestion automatique de la mémoire (garbage collector). C lui même ne fournit aucun moyen simple pour les entrées/sorties, il n'y a pas d'instructions READ ou WRITE, et aucune méthode d'accès au fichiers de manière native. Tous ces mécanismes de haut niveau doivent être fournis par des appels de fonction explicites. La plupart des implémentations du C fournissent une bibliothèque standard pour ces fonctions.

Le C offre uniquement un flot de control mono-threadé.

De garder le langage de si petite taille a des bénéfices. Comme C est petit, il peut être expliqué et appris rapidement. Un·e programmeur·se C peut raisonnablement envisager de connaître, comprendre et utiliser *tout* le langage.

Le C standardisé ANSI vient avec une bibliothèque de fonctions: des fonctions pour accéder à l'OS (par exemple pour lire et écrire des fichiers, allouer la mémoire, manipuler des chaînes de caractères, etc.). Une collection de headers standards fournit un accès uniforme à la déclaration de ces fonctions et des types de données qui les accompagnent. *Les programmes qui utilisent la librairie standard sont garantis de se comporter exactement de la même manière sur chaque système d'exploitation*. La librairie standard fournit une interface commune à tous les systèmes d'exploitations. La plupart de la bibliothèque standard est fondée sur la "standard I/O library" (stdio) du système UNIX.

## Chapitre 1 : tutoriel

# Références

- [The C Programming Language, 2nd edition](), de Brian W.Kernighan et Dennis M.Ritchie, 1988, aux éditions [Prentice Hall](https://fr.wikipedia.org/wiki/Prentice_Hall)