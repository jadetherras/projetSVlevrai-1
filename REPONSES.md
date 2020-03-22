#Projet programmation orientée objet (SSV)

##REPONSES du groupe *N* (*Reibel Mathieu* & *Therras Jade*) 

*************************************************
##Q1.1

-on utilise les fonctions contains() et isColliding() pour realiser les traitements des operateurs, afin d'eviter la duplication de code relative à ces fonctionnalités. On a déjà fait une surcharge de fonction pour l'opérateur >.

*************************************************
##Q1.2


-L'operateur << est externe, il n'y aurait pas de sens d'écrire out.operator<<(class) car cela demanderait de modifier la class de out.
Les operateur =, > et & definit entre deux circularBody sont en internes, puisqu'ils demandent de conparer les éléments de différentes instances d'une même classe. On préserve ainsi l'encapsulation.
Pour l'opérateur > entre un circularBody et un Vec2d, on compare des types différents donc définir en interne n'aurait pas de sens même si cela reste possible, on définit donc en externe.

*************************************************
##Q1.3


-La plupart des gros objets (CircularBody et Vec2d) passent par référence constante, sauf quand il doivent être modifiés (on enlève le const pour les set). Un passage par valeur fait une copie lourde, les minimiser permet une optimisation du programme.
pour l'operateur > défini en externe, on est obligé de faire une copie puisque l'acces aux méthodes donne la posibiliter de modifier les accès privés.

*************************************************
##Q1.4


-De manière générale, on recherche les méthodes ne devant modifier aucun argument, les prédicats, comme les méthodes get dont le rôle est de retourner les attributs, les méthodes de contains et isColliding.

*************************************************
##Q2.1

-Puisque qu'une boite de Pétri EST un objet circulaire, on fait en sorte que la classe PetriDish hérite de la classe CircularBody. Ainsi, PetriDish est une sous-classe de CircularBody.

*************************************************
##Q2.2

-La fonction addBacterium et addNutriment retournent des booléens pour savoir si l'ajout de bactéries et nutiments ont été réalisés avec succès. Quant à la fonction drawOn, elle dessine la boîte de Pétri. Ces trois fonctions ne modifient donc pas les attributs de la classe PetriDish : ce sont des prédicats.

*************************************************
##Q2.3

-Pour éviter la copie d'une boite de Pétri, on agit sur le constructeur de copie en écrivant la ligne suivante : "PetriDish (const PetriDish& Petri)=delete" qui interdit l'initialisation d'une boîte de Petri par copie d'une autre. Ensuite, on interdit l'affectation en agissant sur l'opération "=" via cette ligne "PetriDish& operator=(const PetriDish& Petri)=delete".

*************************************************
##Q2.4

-Puisqu'il est absurde de faire vivre des bactéries et laisser des nutriments sans boîte, il est indispensable que l'effacement de la boîte de Pétri implique celui des bactérie et des nutiments.
Ainsi, dans le codage du destructeur de la classe PetriDish, nous devons effacer les tableaux de pointeurs "bacteries" et "nutriments" en utilisant la méthode "reset"

*************************************************
##Q2.5
-La méthode Lab::drawOn permet de dessiner le support avec sa boîte de Pétri caractéristique donc son corps est un appel de fonction de la méthode drawOn de la boîte de Pétri rattaché à ce Laboratoire : PetriDish::drawOn.
La méthode Lab::update permet de faire évoluer le support avec sa boîte de Pétri caractéristique en fonction tu temps. Ainsi le corps de cette fonction est un appel de fonction de la méthode update de la boîte de Pétri rattaché à ce Laboratoire : PetriDish::update.

