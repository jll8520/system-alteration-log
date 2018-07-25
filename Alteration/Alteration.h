#ifndef ALTERATION_H
#define ALTERATION_H

#include <string>
#include <ctime>

#include "AlterationProcedure.h"


/** Represents an alteration made to the system */
class Alteration
{
    public:
        /** Default constructor */
        Alteration();
        /** Default destructor */
        virtual ~Alteration();

        /** Getter for the _date_time */
        std::time_t get_date_time() const;
        /** Setter for the _date_time */
        void set_date_time(const std::time_t& date_time);

        /** Getter for the title */
        std::string get_title() const;
        /** Setter for the title */
        void set_title(const std::string& title);

        /** Getter for the _alteration_procedure */
        AlterationProcedure get_alteration_procedure() const;
        /** Setter for the _alteration_procedure */
        void set_alteration_procedure(const AlterationProcedure& alteration_procedure);

    protected:

    private:
        /** Used to store the date and time at which the alteration was carried out */
        std::time_t _date_time;
        /** Used to store a title or basic description for the alteration */
        std::string _title;
        /** Used to store the Procedure involved in carrying out the alteration, also includes child Procedures */
        AlterationProcedure _alteration_procedure;

};

#endif // ALTERATION_H
