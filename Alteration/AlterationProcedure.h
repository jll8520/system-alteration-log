#ifndef ALTERATIONPROCEDURE_H
#define ALTERATIONPROCEDURE_H

#include <vector>

/** Represents the procedure involved in carrying out an alteration, also contains child procedures */
class AlterationProcedure
{
    public:
        AlterationProcedure();
        virtual ~AlterationProcedure();

    protected:

    private:
        AlterationProcedure *parent_procedure = nullptr;
        std::vector<AlterationProcedure> child_procedure_vector;

};

#endif // ALTERATIONPROCEDURE_H
