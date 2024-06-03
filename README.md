# Projet_PAM_Boite_a_musique

Projet Boite à musique microC
Mini-projet : boîte à musique
e2i3 – Polytech Grenoble
Description du projet et principes de base
Objectif : l’objectif du projet est de réaliser une boite à musique
Aide :
– Un morceau de musique est représenté par un ensemble de notes
– À chaque note correspond une fréquence et une durée
– On utilisera le buzzer piloté par le canal 2 du timer TIM2 pour générer les notes audibles
Pour les non-musiciens, une note est caractérisée par sa fréquence. La fréquence du LA3 est fixée à 440 Hz. Le
LA3 appartient à l’octave 3. On passe d’un octave au suivant en multipliant (ou divisant) les fréquences par 2.
Par exemple le LA4 est fixé à 880 Hz, et le LA2 est fixé 220 Hz.
Il y a 12 demi-tons dans un octave, appelés en français :
DO, DO#, RE, RE#, M I, F A, F A#, SOL, SOL#, LA, LA#, SI
qui sont répartis
 géométriquement dans l’octave. On passe donc d’une note à la suivante en multipliant la plus
√
basse par 12 2 = 1, 05946. Ainsi la fréquence du LA3# (ou si bémol) est obtenue par
la3# = 440 × 1, 05946 = 466, 16 Hz
Chaque note possède une durée relative. Une note noire à une durée moitié d’une blanche, et double d’une
croche. La croche a une durée double d’une double croche. La ronde a une durée double de la blanche. Il n’y a
pas de valeur absolue de durée associée, mais on pourra prendre 500 ms comme durée pour une noire.
Le fichier musique.h contient la liste des demi-tons avec les fréquences associées à l’octave 3 et des coefficients
associés aux différentes durées possibles. Ce fichier contient aussi 2 morceaux de musique. Le premier est un
tableau contenant la gamme : DO RE MI FA SOL LA SI DO. Le 2ième est un morceau de musique à découvrir.
2
 Consignes
— Récupérez les fichiers qui se trouvent dans /home/e2i-2026/Partage/microC/BAM
Vous devez travailler en binôme. La notation prendra en compte la qualité du programme, sa simplicité, son
originalité (dans les fonctionnalités mais aussi dans sa mise en oeuvre), ainsi que les commentaires. En début
du fichier main.c, vous indiquerez en commentaires quelques lignes qui expliquent les fonctionnalités autres
que celles demandées dans l’énoncés qui viendront compléter votre mini-projet.
À la fin de la séance 6, vous placerez à la racine de votre compte, dans le répertoire projet_BAM les réponses
aux questions proposées en section 3, 4 et 5. Vous devez créer un répertoire separé pour chaque section (Q3,
Q4, Q5).
À la fin de la séance 7, vous placerez à la racine de votre compte, dans le répertoire projet_BAM/final
votre travail en vue de la notation.

S. Toru & L. Andrade & V. Isaac--Chassande
 
