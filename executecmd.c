#include "main.h"
/**
 * executecmd - ........
 * @argv: ...
 * Return: ....
 */

void executecmd(char **argv)
{
	char *command = NULL, *actual_command = NULL;

	if (argv)
	{
		/* get the command */
		command = argv[0];

		/* generate the path to this command before passing it to execve */
		actual_command = use_location(command);

		/* execute the actual command with execve */
		if (execve(actual_command, argv, NULL) == -1)
		{
			perror("Error:");
		}
	}

}
