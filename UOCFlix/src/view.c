#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "error.h"
#include "user.h"
#include "film.h"
#include "view.h"

// **** Functions related to management of tView objects

// Initialize a tView object
tError view_init(tView* object, tDateTime *timestamp, short score, tUser *user, tFilm *film) {
    // PR1 EX4
    return ERR_NOT_IMPLEMENTED;
}
    
// Free the resources stored by an existing tView object
tError view_free(tView* object) {
    // PR1 EX4
    return ERR_NOT_IMPLEMENTED;
}

// **** Functions related to management of tViewLog objects

// Initializes a visualization table.
void viewLog_init(tViewLog* table) {
    // PR1 EX4
    return;
}

// Release memory stored by an existing tViewLog object
void viewLog_free(tViewLog* table) {
    // PR1 EX4    
    return;
}

// Add a new visualization in the table, received as a parameter.
tError viewLog_add(tViewLog* table, tView* view) {
    // PR1 EX4
    return ERR_NOT_IMPLEMENTED;
}

// Given a username and a table of type tViewLog, it performs a search 
// of the episode with the highest score (not negative) displayed by the 
// user, offering us a pointer to it. In case of a tie, offer among the 
// winning genres the episode that is first on the list. 
// If the user can't be found in the list, return NULL.
tFilm* viewLog_getFavFilm(tViewLog* table, tUser* user) {
    // PR1 EX4
    return NULL;
}

// Given a username and a table of type tViewLog, it returns the 
// genre for which a user has made more visualizations. In case of a tie, 
// offer the first one on the list. In case the user does not have 
// visualizations, return ERR_NOT_FOUND.
tGenre viewLog_getFavGenre(tViewLog* table, tUser* user) {
    // PR1 EX4
    return GENRE_NOT_FOUND;
}

// helper func to get tDateTime for a given timestamp in year, month...
tDateTime* setDateTime(unsigned char day, unsigned char month, unsigned short year, unsigned char hour, unsigned char minute){
	
	// Verify pre conditions
    assert(day <= 31);
	assert(month <= 12);
	assert(hour <= 24);
	assert(minute <= 60);
	
    tDateTime *timestamp;
    timestamp = (tDateTime*)malloc(sizeof(tDateTime));

    timestamp->day = day;
    timestamp->month = month;
    timestamp->year = year;
    timestamp->hour = hour;
    timestamp->minute = minute;

    return timestamp;
}
