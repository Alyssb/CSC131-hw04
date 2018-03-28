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
    int space{};
    int colon{};
    //int hour{};
    int min{};
    colon = st.find(':');
    space = st.find(' ');
    std::string hour{};
    hour = st.substr(0,colon);
    //min = std::stoi(st.substr(colon,space));
    //std::string ap = st.substr(space);
    //std::string final{};
    //if (ap.find('p')!=std::string::npos)
        //hour = hour + 12;
        //final = "pm";
    //else
        //final = "am";
    std::cout << space << std::endl;
    return hour;

}
