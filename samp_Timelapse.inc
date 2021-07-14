//===================================
/*

            Pateeer.
                samp_Timelapse

*/
//===================================

// Guards
#if defined PTL_Included
    #endinput
#endif 

#define PTL_Included

#if !defined _samp_included
	#error Please include a_samp before using this.
#endif

// Function

stock GetTimelapse(start, end)
{
    new tl_str[32] = "-",
        second = end - start;

    const
        minute = 60,
        hour = (minute * 60),
        day = (hour * 24),
        week = (day * 7),
        month = ((week * 4) + 2),
        year = (month * 12)
    ;

    if(second == 1)
        format(tl_str, sizeof tl_str,"a Second");
    else if(second < minute)
        format(tl_str, sizeof tl_str,"%d Seconds", second);
    else if(second == minute)
        format(tl_str, sizeof tl_str,"a Minute");
    else if(second < (minute * 60))
        format(tl_str, sizeof tl_str,"%d Minutes", (second / minute));
    else if(second == hour)
        format(tl_str, sizeof tl_str,"a Hour");
    else if(second < (hour * 24))
        format(tl_str, sizeof tl_str,"%d Hours", (second / hour));
    else if(second == day)
        format(tl_str, sizeof tl_str,"a Day");
    else if(second < (day * 24))
        format(tl_str, sizeof tl_str,"%d Days", (second / hour));
    else if(second == week)
        format(tl_str, sizeof tl_str,"a Week");
    else if(second < (week * 4))
        format(tl_str, sizeof tl_str,"%d Weeks", (second / week));
    else if(second == month)
        format(tl_str, sizeof tl_str,"a Month");
    else if(second < (month * 12))
        format(tl_str, sizeof tl_str,"%d Months", (second / month));
    else if(second == year)
        format(tl_str, sizeof tl_str,"a Year");
    else if(second > year)
        format(tl_str, sizeof tl_str,"%d Years", (second / year));

    return tl_str;
}

stock IsTimePassed(time)
{
    if(time <= gettime())
        return 1;

    return 0;
}
