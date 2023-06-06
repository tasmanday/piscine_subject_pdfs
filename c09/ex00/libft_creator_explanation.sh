cc -c -Wall -Wextra -Werror *.c     # compiles all c files in the current directory
ar rcs libft.a *.o                  # ar creates an archive (a single file that holds other files in a structure that makes it possible to retrieve the original individual files), rcs are options for the ar command, r replaces older files with newer ones, c creates a new archive it doesn't exist, s sorts the archive by writing an object-file index into the archive
rm -rf *.o                          # removes all .o files in the current directory, -r is the recursive flag so that rm removes directories and their contents, -f is the force flag
# echo "successful"                 # prints a success message in the terminal if the script runs correctly