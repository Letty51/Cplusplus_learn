/* GOAL: practice using stringstream
** GOAL: practice getting string inputs and 
** converting them to numeric variables using
** stringstream.
**
** Prompt the user for the length of a room.
** Then prompt for the width of the room.
** Print out the area fo the room.
*/

#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string roomLength, roomWidth;
    float length = 0, width = 0, area = 0;

    std::cout << "Please enter the length of your room: ";
    std::getline(std::cin, roomLength);
    std::stringstream(roomLength) >> length;
    std::cout << "Please enter the width of your room: ";
    std::getline(std::cin, roomWidth);
    std::stringstream(roomWidth) >> width;

    area = length * width;

    std::cout << "The area of your room is " << area << std::endl;

    return 0;
}