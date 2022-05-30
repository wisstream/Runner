# Runner

## L'objectif du projet

Au cours de ce projet nous avons du créer un jeu à l'aide la technologie SDL2 en C.
Le résultat est censé se présenter sous la forme d'une fenêtre dont on aura prédéterminé les paramètres graphiques
tels que la longueur, la hauteur ou encore son nom.

Au sein de cette fenêtre nous aurons notre jeu qui consistera en un endless Runner Game en 2D, globalament un personnage qui se déplace dans la fenêtre en question.

## Package installation

>The code

```` bash
#!/bin/bash
sudo apt update && sudo apt upgrade
sudo apt-get install libsdl2-dev libsdl2-image-dev -y
sudo apt-get install gcc
````
Cette partie du code sert à installer tout ce dont on aura besoin dans le reste du projet.  
La première ligne sert à tenir à jour tous les packages de notre debian.
Ensuite on a deux librairies de sdl2 à installer ainsi que gcc l'outil de compilation du code.
