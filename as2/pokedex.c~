// Assignment 2 19T1 COMP1511: Pokedex
// pokedex.c
//
// This program was written by Zixuan Guo (z5173593)
// on 18-04-2019
//
// Version 1.0.0: Assignment released.
// Version 1.0.1: Minor clarifications about `struct pokenode`.

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// Add any extra #includes your code needs here.
//

// But note you are not permitted to use functions from string.h
// so do not #include <string.h>

#include "pokedex.h"

// Add your own #defines here.
#define TRUE 1
#define FALSE 0

// Note you are not permitted to use arrays in struct pokedex,
// you must use a linked list.
//
// You are also not permitted to use arrays in any of the functions
// below.
//
// The only exception is that char arrays are permitted for
// search_pokemon and functions it may call.
//
// You will need to add fields to struct pokedex.
// You may change or delete the head field.

struct pokedex {
    struct pokenode *head;
    struct pokenode *curr;
};

typedef struct pokenode {
    struct pokenode *next;
    Pokemon         pokemon;
    int             found;
    struct pokenode *evolve;
}Node;

// You don't have to use the provided struct pokenode, you are free to
// make your own struct instead.
// If you use the provided struct pokenode, you will need to add fields
// to it to store other information.


// Add any other structs you define here.


// Add prototypes for any extra functions you create here.


// You need to implement the following 20 functions.
// In other words, replace the lines calling fprintf & exit with your code.
// You can find descriptions of what each function should do in pokedex.h

// Create a new Pokedex and return a pointer to it.
// The pointer is to a malloced piece of memory, and it is the caller's
// responsibility to call 'destroy_pokedex' to free that memory.
Pokedex new_pokedex(void) {
    Pokedex new_pokedex = malloc(sizeof (struct pokedex));
    assert(new_pokedex != NULL);
    // add your own code here

    new_pokedex->head = NULL;
    new_pokedex->curr = NULL;
    // new_pokedex->tail = new_pokedex->head;
    return new_pokedex;
}

////////////////////////////////////////////////////////////////////////
//                         Stage 1 Functions                          //
////////////////////////////////////////////////////////////////////////

// Add a new Pokemon to the Pokedex.
// /////////command 'a'//////////
void add_pokemon(Pokedex pokedex, Pokemon pokemon) {
    // fprintf(stderr, "exiting because you have not implemented the add_pokemon function in pokedex.c\n");
    // exit(1);

    Node *new = malloc(sizeof(Node));
    // check if the memory is allocated successfully
    if (new == NULL) {
        printf("Malloc failed, out of memory\n");
        exit(1);
    }
    // initial value of the new node
    new->next = NULL;
    new->pokemon = pokemon;
    new->found = FALSE;
    new->evolve = NULL;
    
    // if there's no pokemon in the pokedex
    if (pokedex->head == NULL) {
        pokedex->head = new;
        pokedex->curr = new;
    } else {
        for (Node *curr = pokedex->head; curr != NULL; curr = curr->next) { 
            // If there is already a Pokemon in the Pokedex with the same id
            // as this Pokemon, it should print error message
            if (pokemon_id(curr->pokemon) == pokemon_id(pokemon)) {
                printf("There's already a Pokemon with pokemon_id %d!\n", 
                        pokemon_id(pokemon));
                exit(1);
            }
            // put the new pokemon after the last pekemon in the pokedex
            if (curr->next == NULL) {
                curr->next = new;
                break;
            }
        }
    }
}


// Print out the details of the currently selected Pokemon
// If the pokemon has been found, print its details
// If th pokemon has not been found, only print its ID
// /////////command 'd'//////////
void detail_pokemon(Pokedex pokedex) {
    // fprintf(stderr, "exiting because you have not implemented the detail_pokemon function in pokedex.c\n");
    // exit(1);

    Node *curr = pokedex->curr;
    // if no pokemon in the pokedex
    if (curr == NULL) {
        return;
    }

    printf("Id: %03d\n", pokemon_id(curr->pokemon));
    pokemon_type first = pokemon_first_type(curr->pokemon);
    pokemon_type second = pokemon_second_type(curr->pokemon);

    // if it has been found:
    if (curr->found == TRUE) {
        printf("Name: %s\n", pokemon_name(curr->pokemon));
        printf("Height: %.1fm\n", pokemon_height(curr->pokemon));
        printf("Weight: %.1fkg\n", pokemon_weight(curr->pokemon));
        
        // when the pokemon only has one type
        // the 'None' should not be printed
        if (second != 0) {
            printf("Type: %s %s\n", 
                pokemon_type_to_string(first), pokemon_type_to_string(second));
        } else if (second == 0) {
            printf("Type: %s\n", pokemon_type_to_string(first));
        } 
        
    // if it has not been found:
    } else if (curr->found == FALSE) {
        char *new = pokemon_name(curr->pokemon);
        printf("Name: ");
        int counter = 0;
        while (new[counter] != '\0') {
            printf("*");
            counter++;
        }
        printf("\n");
        printf("Height: --\n");
        printf("Weight: --\n");
        printf("Type: --\n");
    }
}


