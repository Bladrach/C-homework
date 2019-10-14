#include <stdio.h>

int main () {

float managerpay = 0, hourlyworkerpay = 0, comworkerpay = 0;
int workertype, managernumber=0, hourlyworkernumber=0, comworkernumber=0, pieceworkernumber=0; 
int itemnumber = 0, workingtime, overtime=0;
float grossweekly, total1=0, total2=0, total3=0, total4=0, total5, total6=0, temp=0, itemprice=0;

x: printf ("\nPlease insert type of employee which its weekly pay will be calculated\n");
printf ("Managers:\t    1\nHourly Workers:\t    2\nCommission Workers: 3\nPieceworkers:\t    4\n\t\t\t\tFor EXIT and SUMMARY PRESS:5\n\n\n");

scanf ("%d",&workertype);

switch (workertype) {

	case 1:
		
		printf ("Please insert the fixed salary of the manager in the company:\n");
		scanf ("%f",&managerpay);
		printf ("The weekly pay to manager is $ %.2f \n",managerpay);
		total1 = total1 + managerpay;
		managernumber++;
		break;
		
	case 2:
		
		printf ("Please insert the fixed salary of hourly workers in the company:\n");
		scanf ("%f",&hourlyworkerpay);
		printf ("Please insert hourly worker's working time\n");
		scanf ("%d",&workingtime);
		
		if (workingtime > 40) {
			
			overtime = workingtime-40;
			total2 = total2 + (hourlyworkerpay + (overtime*((hourlyworkerpay*(1.5))/40)));
			printf ("The weekly pay to hourly worker is $ %.2f \n",(hourlyworkerpay + (overtime*((hourlyworkerpay*(1.5))/40))));
			hourlyworkernumber++;
		}
		
		else {
			
			printf ("The weekly pay to hourly worker is $ %.2f \n",hourlyworkerpay);
			total6 = total6 + hourlyworkerpay;
			hourlyworkernumber++;
		}
		break;
	
	case 3:
	
		printf ("Please insert the fixed salary of commission workers in the company:\n");
		scanf  ("%f",&comworkerpay);
		printf ("Please insert the commission worker's gross weekly sales [$]\n");
		scanf ("%f",&grossweekly);
		temp = grossweekly*0.057;
		total3 = total3 + (comworkerpay + temp);
		printf ("Worker receives $%.2f plus 5.70%% of their gross weekly sales [$%.2f].\n",comworkerpay,temp);
		printf ("The weekly pay to commission worker is $ %.2f \n",(comworkerpay + temp));
		comworkernumber++;
		break;
	
	case 4:
		
		printf ("Please insert the price for one item which is produced by the pieceworker in the company:\n");
		scanf ("%f",&itemprice);
		printf ("Please insert total number of items that a pieceworker produced in the company:\n");
		scanf ("%d",&itemnumber);
		total4 = total4 + (itemnumber*itemprice);
		printf ("The weekly pay to the pieceworker is $ %.2f\n",itemnumber*itemprice);
		pieceworkernumber++;
		break;
	
	case 5:
		
		total5 = total1 + total2 + total3 + total4 + total6;
		printf ("\nTotal Employees \t\t\t\t\t\t Wages \n");
		printf ("\n%d Manager(s) \t\t\t\t\t\t\t $ %.2f \n",managernumber,total1);
	
		if (workingtime > 40) {
		printf ("\n%d Hourly Worker(s) \t\t\t\t\t\t $ %.2f \n",hourlyworkernumber,total2+total6);
		printf ("\n%d Commission Worker(s) \t\t\t\t\t\t $ %.2f \n",comworkernumber,total3);
		printf ("\n%d Pieceworker(s) \t\t\t\t\t\t $ %.2f \n",pieceworkernumber,total4);
		printf ("\n\t\t\t\t\t\t  Total Wage(s): $%.2f\n",total5);
		}
		
		else {
		printf ("\n%d Hourly Worker(s) \t\t\t\t\t\t $ %.2f \n",hourlyworkernumber,total2+total6);
		printf ("\n%d Commission Worker(s) \t\t\t\t\t\t $ %.2f \n",comworkernumber,total3);
		printf ("\n%d Pieceworker(s) \t\t\t\t\t\t $ %.2f \n",pieceworkernumber,total4);
		printf ("\n\t\t\t\t\t\t  Total Wage(s): $ %.2f\n",total5);	
		}
		
		printf ("\nWritten by Mehmet KAPSON!\n");
		return 0;
		
	default:
	
	printf ("\nERROR!!\n");
}
goto x;
return 0;
}

// Prepared by	Mehmet KAPSON (Bladrach)
