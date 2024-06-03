Voici une version organisée de votre README pour le projet "Projet_PAM_Boite_a_musique":

---

# Projet_PAM_Boite_a_musique

## Description du Projet

Projet Boite à musique microC
Mini-projet : boîte à musique
e2i3 – Polytech Grenoble

### Objectif
L'objectif du projet est de réaliser une boîte à musique.

### Principes de Base
- Un morceau de musique est représenté par un ensemble de notes.
- À chaque note correspond une fréquence et une durée.
- Utilisation du buzzer piloté par le canal 2 du timer TIM2 pour générer les notes audibles.

### Notes et Fréquences
Pour les non-musiciens, une note est caractérisée par sa fréquence. La fréquence du LA3 est fixée à 440 Hz. Le LA3 appartient à l’octave 3. On passe d’un octave au suivant en multipliant (ou divisant) les fréquences par 2. Par exemple, le LA4 est à 880 Hz et le LA2 est à 220 Hz.

#### Demi-tons dans un Octave
Il y a 12 demi-tons dans un octave, appelés en français :
DO, DO#, RE, RE#, MI, FA, FA#, SOL, SOL#, LA, LA#, SI

Les fréquences des notes sont réparties géométriquement dans l’octave. On passe d’une note à la suivante en multipliant la plus basse par \( \sqrt[12]{2} = 1,05946 \). Par exemple, la fréquence du LA3# (ou si bémol) est obtenue par:
\[ LA3\# = 440 \times 1,05946 = 466,16 \text{ Hz} \]

### Durées des Notes
Chaque note possède une durée relative :
- Une noire a une durée moitié d’une blanche, et double d’une croche.
- Une croche a une durée double d’une double croche.
- Une ronde a une durée double d’une blanche.

On peut prendre 500 ms comme durée pour une noire.

### Fichier `musique.h`
Ce fichier contient :
- La liste des demi-tons avec les fréquences associées à l’octave 3.
- Les coefficients associés aux différentes durées possibles.
- Deux morceaux de musique : 
  - Un tableau contenant la gamme : DO RE MI FA SOL LA SI DO.
  - Un morceau de musique à découvrir.

## Consignes

### Récupération des Fichiers
Récupérez les fichiers dans `/home/e2i-2026/Partage/microC/BAM`.

### Travail en Binôme
Vous devez travailler en binôme. La notation prendra en compte :
- La qualité du programme
- Sa simplicité
- Son originalité (fonctionnalités et mise en oeuvre)
- Les commentaires

En début du fichier `main.c`, indiquez en commentaires quelques lignes expliquant les fonctionnalités autres que celles demandées dans l’énoncé.

### Livraison des Travaux
- **Séance 6**: Placez dans le répertoire `projet_BAM` les réponses aux questions des sections 3, 4 et 5. Créez un répertoire séparé pour chaque section (`Q3`, `Q4`, `Q5`).
- **Séance 7**: Placez dans le répertoire `projet_BAM/final` votre travail pour la notation.

---

_S. Toru, L. Andrade, V. Isaac-Chassande_
