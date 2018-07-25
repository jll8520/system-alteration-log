#include "Alteration.h"

/** Default constructor */
Alteration::Alteration()
{
}

/** Default destructor *//** Default destructor */
Alteration::~Alteration()
{
}

/** Getter for the _date_time */
std::time_t Alteration::get_date_time() const
{
    return this->_date_time;
}
/** Setter for the _date_time */
void Alteration::set_date_time(const std::time_t& date_time)
{
    this->_date_time = date_time;
}

/** Getter for the title */
std::string Alteration::get_title() const
{
    return this->_title;
}

/** Setter for the title */
void Alteration::set_title(const std::string& title)
{
    this->_title = title;
}

/** Getter for the _alteration_procedure */
AlterationProcedure Alteration::get_alteration_procedure() const
{
    return this->_alteration_procedure;
}

/** Setter for the _alteration_procedure */
void Alteration::set_alteration_procedure(const AlterationProcedure& alteration_procedure)
{
    this->_alteration_procedure = alteration_procedure;
}
