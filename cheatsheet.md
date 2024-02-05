# Cheatsheet C

## Types de données

### Types de données primitifs

- `int` : entier signé
- `float` : nombre à virgule flottante
- `double`: nombre à virgule
- `char` : caractère
- `void` : vide

### Modificateurs de types

- `signed` : entier signé
- `unsigned` : entier non signé
- `short` : entier court
- `long` : entier long

## Opérateurs

- `+` : addition
- `-` : soustraction
- `*` : multiplication
- `/` : division
- `%` : modulo (reste de la division)
- `++` : incrémentation
- `--` : décrémentation
- `=` : affectation

## Structures de contrôle

### Boucles

#### Boucle `for`

```c
for (int i = 0; i < 10; i++) {
    // code
};
```

#### Boucle `while`

- ```while``` :
    ```c
    while (i < 10) {
        // code
    };
    ```


- ```do-while``` :
    ```c
    do  {
        // code
    } while (i < 10);
    ```

## Tables

Les tables en C permettent de stocker plusieurs valeurs de même type dans une structure de données linéaire.

### Déclaration d'une table

```c
int nom_table[taille];
```

## Structures

Les structures en C permettent de regrouper plusieurs variables de types différents sous un même nom.

### Déclaration d'une structure

```c
struct my_struct {
    int var1;
    char var2;
};
```

#### Avec ```typedef```


- Après la definition :
    ```c
    struct my_struct {
        int var1;
        char var2;
    };
    typedef struct my_struct name;
    ```

- En même temps que la definition :
    ```c
    typedef struct my_struct {
        int var1;
        char var2;
    } name ;
    ```


## Pointeur

### Déclaration d'un pointeur

```c
int var1 = 150;
int *p = &var1;
```

### 