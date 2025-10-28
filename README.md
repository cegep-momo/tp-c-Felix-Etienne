# Construire le projet
Vous pouvez utiliser un dev container de base C++ de VScode.
Le projet utilise cmake, pensez à l'inclure dans votre dev container.

Voici les lignes de commandes pour compiler le projet:
```
$ mkdir build
$ cd build
$ cmake ..
$ make
```

# Répertoire data

Il contient 2 fichiers `books.txt`et `users.txt` que vous pouvez utilisez pour tester votre code.
Pour ca il suffit de les copiers dans le repertoire `build` avec l'application `bibliotheque`

Ajout de la Confirmation avant suppression de livres.

Tri des résultats par titre, auteur pour l’affichage (utilisation de la fonction de tri de la STL).

# Veille technologique

Expliquez en détails une fonctionnalité / notion dans le code que ne nous avons pas ou peu vu en cours :

    - Ecrire et lire un fichier .txt (sérialiser les objets en lignes délimitées et lire ligne par ligne)

Proposez une solution plus adaptée pour la gestion de bibliothèque et faisant appel éventuellement à une technologie autre que le C++, et expliquez comment vous interfaceriez ça avec le C++. Pensez au futur de cette bibliothèque à Alexandrie qui pourrait éventuellement contenir des millions de livres :

    - L'ajout d'une base de données (MySql/MongoDB) pour une gestion plus rapide et efficase. Pour interfacer via driver C++ (libpqxx/mysql-connector) ou via API REST. Permet recherches rapides et une meilleur securité.