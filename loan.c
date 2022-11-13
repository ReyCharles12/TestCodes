#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    double i, loan, loan1, year, month, yr_rate, yr_inter, m_rate, m_inter;
    double power, prcpl, ttl_pay, m_pay, bal;

    printf("Loan Amount: ");
    scanf("%lf", &loan);
    printf("Number of Years: ");
    scanf("%lf", &year);
    printf("Annual Interest Rate: ");
    scanf("%lf", &yr_rate);

    yr_inter = yr_rate /100;
    m_rate = yr_inter / 12;
    month = year * 12;
    power = pow(1 + m_rate, month);
    m_pay = loan * (m_rate * (power))/((power) - 1);
    ttl_pay = m_pay * 12;
    printf("\nMonthly Payment: %.2lf\n", m_pay);
    printf("Total Payment: %.2lf\n\n", ttl_pay);

    loan1 = loan;
    printf("Payment#          Interest          Principal          Balance\n");
    for(i = 1; i <= month; i++){
            m_inter = m_rate * loan1;
            prcpl = m_pay - m_inter;
            bal = loan1 - prcpl;
            printf("%.0lf                 %.2lf          %.2lf          %.2lf\n", i, m_inter, prcpl, bal);
            loan1 = bal;

    }

    return 0;
}
