#include "AlterationLog.h"
#include "Alteration.h"
#include "AlterationProcedure.h"

int main(int argc, char **argv)
{
    // Create a log
    AlterationLog alteration_log;

    // Create an alteration and add to the log
    Alteration alteration;
    alteration.set_title("Test[0]");
    alteration_log.add_alteration(alteration);

    // Change the title of the local Alteration
    alteration.set_title("Test[1]");

    // Display contents of the vector
    alteration_log.debug_display_vector_contents();

    // Add the local Alteration again with new title
    alteration_log.add_alteration(alteration);

    // Display the contents of the vector
    alteration_log.debug_display_vector_contents();

    return 0;
}
