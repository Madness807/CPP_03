# Nom de l'exécutable
NAME = ScavTrap

# Compilateur
CC = c++

# Flags de compilation
CFLAGS = -Wall -Wextra -Werror -std=c++98

# Fichiers sources
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp

# Règle par défaut
all: $(NAME)

# Règle pour construire l'exécutable
$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

# Règle pour nettoyer les fichiers compilés
clean:
	rm -f $(NAME)

# Règle pour recompiler le projet
re: clean all

# Règle pour éviter certains conflits de noms
.PHONY: all clean re