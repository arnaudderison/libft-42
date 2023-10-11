# Libft - 42 cursus (Projet en cours)

Bienvenue sur le dépôt de ma **`libft`** ! Cette bibliothèque est le résultat de nombreuses heures de travail dans le cadre du cursus de l'école 42. Elle regroupe une série de fonctions basiques en C qui me seront très utiles tout au long de ma formation.

#### Note importante : 
Je tiens à souligner que je suis fermement opposé à toute forme de triche. Si vous êtes étudiant à 42 ou dans une autre école, je vous encourage à comprendre chaque partie du code si vous décidez de vous en inspirer. Le copier-coller sans comprendre ne vous aidera pas à progresser. Apprendre, comprendre et progresser devraient toujours être vos priorités.

N'hésitez pas à parcourir le code, à le tester et à me faire part de vos commentaires ou suggestions. Bonne exploration !

# Docs

Au départ, il y a toutes les fonctions de la librairie standard de C :

- [x] ft_memset

    Cette fonction remplit la mémoire avec une constante de byte. Elle retourne un pointeur sur la mémoire de `s`.

    ```c
    void	*ft_memset(void *s, int c, size_t n);
    ```

- [x] ft_bzero
    
    Cette fonction efface les données de n octets de la mémoire commençant à l'emplacement de `s` en écrivant des zéros (`'\0'`) dans cette zone.

    ```c
    void	ft_bzero(void *s, size_t n);
    ``` 

- [x] ft_memcpy

    Cette fonction copie les éléments de la zone mémoire source vers la destination. Elle retourne un pointeur vers la zone mémoire de la destination.

    ```c
    void	*ft_memcpy(void *dest, const void *src, size_t n);
    ```

- [x] ft_memccpy

    Cette fonction copie les n premiers caractères de src vers dest. Elle s'arrête quand elle trouve c. Elle retourne le caractère après c ou `NULL` si c n'a pas été trouvé dans les n premiers caractères.

    ```c
    void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
    ```

- [x] ft_memmove

    Cette fonction copie la zone mémoire de src vers dest sur les n premiers octets en tenant compte des éventuels chevauchements.

    ```c
    void	*ft_memmove(void *dest, const void *src, size_t n);
    ```

    ###### Exemple: 
    ```c
    memory : | A | B | C | D | E | F | G | H | I | J |
    indices:   0   1   2   3   4   5   6   7   8   9
    ```
    Sans chevauchement:
    ```c
    ft_memmove(&memory[7], &memory[1], 3)

    //return value (dest) 
    //-> memory : | A | B | C | D | E | F | G | B | C | D |
         indices:   0   1   2   3   4   5   6   7   8   9    
    ```
    Avec chevauchement:
    ```c
    ft_memmove(&memory[2], &memory[1], 3)

    //return value (dest) 
    //-> memory : | A | B | B | C | D | F | G | B | C | D |
         indices:   0   1   2   3   4   5   6   7   8   9    
    ```

- [x] ft_memchr

    Cette fonction cherche un caractère c (pour un correct un octet) dans les n premier caratère. Si elle ne trouve pas c elle retourne `NULL` sinon elle retourne un pointer vers c.

    ```c
    void	*ft_memchr(const void *s, int c, size_t n);
    ```
- [x] ft_memcmp

    Cette fonction compare les n premier octets de deux blocs de mémoire. En générale on l'utilise pour comparer des chaines de caractères.

    - Si les **n** premiers octets sont identiques elle renvoie `0`.
    - Si **s1** est inférieurs à **s2** dans la tabla _ascii_ alors elle renvoie une value négative. 
    - Si **s1** est suppérieurs à **s2** dans la tabla _ascii_ alors elle renvoie une value positive. 

    ```c
    void	*ft_memchr(const void *s, int c, size_t n);
    ```
- [x] ft_strlen

    Cette fonction calcule la longueur d'une chaine de caratère. Elle retourne un entier positif qui correspond aux nombre de caractère de la chaine passé en paramètre. 
    
    ```c
    int	ft_strlen(const char *s);
    ``` 

- [x] ft_atoi 

    Cette fonction retourne la valeur numérique d'un nombre passé en paramètre.

    ```c
    int	ft_atoi(const char *str);
    ```

    ```c
    int number = ft_atoi("-42"); // number -> -42
    ```
- [x] ft_strdup

    Cette fonction crée une nouvelle chaîne de caractères en copiant la chaîne donnée en argument. Elle retourne un pointeur vers la nouvelle chaîne ou `NULL` en cas d'échec.

    ```c
    char	*ft_strdup(const char *s1);
    ```

