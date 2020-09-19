# include <stdio.h>
int 
main(){// two 还要两天；one 还要一天；double 
    int two_before=1, yesterd=1, today=2, day ;
    for (day=3; today < 10000000; day++){
        today = yesterd + two_before; 
        printf("After %d days, %d spores\n", day, today);
        two_before = yesterd;
        yesterd = today;
    }
    return 0;
}