// Return the currently selected Pokemon
Pokemon get_current_pokemon(Pokedex pokedex) {
    // fprintf(stderr, "exiting because you have not implemented the get_current_pokemon function in pokedex.c\n");
    // exit(1);

    
    Pokemon current = pokedex->curr->pokemon;
    return current;

}


// /////////command 'f'//////////
// Sets the currently selected Pokemon to be 'found'
void find_current_pokemon(Pokedex pokedex) {
    // fprintf(stderr, "exiting because you have not implemented the find_current_pokemon function in pokedex.c\n");
    // exit(1);

    // for test
    // printf("testing.......\n");

    // Node *curr = pokedex->curr;
    if (pokedex->curr == NULL) {
        return;
    } else {
        pokedex->curr->found = TRUE;
    }
    
}


// Print out all of the Pokemon in the Pokedex
// If the pokemon has been found, it should have it's name
// If the pokemon has not been found, it should print '*'
// /////////command 'p'//////////
void print_pokemon(Pokedex pokedex) {
    // fprintf(stderr, "exiting because you have not implemented the print_pokemon function in pokedex.c\n");
    // exit(1)
    
    for (Node *curr = pokedex->head; curr != NULL; curr = curr->next) {
        // if it is the current selected pokemon
        if (curr != pokedex->curr) {
            if (curr->found == TRUE) {
                printf("    #%03d: %s\n", pokemon_id(curr->pokemon), 
                        pokemon_name(curr->pokemon));
            } else if (curr->found == FALSE) {
                printf("    #%03d: ", pokemon_id(curr->pokemon));
                char *new = pokemon_name(curr->pokemon);
                int counter = 0;
                while (new[counter] != '\0') {
                    printf("*");
                    counter++;
                }
                printf("\n");
            }
        }
        // if it is not the current selected pokemon
        else {
            if (curr->found == TRUE) {
                printf("--> #%03d: %s\n", 
                       pokemon_id(curr->pokemon), pokemon_name(curr->pokemon));
            } else if (curr->found == FALSE) {
                printf("--> #%03d: ", pokemon_id(curr->pokemon));
                char *new = pokemon_name(curr->pokemon);
                int counter = 0;
                while (new[counter] != '\0') {
                    printf("*");
                    counter++;
                }
                printf("\n");
            }
        }
    }
}

////////////////////////////////////////////////////////////////////////
//                         Stage 2 Functions                          //
////////////////////////////////////////////////////////////////////////


// move the current selected pokemon to the next one
// /////////command '>'//////////
void next_pokemon(Pokedex pokedex) {
    // fprintf(stderr, "exiting because you have not implemented the next_pokemon function in pokedex.c\n");
    // exit(1);
    
    // if there's no pokemon in the pokedex
    if (pokedex->head == NULL) {
        return;
    }
    
    // if the pokedex is not NULL
    if (pokedex->curr->next != NULL) {
        pokedex->curr = pokedex->curr->next;
        return;
    }
}


// move the current selected pokemon to the previous one
// /////////command '<'//////////
void prev_pokemon(Pokedex pokedex) {
    // fprintf(stderr, "exiting because you have not implemented the prev_pokemon function in pokedex.c\n");
    // exit(1);
    for (Node *pre = pokedex->head; pre != pokedex->curr; pre = pre->next) {
        if (pre->next == pokedex->curr) {
            pokedex->curr = pre;
            break;
        }
    }
}


// move the current selected pokemon to a selected one
// /////////command 'm [pokemon_id]'//////////
void change_current_pokemon(Pokedex pokedex, int poke_id) {
    // fprintf(stderr, "exiting because you have not implemented the change_current_pokemon function in pokedex.c\n");
    // exit(1);
    for (Node *current = pokedex->head; current != NULL; current = current->next) {
        if (pokemon_id(current->pokemon) == poke_id) {
            pokedex->curr = current;
            break;
        }
    }
}

