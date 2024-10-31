#ifndef WEATHER_H
#define WEATHER_H

#include "prayer.h" // Include this for prayers_t

// Define API_INTERVALL here
#define API_INTERVALL 3600 // Define the API interval in seconds

// Function declarations
int check_last_api_access(prayers_t *prayer_times);
int retrieve_weather(prayers_t *prayer_times);

#endif // WEATHER_H
