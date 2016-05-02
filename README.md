# Libasm

The libasm project aims to code a mini library in ASM . Recode some basic functions of the libC to generate a library. It helps to be familiar with the language syntax , the operation of
stack, but also the behavior of the compiler.


## Summary
 1. [Makefile](#makefile)
 2. [Function list](#list)


## <a name="makefile">Makefile</a>

| Commande       	|  Actions 	|
|----------------	|----------	|
| `make`		| Compile all .s and create an executable 'libfts.a'  	|
| `make clean`		| Delete all .o.  	|
| `make flcean`  	| Delete all .o and executable 'libfts.a'.  	|
| `make re` 	 	| Execute fclean and make.  	|
| `make test`		| Execute testing of the library 	|
| `make bonus`		| Execute bonus functions 	|

## <a name="list">Function list</a>

* [memset](http://linux.die.net/man/3/memset)
* [bzero](http://linux.die.net/man/3/bzero)
* [memcpy](http://linux.die.net/man/3/memcpy)
* [isalpha](http://linux.die.net/man/3/isalpha)
* [strcat](http://linux.die.net/man/3/strcat)
* [isdigit](http://linux.die.net/man/3/isdigit)
* [isalnum](http://linux.die.net/man/3/isalnum)
* [isascii](http://linux.die.net/man/3/isascii)
* [isprint](http://linux.die.net/man/3/isprint)
* [toupper](http://linux.die.net/man/3/toupper)
* [tolower](http://linux.die.net/man/3/tolower)
* [strlen](http://linux.die.net/man/3/strlen)
* [strdup](http://linux.die.net/man/3/strdup)
* [puts](http://linux.die.net/man/3/puts)


Bonus:
* cat : Displays the parameter contained in the file
* putstr : Prints string without '\n'
* putstr_cyan : Prints in cyan
* putstr_fd : Prints on the selected file descriptor
