#include <a_samp.inc>
#include "P_Timelapse.inc"

main ()
{
    new var = gettime() + 60, // 60 Seconds
        var2 = gettime() + 120; // 120 Seconds

    printf("%s", GetTimelapse(var, var2)); // Printing Gap Between var & var2
}
