/* Exercise: Nested loops
 * Create a chronometer that begins when the user press the spacebar key
 * 
 * Author: Hermes Rojas Sancho
 *
 * Overview:
 * - Waits for the user to press SPACE (then ENTER due to line-buffered input).
 * - Displays time updating on the SAME terminal line every second.
 *
 * Output strategy:
 * - '\r' (carriage return) rewinds the cursor to the start of the line,
 *   allowing the next print to overwrite the previous value (no scrolling).
 * - fflush(stdout) forces the buffered output to be shown immediately
 *   because no newline '\n' is printed.
 *
 * Platform note:
 * - Uses sleep(1) from <unistd.h> (POSIX / Linux).
 */

#include <stdio.h>
#include <unistd.h> // sleep(1) on POSIX systems

int main(void) {
    char key;

    printf("Press SPACE then ENTER to start the chronometer!\n");

    // Wait for SPACE (ENTER required because stdin is line-buffered)
    do {
        key = getchar();
    } while (key != ' ');

    // Simulate a 24-hour clock: HH:MM:SS
    for (int hours = 0; hours < 24; hours++) {
        for (int minutes = 0; minutes < 60; minutes++) {
            for (int seconds = 0; seconds < 60; seconds++) {
                printf("%02d:%02d:%02d\r", hours, minutes, seconds);
                fflush(stdout);  // ensure real-time update without '\n'
                sleep(1);        // wait 1 second
            }
        }
    }

    return 0;
}
