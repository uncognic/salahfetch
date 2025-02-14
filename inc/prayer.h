#ifndef PRAYER_H
#define PRAYER_H

#include <stdio.h>

// Forward declarations
struct hijri_cal; // If you need to refer to hijri_cal_t
struct weather;   // If you need to refer to weather_t

// Struct for temporarily storing date information
typedef struct weather_t {
    double tmp;
    char info[28];
} weather_t;

typedef struct date_t {
    int current_day;
    int current_month;
    int current_year;
    int current_hour;
    int current_min;
    int hijri_day;
    int hijri_month;
    int hijri_year;
} date_t;

typedef struct salah_t {
    char fajr[6];
    char shuruk[6];
    char dhuhr[6];
    char asr[6];
    char maghrib[6];
    char isha[6];
    int prayer_nums[6];
} salah_t;

// Main struct for storing prayer times and current date
typedef struct prayers_t {
    weather_t weather;
    date_t current_date;
    salah_t prayer;
} prayers_t;

// Function declarations
void determine_prayer_num(prayers_t *prayer_times);
int parse_prayerstimes(prayers_t *prayer_times, FILE *input, date_t date);

#endif // PRAYER_H
