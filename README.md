# wordle_c

> Wordle en ligne de commande, écrit en C.

![C](https://img.shields.io/badge/langage-C-blue) ![GCC](https://img.shields.io/badge/compilateur-GCC-orange)

---

## À propos

Une implémentation du célèbre jeu Wordle en C, jouable directement dans le terminal. Devinez un mot de 5 lettres en 6 essais avec des indices colorés.

---

## Installation
```bash
# Cloner le dépôt dans ~/Documents
cd ~/Documents
git clone https://github.com/Kramoth/wordle_c.git
```

## Compilation
```bash
cd ~/Documents/wordle_c
mkdir bin
gcc -o bin/main -I include/ src/getBDD.c src/main.c
```

## Lancer le jeu
```bash
cd ~/Documents/wordle_c
bin/main
```

---

## Comment jouer

Tapez un mot de **5 lettres** et appuyez sur `Entrée`. Vous avez **6 essais**.

| Couleur | Signification |
|---------|---------------|
| 🟩 Vert | Lettre correcte et bien placée |
| 🟨 Orange | Lettre présente mais mal positionnée |
| ⬜ Gris | Lettre absente du mot |

---

## Structure du projet
```
wordle_c/
├── include/
│   └── getBDD.h
├── src/
│   ├── main.c
│   └── getBDD.c
└── bin/
    └── main   # généré à la compilation
```
