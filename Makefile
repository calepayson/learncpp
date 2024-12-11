CC = g++

# For debugging
CFLAGS = -O0 -std=c++20 -pedantic-errors -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion -Werror

# Default target: show usage.
all:
	@echo "Usage:"
	@echo "  make path/to/file to compile and run."

%: %.cpp
	@echo "Compiling $< ..."
	@$(CC) $(CFLAGS) $< -o $@.out
	@echo ""
	@echo "Running $@.out ..."
	@./$@.out
	@echo ""
	@echo "Cleaning ..."
	@rm $@.out
	@echo ""
	@echo "Finished."
