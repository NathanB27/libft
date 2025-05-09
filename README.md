# Libft

## Description

**Libft** est une bibliothèque standard personnalisée écrite en C dans le cadre du cursus de l'école 42. Ce projet vise à recréer des fonctions essentielles de la bibliothèque standard `libc`, ainsi qu'à ajouter des fonctionnalités supplémentaires pour faciliter le développement futur.

Cette bibliothèque est conçue pour être réutilisable dans d'autres projets C, et constitue une base solide pour comprendre les mécanismes internes de certaines fonctions standard.

## Objectifs pédagogiques

Le projet **libft** permet d’approfondir :
- La compréhension des concepts fondamentaux en C, comme les pointeurs, la gestion de la mémoire et les chaînes de caractères.
- La création et la structuration d’une bibliothèque réutilisable.
- L'implémentation de fonctions standards comme `strlen`, `strdup`, `memcpy`, ainsi que des fonctions supplémentaires pour manipuler des listes chaînées.

## Contenu

La bibliothèque contient :
- **Fonctions de manipulation de chaînes** : `ft_strlen`, `ft_strncmp`, `ft_strdup`, etc.
- **Fonctions de manipulation mémoire** : `ft_memset`, `ft_bzero`, `ft_memcpy`, etc.
- **Fonctions supplémentaires** : `ft_itoa`, `ft_split`, `ft_strjoin`, etc.
- **Manipulation de listes chaînées** : `ft_lstnew`, `ft_lstadd_front`, `ft_lstiter`, etc.

## Installation

Clonez ce repository et compilez la bibliothèque :

```bash
git clone git@github.com:NathanB27/libft.git
cd libft
make
```

Cela génère un fichier `libft.a` que vous pouvez inclure dans vos projets.

## Utilisation

Pour utiliser **libft** dans un projet :
1. Incluez `libft.h` dans vos fichiers C.
2. Compilez vos fichiers avec `libft.a` :
   ```bash
   gcc -Wall -Wextra -Werror main.c libft.a -o executable
   ```

## Structure

```
libft/
├── ft_atoi.c
├── ft_bzero.c
├── ft_calloc.c
├── ft_isalpha.c
├── ft_isdigit.c
├── ft_itoa.c
├── ft_split.c
├── ft_strjoin.c
├── ft_strlen.c
├── ft_memcpy.c
├── ft_memset.c
├── ft_lstadd_front.c
├── ft_lstnew.c
├── libft.h
├── Makefile
└── ...
```

## Auteur

**Nathan** - Étudiant à l'école 42.  
Projet réalisé dans le cadre du cursus **42**.

---
