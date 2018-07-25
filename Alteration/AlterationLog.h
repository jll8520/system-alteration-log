#ifndef ALTERATIONLOG_H
#define ALTERATIONLOG_H

#include <vector>

#include "Alteration.h"

/** Represents a log which will contain multiple Alterations */
class AlterationLog
{
    public:
        /** Default constructor */
        AlterationLog();
        /** Default desctructor */
        virtual ~AlterationLog();

        /** Adds an alteration to the _alteration_vector */
        void add_alteration(const Alteration& alteration);

        /** Getter for the _alteration_vector */
        const std::vector<Alteration>& get_alteration_vector() const;
        /** Setter for the _alteration_vector */
        void set_alteration_vector(const std::vector<Alteration>& alteration_vector);

        /** Debug function, iterates through _altreration_vector and displays title for each in console */
        void debug_display_vector_contents();

    protected:

    private:
        /** Used to store all of the Alteration objects in the log */
        std::vector<Alteration> _alteration_vector;
};

#endif // ALTERATIONLOG_H
