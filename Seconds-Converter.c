#include <stdio.h>

typedef struct {
    int hours;
    int minutes;
    int seconds;
} Time;

// Function to convert seconds to time format
void convertSecondsToTime(int seconds, Time* time) {
    time->hours = seconds / 3600;
    seconds %= 3600;
    time->minutes = seconds / 60;
    time->seconds = seconds % 60;
}

int main() {
    int totalSeconds;
    Time time;
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);
    convertSecondsToTime(totalSeconds, &time);
    printf("Converted Time: %02d:%02d:%02d\n", time.hours, time.minutes, time.seconds);
    return 0;
}
