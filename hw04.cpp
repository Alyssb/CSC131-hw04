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

/**
 * takes an inputted time and calculates the military format of said time
 * relies on time being formatted correctly (see next line)
 * @param st the inputted time (format hh:mm xm)
 * @return military time is returned (format hhmm)
 */
std::string convertToMilitaryTime(std::string);

/**
 * entry point of this application
 * @param argc pretty sure this is for use by the tester (int)
 * @param argv also probably for use by tester (char list(?))
 * @return EXIT_SUCCESS is returned upon successful execution of this application
 */
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
    int hour{};
    std::string miltime{};

    hour = std::stoi(st.substr(0,st.find(':')));
    std::string min = st.substr(st.find(':')+1,st.find(' ')-2);

    //value of min changed based on length of st. This makes all min the same
    if (min.at(min.length()-1)==' ')
        min = min.substr(0,min.length()-1);

    //calculates military time for 12:XX pm and 12:XX am
    if (hour == 12)
    {
        if (st.at(6) == 'p' || st.at(6) == 'P')
            miltime = std::to_string(hour) + min;
        else
            miltime = "00" + min;
    }
    //calculates military time for pm times
    else if (st.find('p') != std::string::npos || st.find('P') != std::string::npos)
    {
        hour = hour + 12;
        std::cout << hour << std::endl;
        miltime = std::to_string(hour) + min;
    }
    //calculates military time for am times
    else
    {
        if (hour < 10)
            miltime = "0" + std::to_string(hour) + min;
        else
            miltime = std::to_string(hour) + min;
    }

    return miltime;

}
