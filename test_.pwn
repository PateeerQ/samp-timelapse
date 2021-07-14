#include <a_samp.inc>
#include <P_Timelapse.inc>

main ()
{
    new var = gettime() + 60,
        var2 = gettime() + 120;

    printf("%s", GetTimelapse(var, var2));
    // This thing will print gap/distance

    printf("%s", IsTimePassed(var2) ? ("Passed") : ("Not Passed"));
    // THis thing will print is Time Passed or not
}
