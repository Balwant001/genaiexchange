#include <iostream>
#include <vector>
#include <string>

/*
================================================================================
ASCII Art Sketch
================================================================================

This program demonstrates how to represent an image using text characters
(ASCII art). Since a standard C++ console cannot display graphical images,
we can simulate one by mapping pixel brightness to characters.

How it works:
- A `std::vector<std::string>` is used to store the "image".
- Each string in the vector represents one row of pixels.
- Different characters are used to represent different shades:
  - Denser characters like '@', '#', 'W' represent dark areas (hair, sunglasses).
  - Sparser characters like '.', ':', '-' represent lighter areas (skin, background).
- The main function simply iterates through the vector and prints each line,
  recreating the image in the console.

This is a manually created representation of the user's provided image.
*/

int main() {
    // A vector of strings to hold the ASCII art representation of the image.
    // Each string is a row of the final "drawing".
    std::vector<std::string> asciiArt = {
        "        ............:::::::::::::::--.``````",
        "     ..:::--::::::::::::::::::::::-..````````",
        "   .::--..`    `..---::::::::::-..`````````",
        " .::-`          ..-::::::::::-...`````````",
        ".::-`        `...:::::::::-....```````````",
        "::-`      `.--::::::::::-...``````````````",
        "::`    `.--:::::::::--...``````````````",
        "::`  .--:::::::::--...`````````````````",
        "-,  .--::::::::--...````````````````",
        "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW",
        "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW",
        "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@",
        "@@  I dont  @@@@@@@@@@@@@@   Care   @@@@@@@@@@@@@@@@",
        "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@",
        " @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@",
        "  `:::::::::::-.        `.-::::::::::-`     `..-:::",
        "    `::::::::-`            `.-::::::::`  ``.--:::::",
        "      `:::::-`                `.-:::::.----::::::` ",
        "        `::-`                    `-::::::::::::-`  ",
        "          `..`                      `.-::::::-`    ",
        "            `...`                      `...`       ",
        "                `....`                             "
    };

    // Set console output to a standard font if possible (optional)
    // This helps in aligning the characters properly.
    // Note: This is platform-specific and might not work on all systems.
    #ifdef _WIN32
        system("chcp 65001 > nul"); // Set console to UTF-8 on Windows
    #endif

    std::cout << "Displaying ASCII art sketch:\n\n";

    // Loop through the vector and print each line of the ASCII art.
    for (const std::string& line : asciiArt) {
        std::cout << line << std::endl;
    }

    std::cout << "\nSketch complete.\n";

    return 0;