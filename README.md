# CPP Module 01
**42 School C++ Grade**

Gestion de la mémoire, pointeurs, références et introduction aux concepts avancés de C++.

## Exercises

### Exercise 00: BraiiiiiiinnnzzzZ
Création et destruction de zombies avec allocation dynamique et automatique.

**But :** Comprendre l'allocation mémoire (stack vs heap) et la gestion des objets

**Méthodes utilisées :**
- `new` et `delete` pour l'allocation dynamique
- Constructeurs avec paramètres
- Destructeurs pour le nettoyage automatique
- Fonctions `newZombie()` et `randomChump()`

### Exercise 01: Moar brainz!
Création d'une horde de zombies avec allocation d'un tableau d'objets.

**But :** Maîtriser l'allocation de tableaux d'objets et les constructeurs par défaut

**Méthodes utilisées :**
- `new[]` et `delete[]` pour les tableaux
- Constructeur par défaut et avec paramètres
- Méthode `setName()` pour initialiser après création
- Fonction `zombieHorde()` retournant un tableau

**Concepts appris :**
- Différence entre allocation simple et tableau
- Constructeurs multiples (surcharge)
- Gestion mémoire des tableaux d'objets

### Exercise 02: HI THIS IS BRAIN
Démonstration des différences entre pointeurs et références.

**But :** Comprendre les pointeurs, références et leurs adresses mémoire

**Méthodes utilisées :**
- Déclaration de pointeurs (`std::string*`)
- Déclaration de références (`std::string&`)
- Opérateur d'adresse (`&`) et de déréférencement (`*`)
- Affichage des adresses et valeurs

**Concepts appris :**
- Références comme alias (pas de nouvelle allocation)
- Pointeurs stockent des adresses
- Différences d'utilisation et de syntaxe

### Exercise 03: Unnecessary violence
Système de combat avec armes, utilisant références et pointeurs selon le contexte.

**But :** Choisir entre références et pointeurs selon les besoins

**Méthodes utilisées :**
- Classe `Weapon` avec getters/setters
- `HumanA` avec référence (arme obligatoire)
- `HumanB` avec pointeur (arme optionnelle)
- Méthodes `const` pour les getters

**Concepts appris :**
- Références pour objets toujours présents
- Pointeurs pour objets optionnels
- Retour par référence const (`const std::string&`)

### Exercise 04: Sed is for losers
Remplacement de chaînes dans un fichier, équivalent de la commande `sed`.

**But :** Manipulation de fichiers et de chaînes de caractères

**Méthodes utilisées :**
- `std::ifstream` pour la lecture
- `std::ofstream` pour l'écriture
- `std::string::find()` pour localiser
- `std::string::append()` pour construire
- `std::getline()` pour lire ligne par ligne

**Concepts appris :**
- Gestion des flux de fichiers
- Algorithmes de recherche et remplacement
- Validation d'entrée (fichier vide, inexistant)

### Exercise 05: Harl 2.0
Système de logging avec pointeurs sur méthodes membres.

**But :** Utiliser les pointeurs sur fonctions membres et typedef

**Méthodes utilisées :**
- `typedef` pour simplifier la syntaxe
- Pointeurs sur méthodes membres (`void (Harl::*)()`)
- Tableau de pointeurs sur fonctions
- Appel indirect de méthodes

**Concepts appris :**
- Pointeurs sur méthodes membres (syntaxe complexe)
- Typedef pour améliorer la lisibilité
- Dispatch dynamique sans héritage
- Architecture modulaire avec callbacks