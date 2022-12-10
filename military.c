#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, days,  patients, doctors = 7, d_treated, d_untreated, ttl_treated = 0, ttl_untreated = 0;

    printf("Days of Operation: ");
    scanf("%d", &days);

    for(i = 1; i <= days; i++){
        if(i % 3 == 0 && ttl_untreated > ttl_treated){
            doctors += 1;
        }
        printf("[Day#%d]Current Patients: ", i);
        scanf("%d", &patients);
        if(doctors <= patients){
            d_treated = doctors;
        }else if(doctors > patients)
        {
            d_treated = patients;
        }
        d_untreated = patients - d_treated;
        ttl_treated += d_treated;
        ttl_untreated += d_untreated;
    }
    printf("========================\n");
    printf("Treated Patients: %d\n", ttl_treated);
    printf("Untreated Patients: %d\n\n", ttl_untreated);

    return 0;
}
