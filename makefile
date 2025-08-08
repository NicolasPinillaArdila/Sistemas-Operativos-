# Nombre del ejecutable
TARGET = programa

# Compilador
CC = gcc

# Flags de compilación
CFLAGS = -Wall -Wextra -std=c11

# Archivos fuente y objetos
SRC = main.c funciones.c
OBJ = $(SRC:.c=.o)

# Regla principal
all: $(TARGET)

# Enlazado
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

# Compilación de cada .c a .o
%.o: %.c funciones.h
	$(CC) $(CFLAGS) -c $< -o $@

# Limpieza de archivos generados
clean:
	rm -f $(OBJ) $(TARGET)