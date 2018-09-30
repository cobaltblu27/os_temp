#ifndef TEST_PTREE_H
#define TEST_PTREE_H

#include <ctype.h> /* for is_digit method */

#define DEFAULT_NR_ARG 100 /* Default nr argument parament */



/* Prints all the processes in the prinfo array */
static void print_tree(struct prinfo *tree, const int size);

/* Print process details in the given prinfo. Count is the depth
 * to indent the print output.
 */
static void print_prinfo(int count, struct prinfo p);
/* Determines if given string is a number or not. Return 1 if true 0 if false*/
static int is_number(char *string);
#endif

