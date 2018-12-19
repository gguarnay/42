# Libft - @42Born2Code

My implementation of some of the Standard C Library functions including some additional ones.
NOTE: this README.md is largely inspired by [@R4meau](https://github.com/R4meau/). So go check his [projects](https://github.com/R4meau/)!

## Table of Contents
* What is libft?
* What's in it?
* How does it work?
* How do I use the library?
* How do I test it? How do I test my own implementations?
   - To test the code in this repo
   - To test your own code
* Example usage

## What is libft?
[Libft]() is an individual project at [42](https://www.42.us.org/) that requires us to re-create some standard C library functions including some additional ones that can be used later to build a library of useful functions for the rest of the program.

Disclaimer: *Reinventing the wheel is bad, 42 makes us do this just so we can have a deeper understanding of data structures and basic algorithms. At 42 we're not allowed to use some standard libraries on our projects, so we have to keep growing this library with our own functions as we go farther in the program.* 

## What's in it?
As you can see from the [Project instructions], there are 3 sections:
 1. **Libc Functions:** standard C functions
 2. **Additional Functions:** functions 42 deems will be useful for later projects
 3. **Bonus Functions:** functions 42 deems will be useful for linked list manipulation
 
| Libc functions  | Additional functions | Bonus Functions |
| --------------- | -------------------- | --------------- |
| memset          | ft_memalloc          | ft_lstnew       |
| bzero           | ft_memdel            | ft_lstdelone    |
| memcpy          | ft_strnew            | ft_lstdel       |
| memccpy         | ft_strdel            | ft_lstadd       |
| memmove         | ft_strclr            | ft_lstiter      |
| memchr          | ft_striter           | ft_lstmap       |
| memcmp          | ft_striteri          |                 |
| strlen          | ft_strmap            |                 |
| strdup          | ft_strmapi           |                 |
| strcpy          | ft_strequ            |                 |
| strncpy         | ft_strnequ           |                 |
| strcat          | ft_strsub            |                 |
| strlcat         | ft_strjoin           |                 |
| strchr          | ft_strtrim           |                 |
| strrchr         | ft_strsplit          |                 |
| strstr          | ft_itoa              |                 |
| strnstr         | ft_putchar           |                 |
| strcmp          | ft_putstr            |                 |
| strncmp         | ft_putendl           |                 |
| atoi            | ft_putnbr            |                 |
| isalpha         | ft_putchar_fd        |                 |
| isdigit         | ft_putstr_fd         |                 |
| isalnum         | ft_putendl_fd        |                 |
| isascii         | ft_putnbr_fd         |                 |
| isprint         |                      |                 |
| toupper         |                      |                 |
| tolower         |                      |                 |