- [x] ft_strcpy

    Cette fonction copie la chaîne source dans la chaîne destination. Elle retourne un pointeur vers la chaîne destination.

    ```c
    char	*ft_strcpy(char *dest, const char *src);
    ```

- [x] ft_strncpy

    Cette fonction copie au plus `n` caractères de la chaîne source vers la destination, et remplit avec des octets nuls si la taille de `src` est moins que `n`.

    ```c
    char	*ft_strncpy(char *dest, const char *src, size_t n);
    ```

- [x] ft_strcat

    Cette fonction concatène la chaîne `s2` à la fin de `s1`. Elle retourne `s1`.

    ```c
    char	*ft_strcat(char *s1, const char *s2);
    ```

- [x] ft_strncat

    Cette fonction concatène au plus `n` caractères de la chaîne `s2` à la fin de `s1`, en terminant `s1` avec un octet nul.

    ```c
    char	*ft_strncat(char *s1, const char *s2, size_t n);
    ```

- [x] ft_strlcat

    Cette fonction concatène les chaînes `s1` et `s2` en s'assurant de ne pas dépasser la taille totale `size`.

    ```c
    size_t	ft_strlcat(char *dst, const char *src, size_t size);
    ```

- [x] ft_strchr

    Cette fonction cherche le caractère `c` dans la chaîne `s`. Si elle le trouve, elle retourne un pointeur vers la première occurrence de `c`, sinon elle retourne `NULL`.

    ```c
    char	*ft_strchr(const char *s, int c);
    ```

- [x] ft_strrchr

    Cette fonction cherche le caractère `c` dans la chaîne `s`. Si elle le trouve, elle retourne un pointeur vers la dernière occurrence de `c`, sinon elle retourne `NULL`.

    ```c
    char	*ft_strrchr(const char *s, int c);
    ```

- [x] ft_strstr

    Cette fonction cherche la sous-chaîne `needle` dans la chaîne `haystack`. Si elle la trouve, elle retourne un pointeur vers le début de la sous-chaîne, sinon elle retourne `NULL`.

    ```c
    char	*ft_strstr(const char *haystack, const char *needle);
    ```

- [x] ft_strnstr

    Cette fonction cherche la sous-chaîne `needle` dans les `n` premiers caractères de la chaîne `haystack`. Si elle la trouve, elle retourne un pointeur vers le début de la sous-chaîne, sinon elle retourne `NULL`.

    ```c
    char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
    ```

- [x] ft_strcmp

    Cette fonction compare les chaînes `s1` et `s2`. Elle retourne un entier négatif, zéro ou positif si `s1` est respectivement inférieure, égale ou supérieure à `s2`.

    ```c
    int	ft_strcmp(const char *s1, const char *s2);
    ```

- [x] ft_strncmp

    Cette fonction compare au plus les `n` premiers caractères des chaînes `s1` et `s2`.

    ```c
    int	ft_strncmp(const char *s1, const char *s2, size_t n);
    ```

- [x] ft_isalpha

    Cette fonction vérifie si le caractère donné est une lettre alphabétique. Elle retourne une valeur non nulle si c'est le cas, sinon elle retourne 0.

    ```c
    int	ft_isalpha(int c);
    ```

- [x] ft_isdigit

    Cette fonction vérifie si le caractère donné est un chiffre. Elle retourne une valeur non nulle si c'est le cas, sinon elle retourne 0.

    ```c
    int	ft_isdigit(int c);
    ```

- [x] ft_isalnum

    Cette fonction vérifie si le caractère donné est un chiffre ou une lettre. Elle retourne une valeur non nulle si c'est le cas, sinon elle retourne 0.

    ```c
    int	ft_isalnum(int c);
    ```

- [x] ft_isascii

    Cette fonction vérifie si le caractère donné est un caractère ASCII valide (0 à 127 inclus). Elle retourne une valeur non nulle si c'est le cas, sinon elle retourne 0.

    ```c
    int	ft_isascii(int c);
    ```

- [x] ft_isprint

    Cette fonction vérifie si le caractère donné est un caractère imprimable, y compris l'espace. Elle retourne une valeur non nulle si c'est le cas, sinon elle retourne 0.

    ```c
    int	ft_isprint(int c);
    ```

- [x] ft_toupper

    Cette fonction convertit un caractère en majuscule si c'est une lettre minuscule. Sinon, elle retourne le caractère tel quel.

    ```c
    int	ft_toupper(int c);
    ```

- [x] ft_tolower

    Cette fonction convertit un caractère en minuscule si c'est une lettre majuscule. Sinon, elle retourne le caractère tel quel.

    ```c
    int	ft_tolower(int c);
    ```