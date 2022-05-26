#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "test.h"

/*
char *user_input() {
	int bytes = 0;
	int capacity = 50;
	char *buf = malloc(capacity);
	char c;

	while ((c = fgetc(stdin)) != '\n') {
		bytes++;
		buf = (bytes+1 >= capacity) ? realloc(buf, capacity *= 2) : buf;
		buf[bytes-1] = c;
	}

	buf[bytes] = 0;

	return buf;
}

int get_int_from_user() {
	char *str = user_input();
	int num = atoi(str);

	free(str);
	str = NULL;

	return num;
}

void prompt() {
	printf("\n********** WELCOME **********\n");
	printf("1) Play\n");
	printf("2) Quit\n");
	printf("> ");

	switch (get_int_from_user()) {
		case 1:
			prompt();
			break;

		case 2:
			printf("Goodbye!\n");
			exit(0);

		default:
			printf("\nInvalid entry - please try again\n");
			prompt();
	}
	else {
		Node *element = NULL;
		printf("\n----------------------------------------\n");
		printf("1) Print the BST\n");
		printf("2) Insert new value\n");
		printf("3) Delete value\n");
		printf("4) Search\n");
		printf("5) Delete the BST\n");
		printf("6) Exit\n");
		printf("> ");

		switch (get_int_from_user()) {
			case 1:
				printf("\nBINARY SEARCH TREE (BST):\n");
				print_tree(root);
				prompt(root);

			case 2:
				printf("Value: ");
				element = insert_value(&root, get_int_from_user());
				if (element == NULL) {
					printf("Value already exists\n");
				}
				prompt(root);

			case 3:
				printf("Value to delete: ");
				root = delete_value(root, get_int_from_user());
				prompt(root);

			case 4:
				printf("Value to find: ");
				element = find_value(root, get_int_from_user());
				if (element == NULL) {
					printf("Value not found\n");
					prompt(root);
				}
				printf("Value found!\n");
				prompt(root);

			case 5:
				root = delete_tree(root);
				printf("Tree deleted!\n");
				prompt(root);

			case 6:
				root = delete_tree(root);
				printf("Goodbye!\n");
				exit(0);

			default:
				printf("\nInvalid entry - please try again\n");
				prompt(root);
		}
	}
}
*/