// remove the current pokemon
// /////////command 'r'//////////
// the new current should become the next pokemon
void remove_pokemon(Pokedex pokedex) {
    // fprintf(stderr, "exiting because you have not implemented the remove_pokemon function in pokedex.c\n");
    // exit(1);

    // if there's no pokemon, return NULL
    if (pokedex->head == NULL) {
        return;
    }

    // when the current selected is the first pokemon
    if (pokedex->head == pokedex->curr) {
        Node *curre = pokedex->head->next;
        Node *fre = pokedex->head;
        destroy_pokemon(fre->pokemon);
        free(fre);
        pokedex->head = curre;
        pokedex->curr = pokedex->head;
        return;
    }

    // if the current selected is in the middle or the end
    Node *pre = pokedex->head;
    while (pre->next != pokedex->curr) {
        pre = pre->next;
    }    
    // free last node 
    if (pre->next->next == NULL) {
        pokedex->curr = pre;
        destroy_pokemon(pre->next->pokemon);
        free(pre->next);
        pre->next = NULL;
    // in the middle    
    } else {
        pre->next = pre->next->next;
        destroy_pokemon(pokedex->curr->pokemon);
        Node *copy = pokedex->curr;
        free(copy);
        pokedex->curr = pre->next;
    } 
}

// destroy
void destroy_pokedex(Pokedex pokedex) {
    // fprintf(stderr, "exiting because you have not implemented the destroy_pokedex function in pokedex.c\n");
    // exit(1);
    
    Node *curr = pokedex->head;
    while (curr != NULL) {
        Node *fre = curr;
        curr = curr->next;
        destroy_pokemon(fre->pokemon);
        free(fre);
    }
    free(pokedex);
}

////////////////////////////////////////////////////////////////////////
//                         Stage 3 Functions                          //
////////////////////////////////////////////////////////////////////////


// generate a random number between 0 and `factor - 1`, represents a pokemon_id
// seed
//
// range of numbers that can be choose
// factor
//
// it will be repeated until 'how_many' pokemon have been found
// how_many
//
// ///////////// command 'x seed factor how-many' /////////////////////
void go_exploring(Pokedex pokedex, int seed, int factor, int how_many) {
    // fprintf(stderr, "exiting because you have not implemented the go_exploring function in pokedex.c\n");
    // exit(1);

    // Before use the random number generrater 'rand()'
    // we have to check the factor' not equals to zero
    int x;
    srand(seed);
    if (factor != 0) {
        
        x = rand() % factor;
    } else {
        printf("There aren't any Pokemon to find with pokemon_id");
        printf(" between 0 and (%d - 1)!\n", factor);
        exit(1);
    }
    
    int counter = 0;
    Node *f = pokedex->head;
    if (f == NULL) {
        printf("There aren't any Pokemon to find with pokemon_id");
        printf("between 0 and (%d - 1)!\n", factor);
        exit(1);
    } else {
        while (counter < how_many) {
            f = pokedex->head;
            x = rand() % factor;
            while (f != NULL) {
                if (pokemon_id(f->pokemon) == x) {
                    f->found = TRUE;
                    counter++;
                    break; 
                }
                f = f->next;
            }
        }
    }
}


// return the number of pokemon in the pokedex which has been found
// ///////// command 'c'/////////
int count_found_pokemon(Pokedex pokedex) {
    // fprintf(stderr, "exiting because you have not implemented the count_found_pokemon function in pokedex.c\n");
    // exit(1);

    int count_found = 0;
    Node *curre = pokedex->head;
    // Node *curr = pokedex->curr;
    while (curre != NULL) {
        if (curre->found == TRUE) {
            count_found++;
        }
        curre = curre->next;
    }
    return count_found;
}


// return the number of pokemon in the pokedex whether or not it has been found
// /////////'t'//////////
int count_total_pokemon(Pokedex pokedex) {
    //fprintf(stderr, "exiting because you have not implemented the count_total_pokemon function in pokedex.c\n");
    //exit(1);

    int count_total = 0;
    Node *curre = pokedex->head;
    while (curre != NULL) {
        count_total++;
        curre = curre->next;
    }
    return count_total;
}

////////////////////////////////////////////////////////////////////////
//                         Stage 4 Functions                          //
////////////////////////////////////////////////////////////////////////


