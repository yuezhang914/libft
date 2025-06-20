# Libft

This repository contains my implementation of **libft**, a foundational C library developed as part of the 42 school curriculum.

## 🧩 About the Project

 It reimplements essential standard C library functions and includes additional utility functions to use in future C projects. I added an edition that check pointers first to prevent any safety problems when used in other project.

- ✅ 100% written in C
- ✅ Norm-compliant
- ✅ Includes Makefile with `all`, `clean`, `fclean`, `re`, and `bonus` rules

📄 Based on the official [libft subject](./Libft.pdf)


## 🔧 Build Instructions

To build the library:

make # builds libft.a using mandatory files

make bonus # includes *_bonus.c functions

make clean # removes object files

make fclean # removes object files and libft.a

make re # fclean + make


## ✅ Implemented Functions

Part 1 – Libc Reimplementation
Functions like:
ft_isalpha, ft_strlen, ft_memset, ft_strncmp, ft_atoi, ft_calloc, ft_strdup, ...

Part 2 – Additional Utilities
Includes:
ft_substr, ft_strjoin, ft_strtrim, ft_split, ft_itoa, ft_strmapi, ft_striteri, ...

Bonus – Linked List Tools
Includes:
ft_lstnew, ft_lstadd_back, ft_lstsize, ft_lstlast, ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap

## 📁 Project Structure

```bash
.
├── libft-origin/         # The required functions for the official project (ft_*.c/.h)
├── test/    # Contains main() test versions of each function for easier debugging
├── libft/    # Check pointers first to prevent any safety problems when used in other project
├── Libft.pdf      # The official 42 project subject
├── Makefile       # Builds libft.a and supports bonus rules
└── README.md      # You are here
