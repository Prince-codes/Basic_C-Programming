// hello

# include <stdio.h>
# include <string.h>

struct E_bill
{
    char cust_id[20];
    char cust_name[20];
    int units;
    float amount;
}cust;

int main()
{
    float Surchage_Amount,Net_Amount;
    printf("Enter the customer id: ");
    gets(cust.cust_id);
    printf("Enter the customer name: ");
    gets(cust.cust_name);
    printf("Enter the number of units consumed: ");
    scanf("%d", &cust.units);

    if(cust.units <= 199)
    {
        cust.amount = cust.units * 1.20;
    }
    else if(cust.units >= 200 && cust.units < 400)
    {
        cust.amount = cust.units * 1.50;
    }
    else if(cust.units >= 400 && cust.units < 600)
    {
        cust.amount = cust.units * 1.80;
    }
    else
    {
        cust.amount = cust.units * 2.00;
    }

   

    //If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should be of Rs. 100/-.
    if(cust.amount > 400)
    {
        Surchage_Amount= cust.amount * 0.15;
    }

    if(cust.amount < 100)
    {
        cust.amount = 100;
    }

    Net_Amount=cust.amount+Surchage_Amount;


    printf("\nBILL\n");
    printf("Customer ID :"); puts(cust.cust_id);
    printf("Customer Name : "); puts(cust.cust_name);
    printf("Number of units consumed: %d\n", cust.units);
    printf("Amount Charges: %.2f\n", cust.amount);
    printf("Surchage Amount: %.2f\n", Surchage_Amount);
    printf("Net Amount Paid By the Customer: %.2f\n", Net_Amount);

    return 0;
}