// 'from_id' can evolve into the Pokemon with 'to_id'
// every Pokemon can only evolve into one other Pokemon
// function is called again with the same `from_id`, 
// the new `to_id` will override the previous evolution information.
// no ID `from_id` or `to_id`, or if the provided id are the same, print error message
// /////////////'e [IDa] [IDb]'////////////
void add_pokemon_evolution(Pokedex pokedex, int from_id, int to_id) {
    // fprintf(stderr, "exiting because you have not implemented the add_pokemon_evolution function in pokedex.c\n");
    // exit(1);
    
    if (from_id == to_id) {
        printf("Invalid Pokemon Evolution!\n");
        exit(1);
    }
    
    // to check if from_id and to_id both exist in the pokedex
    int flag_from = 0;
    int flag_to = 0;
    Node *curre = pokedex->head;
    while (curre != NULL) {
        if (from_id == pokemon_id(curre->pokemon)) {
            flag_from = 1;
        }
        if (to_id == pokemon_id(curre->pokemon)) {
            flag_to = 1;
        }
        curre = curre->next;
    }
    
    
    Node *to = pokedex->head;
    Node *from = pokedex->head;
    if (flag_to == 1 && flag_from == 1) {
        while (to != NULL) {
            if (pokemon_id(to->pokemon) != to_id) {
                to = to->next;
            } else {
                break;
            }
        }
        
        curre = pokedex->head;
        while (from != NULL) {
            if (pokemon_id(from->pokemon) != from_id) {
                from = from->next;
            } else {
                break;
            }
        }
        from->evolve = to;
    } else {
        printf("Invalid Pokemon Evolution!\n");
        exit(1);
    }
}


// print evolution of the current select pokemon
// if it is found
// #004 Charmander [Fire] --> #005 Charmeleon [Fire] --> #006 Charizard [Fire, Flying]
// if not found 
// #004 Charmander [Fire] --> #005 ???? [????] --> #006 ???? [????]

// //////////command 's'/////////
void show_evolutions(Pokedex pokedex) {
    // fprintf(stderr, "exiting because you have not implemented the show_evolutions function in pokedex.c\n");
    // exit(1);
    
    Node *curre = pokedex->curr;
    
    pokemon_type first_1 = pokemon_first_type(curre->pokemon);
    pokemon_type second_1 = pokemon_second_type(curre->pokemon);
    
    // if the current selected pokemon has no evolution
    if (curre->evolve == NULL) {
        if (curre->found == TRUE) {
            printf("#%03d %s [%s, %s]\n", 
                    pokemon_id(curre->pokemon), 
                    pokemon_name(curre->pokemon), 
                    pokemon_type_to_string(first_1), 
                    pokemon_type_to_string(second_1));
        } else {
            printf("#%03d ???? [????]\n", pokemon_id(curre->pokemon));
        }
    // if the current selected pokemon has evolution 
    } else {
        // print the current selected pokemon
        if (curre->found == TRUE) {
            printf("#%03d %s [%s, %s] ", 
                    pokemon_id(curre->pokemon), 
                    pokemon_name(curre->pokemon), 
                    pokemon_type_to_string(first_1), 
                    pokemon_type_to_string(second_1));
        } else {
            printf("#%03d ???? [????] ", pokemon_id(curre->pokemon));
        }
        
        // print the evolve pokemon
        while (curre->evolve != NULL) {
            pokemon_type first_2 = pokemon_first_type(curre->evolve->pokemon);
            pokemon_type second_2 = pokemon_second_type(curre->evolve->pokemon);
            if (curre->evolve->found == TRUE) {
                printf("--> #%03d %s [%s, %s] ", 
                        pokemon_id(curre->evolve->pokemon), 
                        pokemon_name(curre->evolve->pokemon), 
                        pokemon_type_to_string(first_2), 
                        pokemon_type_to_string(second_2));
            } else {
                printf("--> #%03d ???? [????] ", 
                        pokemon_id(curre->evolve->pokemon));
            }
            curre = curre->evolve;
        }
        printf("\n");
    }
}

// Return the pokemon_id of the Pokemon that the currently selected evolved
int get_next_evolution(Pokedex pokedex) {
    // fprintf(stderr, "exiting because you have not implemented the get_next_evolution function in pokedex.c\n");
    // exit(1);
    
    Node *curre = pokedex->curr;
    if (curre->evolve != NULL) {
        return pokemon_id(curre->evolve->pokemon);
    } else {
        return DOES_NOT_EVOLVE;
    }
}

////////////////////////////////////////////////////////////////////////
//                         Stage 5 Functions                          //
////////////////////////////////////////////////////////////////////////

Pokedex get_pokemon_of_type(Pokedex pokedex, pokemon_type type) {
    fprintf(stderr, "exiting because you have not implemented the ");
    fprintf(stderr, "get_pokemon_of_type function in pokedex.c\n");
    exit(1);
}

Pokedex get_found_pokemon(Pokedex pokedex) {
    fprintf(stderr, "exiting because you have not implemented the ");
    fprintf(stderr, "get_pokemon_of_type function in pokedex.c\n");
    exit(1);
}

Pokedex search_pokemon(Pokedex pokedex, char *text) {
    fprintf(stderr, "exiting because you have not implemented the ");
    fprintf(stderr, "get_pokemon_of_type function in pokedex.c\n");
    exit(1);
}

// Add definitions for your own functions below.
// Make them static to limit their scope to this file.
