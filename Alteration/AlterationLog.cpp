#include "AlterationLog.h"

#include <vector>
#include <string>
#include <iostream>

/** Default constructor */
AlterationLog::AlterationLog()
{
}

/** Default desctructor */
AlterationLog::~AlterationLog()
{
}

/** Adds an alteration to the _alteration_vector */
void AlterationLog::add_alteration(const Alteration& alteration)
{
    this->_alteration_vector.push_back(alteration);
}

/** Getter for the _alteration_vector */
const std::vector<Alteration>& AlterationLog::get_alteration_vector() const
{
    return this->_alteration_vector;
}

/** Setter for the _alteration_vector */
void AlterationLog::set_alteration_vector(const std::vector<Alteration>& alteration_vector)
{
    this->_alteration_vector = alteration_vector;
}

/** Debug function, iterates through _altreration_vector and displays title for each in console */
void AlterationLog::debug_display_vector_contents()
{
    std::cout << "\n\ndebug_display_vector_contents()" << std::endl;
    for (std::vector<Alteration>::iterator itr = this->_alteration_vector.begin(); itr != this->_alteration_vector.end(); ++itr) {
        std::string title = (*itr).get_title();
        std::cout << "ALTERATION-------------------" << "\n"
        << "TITLE: " << title << "\n"
        "--------------------" << std::endl;
    }
}
