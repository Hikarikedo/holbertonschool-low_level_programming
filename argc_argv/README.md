argc (Argument Count)
Type: int
Purpose: It holds the number of command-line arguments passed to the program, including the program's name itself.
Explanation: argc counts how many arguments were passed when the program is run. This number is always at least 1, because the first argument is the name of the program itself.

argv (Argument Vector)
Type: char *argv[] (or char **argv)
Purpose: It is an array of strings (character arrays) representing the actual command-line arguments.
Explanation: argv is an array of pointers to char. Each element in argv is a string (a null-terminated character array), and each string corresponds to one argument passed on the command line. argv[0] is typically the name of the program, and the rest are the arguments passed by the user.
