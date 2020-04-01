#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "series.h"
#include "film.h"

// Initialize the film structure
tError film_init(tFilm* object, const char* title, const unsigned int lengthInMin, tSeries *series){

    // Verify pre conditions
    assert(object != NULL);
    assert(series != NULL);

    // Reserve memory
    object->title = (char*)malloc((strlen(title) + 1) * sizeof(char));

    if (object->title == NULL) {
        return ERR_MEMORY_ERROR;
    }

    // Initialize object
    strcpy(object->title, title);
    object->lengthInMin = lengthInMin;
    object->series = series;

    return OK;
}


// Releases memory allocated within a tFilm object
void film_free(tFilm* object) {

    // Verify pre conditions
    assert(object != NULL);

    // All memory allocated with malloc and realloc needs to be freed 
    // using the free command. In this case, as we use malloc to 
    // allocate the fields, we have to free them
    if (object->title != NULL) {
        free(object->title);
        object->title = NULL;
    }
}

// Compare two tFilm objects by their title
bool film_equals(tFilm* film1, tFilm* film2) {

    // Verify pre conditions
    assert(film1 != NULL);
    assert(film2 != NULL);

    if (strcmp(film1->title, film2->title) != 0) {
        // Titles are different
        return false;
    }

    return true;
}

// Get ptr to series to which this film belongs
tSeries* film_getSeries(tFilm* object) {
    
        // Verify pre conditions
    assert(object != NULL);
    
    return object->series;
}

// **** Functions related to management of tFilmTable objects

// Initializes a table of films
void filmTable_init(tFilmTable* table) {
    // PR1 EX3
    return;
}

// Free resources stored by an existing tFilmTable data type.
void filmTable_free(tFilmTable* object) {
    // PR1 EX3
    return;
}

// Add a new film in the table. In case the film already exists (same title), 
// it will return an error value ERR_DUPLICATED.
tError filmTable_add(tFilmTable* table, tFilm* film) {
    // PR1 EX3
    return ERR_NOT_IMPLEMENTED;
}

 /* Searches for an film in the table received as a parameter, by its title. 
  * It will return a pointer to the tFilm type data if found, or NULL otherwise.
  */
tFilm* filmTable_find(tFilmTable* table, const char* title) {
    // PR1 EX3
    return NULL;
}

/* Removes a film received as a parameter from the table, based on its title. 
 * If an attempt is made to delete a device that 
 * does not exist in the table, the error value ERR_NOT_FOUND will be returned. 
 * Otherwise, it will return the OK value. If there is a problem managing memory, 
 * this function will return an error value ERR_MEMORY_ERROR.
 */
tError filmTable_remove(tFilmTable* table, tFilm* film){
    return ERR_NOT_IMPLEMENTED;
}

// Returns the number of films in the tFilmTable table received as a parameter.
unsigned int filmTable_size(tFilmTable* table){
    // PR1 EX3
    return 0;
}

