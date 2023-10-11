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
- [x] ft_memcmp
- [x] ft_strlen
- [x] ft_strdup
- [x] ft_strcpy
- [x] ft_strncpy
- [x] ft_strcat
- [x] ft_strncat
- [x] ft_strlcat
- [x] ft_strchr
- [x] ft_strrchr
- [x] ft_strstr
- [x] ft_strnstr
- [x] ft_strcmp
- [x] ft_strncmp
- [x] ft_atoi 

    Cette fonction retourne la valeur numérique d'un nombre passé en paramètre.

    ```c
    int	ft_atoi(const char *str);
    ```

    ```c
    int number = ft_atoi("-42"); // number -> -42
    ```
- [x] ft_isalpha
- [x] ft_isdigit
- [x] ft_isalnum
- [x] ft_isascii
- [x] ft_isprint
- [x] ft_toupper
- [x] ft_tolower