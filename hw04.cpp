/**
 * CSC131 - Computational Thinking
 * Missouri State University, Spring 2018.
 *
 * @file: hw04.cpp
 * @author: Alyssa Slayton <ajs41@missouristate.edu>
 */

#include <cstdlib>
#include <iostream>
#include <string>

std::string convertToMilitaryTime(std::string);

int main(int argc, char* argv[])
{
    std::cout << "what time is it?? ";
    std::string ogTime{};
    std::getline(std::cin, ogTime);
    std::cout << "so it's "
              << ogTime
              << "?"
              << std::endl;
    std::cout << "that's "
              << convertToMilitaryTime(ogTime)
              << " in military time."
              << std::endl;

    return EXIT_SUCCESS;
}

std::string convertToMilitaryTime(std::string st)
{
    int space, colon, hour, min;
    colon = st.find(':');
    space = st.find(' ');
    hour = std::stoi(st.substr(0,colon));
    min = std::stoi(st.substr(colon,space));


    return "";

}
