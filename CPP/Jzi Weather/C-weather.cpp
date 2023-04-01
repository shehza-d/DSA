#include<stdio.h>
main()
{   
    int month,day;
	char moment;
	printf("\n\t\t\t\t\t\tC YOUR WEATHER");
	printf("\n************************************************************************************************************************");
	printf("\nEnter your choice of month of the year 2022 in the city of Karachi.");
	printf("\n(enter the number that coincides with the month from 1 to 12)");
	printf("\n(1)\tJanuary\n(2)\tFebruary\n(3)\tMarch\n(4)\tApril\n(5)\tMay\n(6)\tJune");
	printf("\n(7)\tJuly\n(8)\tAugust\n(9)\tSeptember\n(10)\tOctober\n(11)\tNovember\n(12)\tDecember");
	printf("\nEnter here:");    scanf("\n%d",&month);
	switch(month)
	{
		case 1: printf("\nEnter the day of the month.\n(enter the number that coincides with the day)");
		        printf("\nSun\tMon\tTue\tWed\tThu\tFri\tSat");
		        printf("\n   \t   \t   \t   \t   \t   \t1\n2  \t3  \t4  \t5  \t6  \t7  \t8\n9  \t10 \t11 \t12 \t13 \t14 \t15\n16 \t17 \t18 \t19 \t20 \t21 \t22\n23 \t24 \t25 \t26 \t27 \t28 \t29\n30 \t31");
		        printf("\nEnter here:");   scanf("\n%d",&day);
		        switch(day)
		        {
		        	case 1: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t13 Degrees");
		        	        	         printf("\n7  AM\t14 Degrees");
		        	        	         printf("\n8  AM\t16 Degrees");
		        	        	         printf("\n9  AM\t17 Degrees");
		        	        	         printf("\n10 AM\t19 Degrees");
		        	        	         printf("\n11 AM\t20 Degrees");
		        	        	         printf("\n12 PM\t22 Degrees");
		        	        	         printf("\n1  PM\t23 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t24 Degrees");
		        	        	         printf("\n3  PM\t25 Degrees");
		        	        	         printf("\n4  PM\t25 Degrees");
		        	        	         printf("\n5  PM\t24 Degrees");
		        	        	         printf("\n6  PM\t23 Degrees");
		        	        	         printf("\n7  PM\t23 Degrees");
		        	        	         printf("\n8  PM\t22 Degrees");
		        	        	         printf("\n9  PM\t22 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t21 Degrees");
		        	        	         printf("\n11 PM\t20 Degrees");
		        	        	         printf("\n12 AM\t19 Degrees");
		        	        	         printf("\n1  AM\t18 Degrees");
		        	        	         printf("\n2  AM\t16 Degrees");
		        	        	         printf("\n3  AM\t15 Degrees");
		        	        	         printf("\n4  AM\t14 Degrees");
		        	        	         printf("\n5  AM\t13 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
					case 2: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t15 Degrees");
		        	        	         printf("\n7  AM\t17 Degrees");
		        	        	         printf("\n8  AM\t18 Degrees");
		        	        	         printf("\n9  AM\t19 Degrees");
		        	        	         printf("\n10 AM\t20 Degrees");
		        	        	         printf("\n11 AM\t21 Degrees");
		        	        	         printf("\n12 PM\t23 Degrees");
		        	        	         printf("\n1  PM\t25 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t25 Degrees");
		        	        	         printf("\n3  PM\t26 Degrees");
		        	        	         printf("\n4  PM\t26 Degrees");
		        	        	         printf("\n5  PM\t26 Degrees");
		        	        	         printf("\n6  PM\t25 Degrees");
		        	        	         printf("\n7  PM\t25 Degrees");
		        	        	         printf("\n8  PM\t24 Degrees");
		        	        	         printf("\n9  PM\t24 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t23 Degrees");
		        	        	         printf("\n11 PM\t22 Degrees");
		        	        	         printf("\n12 AM\t20 Degrees");
		        	        	         printf("\n1  AM\t19 Degrees");
		        	        	         printf("\n2  AM\t18 Degrees");
		        	        	         printf("\n3  AM\t17 Degrees");
		        	        	         printf("\n4  AM\t16 Degrees");
		        	        	         printf("\n5  AM\t15 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
					case 3: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t16 Degrees");
		        	        	         printf("\n7  AM\t17 Degrees");
		        	        	         printf("\n8  AM\t18 Degrees");
		        	        	         printf("\n9  AM\t19 Degrees");
		        	        	         printf("\n10 AM\t20 Degrees");
		        	        	         printf("\n11 AM\t21 Degrees");
		        	        	         printf("\n12 PM\t23 Degrees");
		        	        	         printf("\n1  PM\t25 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t25 Degrees");
		        	        	         printf("\n3  PM\t26 Degrees");
		        	        	         printf("\n4  PM\t26 Degrees");
		        	        	         printf("\n5  PM\t26 Degrees");
		        	        	         printf("\n6  PM\t25 Degrees");
		        	        	         printf("\n7  PM\t25 Degrees");
		        	        	         printf("\n8  PM\t24 Degrees");
		        	        	         printf("\n9  PM\t24 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t23 Degrees");
		        	        	         printf("\n11 PM\t22 Degrees");
		        	        	         printf("\n12 AM\t20 Degrees");
		        	        	         printf("\n1  AM\t19 Degrees");
		        	        	         printf("\n2  AM\t18 Degrees");
		        	        	         printf("\n3  AM\t18 Degrees");
		        	        	         printf("\n4  AM\t17 Degrees");
		        	        	         printf("\n5  AM\t16 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
		            case 4: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t17 Degrees");
		        	        	         printf("\n7  AM\t18 Degrees");
		        	        	         printf("\n8  AM\t20 Degrees");
		        	        	         printf("\n9  AM\t21 Degrees");
		        	        	         printf("\n10 AM\t21 Degrees");
		        	        	         printf("\n11 AM\t22 Degrees");
		        	        	         printf("\n12 PM\t22 Degrees");
		        	        	         printf("\n1  PM\t23 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t24 Degrees");
		        	        	         printf("\n3  PM\t24 Degrees");
		        	        	         printf("\n4  PM\t24 Degrees");
		        	        	         printf("\n5  PM\t24 Degrees");
		        	        	         printf("\n6  PM\t23 Degrees");
		        	        	         printf("\n7  PM\t23 Degrees");
		        	        	         printf("\n8  PM\t22 Degrees");
		        	        	         printf("\n9  PM\t22 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t21 Degrees");
		        	        	         printf("\n11 PM\t21 Degrees");
		        	        	         printf("\n12 AM\t20 Degrees");
		        	        	         printf("\n1  AM\t20 Degrees");
		        	        	         printf("\n2  AM\t19 Degrees");
		        	        	         printf("\n3  AM\t19 Degrees");
		        	        	         printf("\n4  AM\t18 Degrees");
		        	        	         printf("\n5  AM\t17 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
		        	case 5: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t16 Degrees");
		        	        	         printf("\n7  AM\t17 Degrees");
		        	        	         printf("\n8  AM\t18 Degrees");
		        	        	         printf("\n9  AM\t19 Degrees");
		        	        	         printf("\n10 AM\t19 Degrees");
		        	        	         printf("\n11 AM\t20 Degrees");
		        	        	         printf("\n12 PM\t20 Degrees");
		        	        	         printf("\n1  PM\t21 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t22 Degrees");
		        	        	         printf("\n3  PM\t23 Degrees");
		        	        	         printf("\n4  PM\t23 Degrees");
		        	        	         printf("\n5  PM\t22 Degrees");
		        	        	         printf("\n6  PM\t22 Degrees");
		        	        	         printf("\n7  PM\t21 Degrees");
		        	        	         printf("\n8  PM\t21 Degrees");
		        	        	         printf("\n9  PM\t20 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t20 Degrees");
		        	        	         printf("\n11 PM\t19 Degrees");
		        	        	         printf("\n12 AM\t19 Degrees");
		        	        	         printf("\n1  AM\t18 Degrees");
		        	        	         printf("\n2  AM\t18 Degrees");
		        	        	         printf("\n3  AM\t18 Degrees");
		        	        	         printf("\n4  AM\t17 Degrees");
		        	        	         printf("\n5  AM\t16 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
					case 6: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t15 Degrees");
		        	        	         printf("\n7  AM\t16 Degrees");
		        	        	         printf("\n8  AM\t16 Degrees");
		        	        	         printf("\n9  AM\t17 Degrees");
		        	        	         printf("\n10 AM\t17 Degrees");
		        	        	         printf("\n11 AM\t18 Degrees");
		        	        	         printf("\n12 PM\t18 Degrees");
		        	        	         printf("\n1  PM\t18 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t19 Degrees");
		        	        	         printf("\n3  PM\t19 Degrees");
		        	        	         printf("\n4  PM\t19 Degrees");
		        	        	         printf("\n5  PM\t19 Degrees");
		        	        	         printf("\n6  PM\t19 Degrees");
		        	        	         printf("\n7  PM\t18 Degrees");
		        	        	         printf("\n8  PM\t18 Degrees");
		        	        	         printf("\n9  PM\t18 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t17 Degrees");
		        	        	         printf("\n11 PM\t17 Degrees");
		        	        	         printf("\n12 AM\t17 Degrees");
		        	        	         printf("\n1  AM\t16 Degrees");
		        	        	         printf("\n2  AM\t16 Degrees");
		        	        	         printf("\n3  AM\t16 Degrees");
		        	        	         printf("\n4  AM\t15 Degrees");
		        	        	         printf("\n5  AM\t15 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
					case 7: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t15 Degrees");
		        	        	         printf("\n7  AM\t16 Degrees");
		        	        	         printf("\n8  AM\t17 Degrees");
		        	        	         printf("\n9  AM\t17 Degrees");
		        	        	         printf("\n10 AM\t18 Degrees");
		        	        	         printf("\n11 AM\t18 Degrees");
		        	        	         printf("\n12 PM\t19 Degrees");
		        	        	         printf("\n1  PM\t19 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t20 Degrees");
		        	        	         printf("\n3  PM\t20 Degrees");
		        	        	         printf("\n4  PM\t20 Degrees");
		        	        	         printf("\n5  PM\t20 Degrees");
		        	        	         printf("\n6  PM\t20 Degrees");
		        	        	         printf("\n7  PM\t20 Degrees");
		        	        	         printf("\n8  PM\t19 Degrees");
		        	        	         printf("\n9  PM\t19 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t18 Degrees");
		        	        	         printf("\n11 PM\t18 Degrees");
		        	        	         printf("\n12 AM\t17 Degrees");
		        	        	         printf("\n1  AM\t17 Degrees");
		        	        	         printf("\n2  AM\t16 Degrees");
		        	        	         printf("\n3  AM\t16 Degrees");
		        	        	         printf("\n4  AM\t15 Degrees");
		        	        	         printf("\n5  AM\t15 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
		        	case 8: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t15 Degrees");
		        	        	         printf("\n7  AM\t16 Degrees");
		        	        	         printf("\n8  AM\t17 Degrees");
		        	        	         printf("\n9  AM\t18 Degrees");
		        	        	         printf("\n10 AM\t19 Degrees");
		        	        	         printf("\n11 AM\t20 Degrees");
		        	        	         printf("\n12 PM\t20 Degrees");
		        	        	         printf("\n1  PM\t21 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t22 Degrees");
		        	        	         printf("\n3  PM\t23 Degrees");
		        	        	         printf("\n4  PM\t23 Degrees");
		        	        	         printf("\n5  PM\t22 Degrees");
		        	        	         printf("\n6  PM\t22 Degrees");
		        	        	         printf("\n7  PM\t21 Degrees");
		        	        	         printf("\n8  PM\t21 Degrees");
		        	        	         printf("\n9  PM\t20 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t20 Degrees");
		        	        	         printf("\n11 PM\t19 Degrees");
		        	        	         printf("\n12 AM\t19 Degrees");
		        	        	         printf("\n1  AM\t18 Degrees");
		        	        	         printf("\n2  AM\t17 Degrees");
		        	        	         printf("\n3  AM\t17 Degrees");
		        	        	         printf("\n4  AM\t16 Degrees");
		        	        	         printf("\n5  AM\t15 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
					case 9: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t12 Degrees");
		        	        	         printf("\n7  AM\t13 Degrees");
		        	        	         printf("\n8  AM\t14 Degrees");
		        	        	         printf("\n9  AM\t15 Degrees");
		        	        	         printf("\n10 AM\t17 Degrees");
		        	        	         printf("\n11 AM\t18 Degrees");
		        	        	         printf("\n12 PM\t20 Degrees");
		        	        	         printf("\n1  PM\t21 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t22 Degrees");
		        	        	         printf("\n3  PM\t22 Degrees");
		        	        	         printf("\n4  PM\t22 Degrees");
		        	        	         printf("\n5  PM\t21 Degrees");
		        	        	         printf("\n6  PM\t21 Degrees");
		        	        	         printf("\n7  PM\t20 Degrees");
		        	        	         printf("\n8  PM\t20 Degrees");
		        	        	         printf("\n9  PM\t19 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t18 Degrees");
		        	        	         printf("\n11 PM\t17 Degrees");
		        	        	         printf("\n12 AM\t16 Degrees");
		        	        	         printf("\n1  AM\t15 Degrees");
		        	        	         printf("\n2  AM\t14 Degrees");
		        	        	         printf("\n3  AM\t13 Degrees");
		        	        	         printf("\n4  AM\t12 Degrees");
		        	        	         printf("\n5  AM\t11 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
		            case 10:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t11 Degrees");
		        	        	         printf("\n7  AM\t13 Degrees");
		        	        	         printf("\n8  AM\t14 Degrees");
		        	        	         printf("\n9  AM\t16 Degrees");
		        	        	         printf("\n10 AM\t17 Degrees");
		        	        	         printf("\n11 AM\t19 Degrees");
		        	        	         printf("\n12 PM\t20 Degrees");
		        	        	         printf("\n1  PM\t21 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t22 Degrees");
		        	        	         printf("\n3  PM\t23 Degrees");
		        	        	         printf("\n4  PM\t23 Degrees");
		        	        	         printf("\n5  PM\t22 Degrees");
		        	        	         printf("\n6  PM\t21 Degrees");
		        	        	         printf("\n7  PM\t20 Degrees");
		        	        	         printf("\n8  PM\t20 Degrees");
		        	        	         printf("\n9  PM\t19 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t18 Degrees");
		        	        	         printf("\n11 PM\t18 Degrees");
		        	        	         printf("\n12 AM\t17 Degrees");
		        	        	         printf("\n1  AM\t16 Degrees");
		        	        	         printf("\n2  AM\t15 Degrees");
		        	        	         printf("\n3  AM\t13 Degrees");
		        	        	         printf("\n4  AM\t12 Degrees");
		        	        	         printf("\n5  AM\t10 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
		        	case 11:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t11 Degrees");
		        	        	         printf("\n7  AM\t13 Degrees");
		        	        	         printf("\n8  AM\t14 Degrees");
		        	        	         printf("\n9  AM\t16 Degrees");
		        	        	         printf("\n10 AM\t17 Degrees");
		        	        	         printf("\n11 AM\t19 Degrees");
		        	        	         printf("\n12 PM\t20 Degrees");
		        	        	         printf("\n1  PM\t21 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t22 Degrees");
		        	        	         printf("\n3  PM\t23 Degrees");
		        	        	         printf("\n4  PM\t23 Degrees");
		        	        	         printf("\n5  PM\t22 Degrees");
		        	        	         printf("\n6  PM\t21 Degrees");
		        	        	         printf("\n7  PM\t20 Degrees");
		        	        	         printf("\n8  PM\t20 Degrees");
		        	        	         printf("\n9  PM\t19 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t18 Degrees");
		        	        	         printf("\n11 PM\t18 Degrees");
		        	        	         printf("\n12 AM\t17 Degrees");
		        	        	         printf("\n1  AM\t16 Degrees");
		        	        	         printf("\n2  AM\t15 Degrees");
		        	        	         printf("\n3  AM\t13 Degrees");
		        	        	         printf("\n4  AM\t12 Degrees");
		        	        	         printf("\n5  AM\t11 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
					case 12:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t12 Degrees");
		        	        	         printf("\n7  AM\t13 Degrees");
		        	        	         printf("\n8  AM\t14 Degrees");
		        	        	         printf("\n9  AM\t16 Degrees");
		        	        	         printf("\n10 AM\t17 Degrees");
		        	        	         printf("\n11 AM\t19 Degrees");
		        	        	         printf("\n12 PM\t20 Degrees");
		        	        	         printf("\n1  PM\t21 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t23 Degrees");
		        	        	         printf("\n3  PM\t24 Degrees");
		        	        	         printf("\n4  PM\t23 Degrees");
		        	        	         printf("\n5  PM\t22 Degrees");
		        	        	         printf("\n6  PM\t21 Degrees");
		        	        	         printf("\n7  PM\t20 Degrees");
		        	        	         printf("\n8  PM\t20 Degrees");
		        	        	         printf("\n9  PM\t19 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t18 Degrees");
		        	        	         printf("\n11 PM\t18 Degrees");
		        	        	         printf("\n12 AM\t17 Degrees");
		        	        	         printf("\n1  AM\t16 Degrees");
		        	        	         printf("\n2  AM\t15 Degrees");
		        	        	         printf("\n3  AM\t14 Degrees");
		        	        	         printf("\n4  AM\t13 Degrees");
		        	        	         printf("\n5  AM\t12 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
					case 13:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t13 Degrees");
		        	        	         printf("\n7  AM\t14 Degrees");
		        	        	         printf("\n8  AM\t15 Degrees");
		        	        	         printf("\n9  AM\t16 Degrees");
		        	        	         printf("\n10 AM\t17 Degrees");
		        	        	         printf("\n11 AM\t19 Degrees");
		        	        	         printf("\n12 PM\t20 Degrees");
		        	        	         printf("\n1  PM\t21 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t23 Degrees");
		        	        	         printf("\n3  PM\t24 Degrees");
		        	        	         printf("\n4  PM\t23 Degrees");
		        	        	         printf("\n5  PM\t22 Degrees");
		        	        	         printf("\n6  PM\t21 Degrees");
		        	        	         printf("\n7  PM\t20 Degrees");
		        	        	         printf("\n8  PM\t20 Degrees");
		        	        	         printf("\n9  PM\t19 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t18 Degrees");
		        	        	         printf("\n11 PM\t18 Degrees");
		        	        	         printf("\n12 AM\t17 Degrees");
		        	        	         printf("\n1  AM\t16 Degrees");
		        	        	         printf("\n2  AM\t15 Degrees");
		        	        	         printf("\n3  AM\t14 Degrees");
		        	        	         printf("\n4  AM\t14 Degrees");
		        	        	         printf("\n5  AM\t13 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
		        	case 14:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t11 Degrees");
		        	        	         printf("\n7  AM\t13 Degrees");
		        	        	         printf("\n8  AM\t14 Degrees");
		        	        	         printf("\n9  AM\t17 Degrees");
		        	        	         printf("\n10 AM\t19 Degrees");
		        	        	         printf("\n11 AM\t20 Degrees");
		        	        	         printf("\n12 PM\t22 Degrees");
		        	        	         printf("\n1  PM\t24 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t24 Degrees");
		        	        	         printf("\n3  PM\t25 Degrees");
		        	        	         printf("\n4  PM\t23 Degrees");
		        	        	         printf("\n5  PM\t22 Degrees");
		        	        	         printf("\n6  PM\t21 Degrees");
		        	        	         printf("\n7  PM\t20 Degrees");
		        	        	         printf("\n8  PM\t20 Degrees");
		        	        	         printf("\n9  PM\t19 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t18 Degrees");
		        	        	         printf("\n11 PM\t17 Degrees");
		        	        	         printf("\n12 AM\t16 Degrees");
		        	        	         printf("\n1  AM\t14 Degrees");
		        	        	         printf("\n2  AM\t13 Degrees");
		        	        	         printf("\n3  AM\t12 Degrees");
		        	        	         printf("\n4  AM\t11 Degrees");
		        	        	         printf("\n5  AM\t10 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
					case 15:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t13 Degrees");
		        	        	         printf("\n7  AM\t14 Degrees");
		        	        	         printf("\n8  AM\t15 Degrees");
		        	        	         printf("\n9  AM\t16 Degrees");
		        	        	         printf("\n10 AM\t17 Degrees");
		        	        	         printf("\n11 AM\t19 Degrees");
		        	        	         printf("\n12 PM\t20 Degrees");
		        	        	         printf("\n1  PM\t21 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t23 Degrees");
		        	        	         printf("\n3  PM\t24 Degrees");
		        	        	         printf("\n4  PM\t23 Degrees");
		        	        	         printf("\n5  PM\t22 Degrees");
		        	        	         printf("\n6  PM\t21 Degrees");
		        	        	         printf("\n7  PM\t20 Degrees");
		        	        	         printf("\n8  PM\t20 Degrees");
		        	        	         printf("\n9  PM\t19 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t18 Degrees");
		        	        	         printf("\n11 PM\t18 Degrees");
		        	        	         printf("\n12 AM\t17 Degrees");
		        	        	         printf("\n1  AM\t16 Degrees");
		        	        	         printf("\n2  AM\t15 Degrees");
		        	        	         printf("\n3  AM\t14 Degrees");
		        	        	         printf("\n4  AM\t14 Degrees");
		        	        	         printf("\n5  AM\t13 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
		            case 16:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t14 Degrees");
		        	        	         printf("\n7  AM\t15 Degrees");
		        	        	         printf("\n8  AM\t16 Degrees");
		        	        	         printf("\n9  AM\t17 Degrees");
		        	        	         printf("\n10 AM\t18 Degrees");
		        	        	         printf("\n11 AM\t19 Degrees");
		        	        	         printf("\n12 PM\t20 Degrees");
		        	        	         printf("\n1  PM\t21 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t23 Degrees");
		        	        	         printf("\n3  PM\t24 Degrees");
		        	        	         printf("\n4  PM\t23 Degrees");
		        	        	         printf("\n5  PM\t22 Degrees");
		        	        	         printf("\n6  PM\t21 Degrees");
		        	        	         printf("\n7  PM\t20 Degrees");
		        	        	         printf("\n8  PM\t20 Degrees");
		        	        	         printf("\n9  PM\t19 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t19 Degrees");
		        	        	         printf("\n11 PM\t18 Degrees");
		        	        	         printf("\n12 AM\t17 Degrees");
		        	        	         printf("\n1  AM\t16 Degrees");
		        	        	         printf("\n2  AM\t16 Degrees");
		        	        	         printf("\n3  AM\t15 Degrees");
		        	        	         printf("\n4  AM\t14 Degrees");
		        	        	         printf("\n5  AM\t14 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
		        	case 17:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t15 Degrees");
		        	        	         printf("\n7  AM\t17 Degrees");
		        	        	         printf("\n8  AM\t18 Degrees");
		        	        	         printf("\n9  AM\t19 Degrees");
		        	        	         printf("\n10 AM\t20 Degrees");
		        	        	         printf("\n11 AM\t21 Degrees");
		        	        	         printf("\n12 PM\t23 Degrees");
		        	        	         printf("\n1  PM\t25 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t27 Degrees");
		        	        	         printf("\n3  PM\t27 Degrees");
		        	        	         printf("\n4  PM\t27 Degrees");
		        	        	         printf("\n5  PM\t26 Degrees");
		        	        	         printf("\n6  PM\t26 Degrees");
		        	        	         printf("\n7  PM\t25 Degrees");
		        	        	         printf("\n8  PM\t24 Degrees");
		        	        	         printf("\n9  PM\t24 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t23 Degrees");
		        	        	         printf("\n11 PM\t22 Degrees");
		        	        	         printf("\n12 AM\t20 Degrees");
		        	        	         printf("\n1  AM\t19 Degrees");
		        	        	         printf("\n2  AM\t18 Degrees");
		        	        	         printf("\n3  AM\t17 Degrees");
		        	        	         printf("\n4  AM\t16 Degrees");
		        	        	         printf("\n5  AM\t14 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
					case 18:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t15 Degrees");
		        	        	         printf("\n7  AM\t17 Degrees");
		        	        	         printf("\n8  AM\t18 Degrees");
		        	        	         printf("\n9  AM\t19 Degrees");
		        	        	         printf("\n10 AM\t20 Degrees");
		        	        	         printf("\n11 AM\t21 Degrees");
		        	        	         printf("\n12 PM\t23 Degrees");
		        	        	         printf("\n1  PM\t25 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t27 Degrees");
		        	        	         printf("\n3  PM\t27 Degrees");
		        	        	         printf("\n4  PM\t27 Degrees");
		        	        	         printf("\n5  PM\t26 Degrees");
		        	        	         printf("\n6  PM\t26 Degrees");
		        	        	         printf("\n7  PM\t25 Degrees");
		        	        	         printf("\n8  PM\t24 Degrees");
		        	        	         printf("\n9  PM\t24 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t23 Degrees");
		        	        	         printf("\n11 PM\t22 Degrees");
		        	        	         printf("\n12 AM\t20 Degrees");
		        	        	         printf("\n1  AM\t19 Degrees");
		        	        	         printf("\n2  AM\t18 Degrees");
		        	        	         printf("\n3  AM\t17 Degrees");
		        	        	         printf("\n4  AM\t16 Degrees");
		        	        	         printf("\n5  AM\t14 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
					case 19:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t14 Degrees");
		        	        	         printf("\n7  AM\t16 Degrees");
		        	        	         printf("\n8  AM\t18 Degrees");
		        	        	         printf("\n9  AM\t19 Degrees");
		        	        	         printf("\n10 AM\t20 Degrees");
		        	        	         printf("\n11 AM\t21 Degrees");
		        	        	         printf("\n12 PM\t23 Degrees");
		        	        	         printf("\n1  PM\t25 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t26 Degrees");
		        	        	         printf("\n3  PM\t27 Degrees");
		        	        	         printf("\n4  PM\t27 Degrees");
		        	        	         printf("\n5  PM\t26 Degrees");
		        	        	         printf("\n6  PM\t26 Degrees");
		        	        	         printf("\n7  PM\t25 Degrees");
		        	        	         printf("\n8  PM\t24 Degrees");
		        	        	         printf("\n9  PM\t24 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t23 Degrees");
		        	        	         printf("\n11 PM\t22 Degrees");
		        	        	         printf("\n12 AM\t20 Degrees");
		        	        	         printf("\n1  AM\t19 Degrees");
		        	        	         printf("\n2  AM\t18 Degrees");
		        	        	         printf("\n3  AM\t17 Degrees");
		        	        	         printf("\n4  AM\t14 Degrees");
		        	        	         printf("\n5  AM\t13 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
		        	case 20:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t22 Degrees");
		        	        	         printf("\n7  AM\t23 Degrees");
		        	        	         printf("\n8  AM\t24 Degrees");
		        	        	         printf("\n9  AM\t26 Degrees");
		        	        	         printf("\n10 AM\t27 Degrees");
		        	        	         printf("\n11 AM\t27 Degrees");
		        	        	         printf("\n12 PM\t28 Degrees");
		        	        	         printf("\n1  PM\t29 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t29 Degrees");
		        	        	         printf("\n3  PM\t30 Degrees");
		        	        	         printf("\n4  PM\t30 Degrees");
		        	        	         printf("\n5  PM\t29 Degrees");
		        	        	         printf("\n6  PM\t29 Degrees");
		        	        	         printf("\n7  PM\t28 Degrees");
		        	        	         printf("\n8  PM\t27 Degrees");
		        	        	         printf("\n9  PM\t27 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t26 Degrees");
		        	        	         printf("\n11 PM\t26 Degrees");
		        	        	         printf("\n12 AM\t25 Degrees");
		        	        	         printf("\n1  AM\t25 Degrees");
		        	        	         printf("\n2  AM\t24 Degrees");
		        	        	         printf("\n3  AM\t24 Degrees");
		        	        	         printf("\n4  AM\t23 Degrees");
		        	        	         printf("\n5  AM\t22 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
					case 21:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t23 Degrees");
		        	        	         printf("\n7  AM\t24 Degrees");
		        	        	         printf("\n8  AM\t25 Degrees");
		        	        	         printf("\n9  AM\t25 Degrees");
		        	        	         printf("\n10 AM\t26 Degrees");
		        	        	         printf("\n11 AM\t26 Degrees");
		        	        	         printf("\n12 PM\t27 Degrees");
		        	        	         printf("\n1  PM\t27 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t28 Degrees");
		        	        	         printf("\n3  PM\t28 Degrees");
		        	        	         printf("\n4  PM\t28 Degrees");
		        	        	         printf("\n5  PM\t28 Degrees");
		        	        	         printf("\n6  PM\t27 Degrees");
		        	        	         printf("\n7  PM\t27 Degrees");
		        	        	         printf("\n8  PM\t27 Degrees");
		        	        	         printf("\n9  PM\t27 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t26 Degrees");
		        	        	         printf("\n11 PM\t26 Degrees");
		        	        	         printf("\n12 AM\t26 Degrees");
		        	        	         printf("\n1  AM\t25 Degrees");
		        	        	         printf("\n2  AM\t25 Degrees");
		        	        	         printf("\n3  AM\t24 Degrees");
		        	        	         printf("\n4  AM\t24 Degrees");
		        	        	         printf("\n5  AM\t23 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
		            case 22:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t18 Degrees");
		        	        	         printf("\n7  AM\t19 Degrees");
		        	        	         printf("\n8  AM\t19 Degrees");
		        	        	         printf("\n9  AM\t20 Degrees");
		        	        	         printf("\n10 AM\t20 Degrees");
		        	        	         printf("\n11 AM\t21 Degrees");
		        	        	         printf("\n12 PM\t21 Degrees");
		        	        	         printf("\n1  PM\t22 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t22 Degrees");
		        	        	         printf("\n3  PM\t23 Degrees");
		        	        	         printf("\n4  PM\t23 Degrees");
		        	        	         printf("\n5  PM\t23 Degrees");
		        	        	         printf("\n6  PM\t22 Degrees");
		        	        	         printf("\n7  PM\t22 Degrees");
		        	        	         printf("\n8  PM\t22 Degrees");
		        	        	         printf("\n9  PM\t21 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t21 Degrees");
		        	        	         printf("\n11 PM\t21 Degrees");
		        	        	         printf("\n12 AM\t21 Degrees");
		        	        	         printf("\n1  AM\t20 Degrees");
		        	        	         printf("\n2  AM\t20 Degrees");
		        	        	         printf("\n3  AM\t19 Degrees");
		        	        	         printf("\n4  AM\t19 Degrees");
		        	        	         printf("\n5  AM\t18 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
		        	case 23:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t14 Degrees");
		        	        	         printf("\n7  AM\t15 Degrees");
		        	        	         printf("\n8  AM\t16 Degrees");
		        	        	         printf("\n9  AM\t17 Degrees");
		        	        	         printf("\n10 AM\t18 Degrees");
		        	        	         printf("\n11 AM\t19 Degrees");
		        	        	         printf("\n12 PM\t20 Degrees");
		        	        	         printf("\n1  PM\t21 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t23 Degrees");
		        	        	         printf("\n3  PM\t24 Degrees");
		        	        	         printf("\n4  PM\t23 Degrees");
		        	        	         printf("\n5  PM\t22 Degrees");
		        	        	         printf("\n6  PM\t21 Degrees");
		        	        	         printf("\n7  PM\t20 Degrees");
		        	        	         printf("\n8  PM\t20 Degrees");
		        	        	         printf("\n9  PM\t19 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t19 Degrees");
		        	        	         printf("\n11 PM\t18 Degrees");
		        	        	         printf("\n12 AM\t17 Degrees");
		        	        	         printf("\n1  AM\t16 Degrees");
		        	        	         printf("\n2  AM\t16 Degrees");
		        	        	         printf("\n3  AM\t15 Degrees");
		        	        	         printf("\n4  AM\t14 Degrees");
		        	        	         printf("\n5  AM\t14 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
					case 24:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t10 Degrees");
		        	        	         printf("\n7  AM\t12 Degrees");
		        	        	         printf("\n8  AM\t13 Degrees");
		        	        	         printf("\n9  AM\t15 Degrees");
		        	        	         printf("\n10 AM\t16 Degrees");
		        	        	         printf("\n11 AM\t18 Degrees");
		        	        	         printf("\n12 PM\t20 Degrees");
		        	        	         printf("\n1  PM\t21 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t23 Degrees");
		        	        	         printf("\n3  PM\t25 Degrees");
		        	        	         printf("\n4  PM\t23 Degrees");
		        	        	         printf("\n5  PM\t22 Degrees");
		        	        	         printf("\n6  PM\t21 Degrees");
		        	        	         printf("\n7  PM\t20 Degrees");
		        	        	         printf("\n8  PM\t19 Degrees");
		        	        	         printf("\n9  PM\t18 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t17 Degrees");
		        	        	         printf("\n11 PM\t16 Degrees");
		        	        	         printf("\n12 AM\t15 Degrees");
		        	        	         printf("\n1  AM\t14 Degrees");
		        	        	         printf("\n2  AM\t13 Degrees");
		        	        	         printf("\n3  AM\t11 Degrees");
		        	        	         printf("\n4  AM\t10 Degrees");
		        	        	         printf("\n5  AM\t9  Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
					case 25:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t10 Degrees");
		        	        	         printf("\n7  AM\t12 Degrees");
		        	        	         printf("\n8  AM\t13 Degrees");
		        	        	         printf("\n9  AM\t15 Degrees");
		        	        	         printf("\n10 AM\t16 Degrees");
		        	        	         printf("\n11 AM\t18 Degrees");
		        	        	         printf("\n12 PM\t20 Degrees");
		        	        	         printf("\n1  PM\t21 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t23 Degrees");
		        	        	         printf("\n3  PM\t25 Degrees");
		        	        	         printf("\n4  PM\t23 Degrees");
		        	        	         printf("\n5  PM\t22 Degrees");
		        	        	         printf("\n6  PM\t21 Degrees");
		        	        	         printf("\n7  PM\t20 Degrees");
		        	        	         printf("\n8  PM\t19 Degrees");
		        	        	         printf("\n9  PM\t18 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t17 Degrees");
		        	        	         printf("\n11 PM\t16 Degrees");
		        	        	         printf("\n12 AM\t15 Degrees");
		        	        	         printf("\n1  AM\t14 Degrees");
		        	        	         printf("\n2  AM\t13 Degrees");
		        	        	         printf("\n3  AM\t11 Degrees");
		        	        	         printf("\n4  AM\t10 Degrees");
		        	        	         printf("\n5  AM\t9  Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
		        	case 26:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t11 Degrees");
		        	        	         printf("\n7  AM\t13 Degrees");
		        	        	         printf("\n8  AM\t14 Degrees");
		        	        	         printf("\n9  AM\t17 Degrees");
		        	        	         printf("\n10 AM\t19 Degrees");
		        	        	         printf("\n11 AM\t20 Degrees");
		        	        	         printf("\n12 PM\t22 Degrees");
		        	        	         printf("\n1  PM\t24 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t25 Degrees");
		        	        	         printf("\n3  PM\t26 Degrees");
		        	        	         printf("\n4  PM\t24 Degrees");
		        	        	         printf("\n5  PM\t23 Degrees");
		        	        	         printf("\n6  PM\t22 Degrees");
		        	        	         printf("\n7  PM\t21 Degrees");
		        	        	         printf("\n8  PM\t20 Degrees");
		        	        	         printf("\n9  PM\t19 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t18 Degrees");
		        	        	         printf("\n11 PM\t17 Degrees");
		        	        	         printf("\n12 AM\t16 Degrees");
		        	        	         printf("\n1  AM\t14 Degrees");
		        	        	         printf("\n2  AM\t13 Degrees");
		        	        	         printf("\n3  AM\t12 Degrees");
		        	        	         printf("\n4  AM\t11 Degrees");
		        	        	         printf("\n5  AM\t10 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
					case 27:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t11 Degrees");
		        	        	         printf("\n7  AM\t13 Degrees");
		        	        	         printf("\n8  AM\t14 Degrees");
		        	        	         printf("\n9  AM\t17 Degrees");
		        	        	         printf("\n10 AM\t19 Degrees");
		        	        	         printf("\n11 AM\t20 Degrees");
		        	        	         printf("\n12 PM\t22 Degrees");
		        	        	         printf("\n1  PM\t24 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t25 Degrees");
		        	        	         printf("\n3  PM\t26 Degrees");
		        	        	         printf("\n4  PM\t24 Degrees");
		        	        	         printf("\n5  PM\t23 Degrees");
		        	        	         printf("\n6  PM\t22 Degrees");
		        	        	         printf("\n7  PM\t21 Degrees");
		        	        	         printf("\n8  PM\t20 Degrees");
		        	        	         printf("\n9  PM\t19 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t18 Degrees");
		        	        	         printf("\n11 PM\t17 Degrees");
		        	        	         printf("\n12 AM\t16 Degrees");
		        	        	         printf("\n1  AM\t15 Degrees");
		        	        	         printf("\n2  AM\t14 Degrees");
		        	        	         printf("\n3  AM\t13 Degrees");
		        	        	         printf("\n4  AM\t12 Degrees");
		        	        	         printf("\n5  AM\t11 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
		            case 28:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t14 Degrees");
		        	        	         printf("\n7  AM\t16 Degrees");
		        	        	         printf("\n8  AM\t18 Degrees");
		        	        	         printf("\n9  AM\t19 Degrees");
		        	        	         printf("\n10 AM\t20 Degrees");
		        	        	         printf("\n11 AM\t21 Degrees");
		        	        	         printf("\n12 PM\t23 Degrees");
		        	        	         printf("\n1  PM\t25 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t26 Degrees");
		        	        	         printf("\n3  PM\t27 Degrees");
		        	        	         printf("\n4  PM\t27 Degrees");
		        	        	         printf("\n5  PM\t26 Degrees");
		        	        	         printf("\n6  PM\t26 Degrees");
		        	        	         printf("\n7  PM\t25 Degrees");
		        	        	         printf("\n8  PM\t24 Degrees");
		        	        	         printf("\n9  PM\t24 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t23 Degrees");
		        	        	         printf("\n11 PM\t22 Degrees");
		        	        	         printf("\n12 AM\t20 Degrees");
		        	        	         printf("\n1  AM\t19 Degrees");
		        	        	         printf("\n2  AM\t18 Degrees");
		        	        	         printf("\n3  AM\t17 Degrees");
		        	        	         printf("\n4  AM\t14 Degrees");
		        	        	         printf("\n5  AM\t13 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
		        	case 29:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t14 Degrees");
		        	        	         printf("\n7  AM\t16 Degrees");
		        	        	         printf("\n8  AM\t18 Degrees");
		        	        	         printf("\n9  AM\t19 Degrees");
		        	        	         printf("\n10 AM\t20 Degrees");
		        	        	         printf("\n11 AM\t21 Degrees");
		        	        	         printf("\n12 PM\t23 Degrees");
		        	        	         printf("\n1  PM\t25 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t27 Degrees");
		        	        	         printf("\n3  PM\t28 Degrees");
		        	        	         printf("\n4  PM\t27 Degrees");
		        	        	         printf("\n5  PM\t26 Degrees");
		        	        	         printf("\n6  PM\t26 Degrees");
		        	        	         printf("\n7  PM\t25 Degrees");
		        	        	         printf("\n8  PM\t24 Degrees");
		        	        	         printf("\n9  PM\t24 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t23 Degrees");
		        	        	         printf("\n11 PM\t22 Degrees");
		        	        	         printf("\n12 AM\t20 Degrees");
		        	        	         printf("\n1  AM\t19 Degrees");
		        	        	         printf("\n2  AM\t18 Degrees");
		        	        	         printf("\n3  AM\t17 Degrees");
		        	        	         printf("\n4  AM\t15 Degrees");
		        	        	         printf("\n5  AM\t14 Degrees");
		        	        		     break;	 	     
							}
						    printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
					case 30:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t14 Degrees");
		        	        	         printf("\n7  AM\t16 Degrees");
		        	        	         printf("\n8  AM\t18 Degrees");
		        	        	         printf("\n9  AM\t19 Degrees");
		        	        	         printf("\n10 AM\t20 Degrees");
		        	        	         printf("\n11 AM\t21 Degrees");
		        	        	         printf("\n12 PM\t23 Degrees");
		        	        	         printf("\n1  PM\t25 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t27 Degrees");
		        	        	         printf("\n3  PM\t28 Degrees");
		        	        	         printf("\n4  PM\t27 Degrees");
		        	        	         printf("\n5  PM\t26 Degrees");
		        	        	         printf("\n6  PM\t26 Degrees");
		        	        	         printf("\n7  PM\t25 Degrees");
		        	        	         printf("\n8  PM\t24 Degrees");
		        	        	         printf("\n9  PM\t24 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t23 Degrees");
		        	        	         printf("\n11 PM\t22 Degrees");
		        	        	         printf("\n12 AM\t20 Degrees");
		        	        	         printf("\n1  AM\t19 Degrees");
		        	        	         printf("\n2  AM\t18 Degrees");
		        	        	         printf("\n3  AM\t17 Degrees");
		        	        	         printf("\n4  AM\t15 Degrees");
		        	        	         printf("\n5  AM\t14 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
					case 31:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t23 Degrees");
		        	        	         printf("\n7  AM\t24 Degrees");
		        	        	         printf("\n8  AM\t26 Degrees");
		        	        	         printf("\n9  AM\t26 Degrees");
		        	        	         printf("\n10 AM\t27 Degrees");
		        	        	         printf("\n11 AM\t28 Degrees");
		        	        	         printf("\n12 PM\t29 Degrees");
		        	        	         printf("\n1  PM\t29 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t30 Degrees");
		        	        	         printf("\n3  PM\t30 Degrees");
		        	        	         printf("\n4  PM\t30 Degrees");
		        	        	         printf("\n5  PM\t29 Degrees");
		        	        	         printf("\n6  PM\t29 Degrees");
		        	        	         printf("\n7  PM\t28 Degrees");
		        	        	         printf("\n8  PM\t28 Degrees");
		        	        	         printf("\n9  PM\t27 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t27 Degrees");
		        	        	         printf("\n11 PM\t26 Degrees");
		        	        	         printf("\n12 AM\t26 Degrees");
		        	        	         printf("\n1  AM\t25 Degrees");
		        	        	         printf("\n2  AM\t25 Degrees");
		        	        	         printf("\n3  AM\t24 Degrees");
		        	        	         printf("\n4  AM\t24 Degrees");
		        	        	         printf("\n5  AM\t23 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;	   	   	   	    	   	   
				}
			    break;
		case 2: printf("\nEnter the day of the month.\n(enter the number that coincides with the day)");
		        printf("\nSun\tMon\tTue\tWed\tThu\tFri\tSat");
		        printf("\n   \t   \t1  \t2  \t3  \t4  \t5\n6  \t7  \t8  \t9  \t10 \t11 \t12\n13 \t14 \t15 \t16 \t17 \t18 \t19\n20 \t21 \t122 \t23 \t24 \t25 \t26\n27 \t28");
		        printf("\nEnter here:");   scanf("\n%d",&day);
		        switch(day)
		        {
		        	case 1: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t17 Degrees");
		        	        	         printf("\n7  AM\t18 Degrees");
		        	        	         printf("\n8  AM\t20 Degrees");
		        	        	         printf("\n9  AM\t22 Degrees");
		        	        	         printf("\n10 AM\t24 Degrees");
		        	        	         printf("\n11 AM\t26 Degrees");
		        	        	         printf("\n12 PM\t27 Degrees");
		        	        	         printf("\n1  PM\t29 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t30 Degrees");
		        	        	         printf("\n3  PM\t31 Degrees");
		        	        	         printf("\n4  PM\t31 Degrees");
		        	        	         printf("\n5  PM\t30 Degrees");
		        	        	         printf("\n6  PM\t29 Degrees");
		        	        	         printf("\n7  PM\t28 Degrees");
		        	        	         printf("\n8  PM\t27 Degrees");
		        	        	         printf("\n9  PM\t26 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t25 Degrees");
		        	        	         printf("\n11 PM\t24 Degrees");
		        	        	         printf("\n12 AM\t23 Degrees");
		        	        	         printf("\n1  AM\t21 Degrees");
		        	        	         printf("\n2  AM\t19 Degrees");
		        	        	         printf("\n3  AM\t18 Degrees");
		        	        	         printf("\n4  AM\t17 Degrees");
		        	        	         printf("\n5  AM\t16 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t22.2 Celsius\nHumidity\t46 percent\nWindspeed\t18.2 kph");
		        		    break;
					case 2: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t17 Degrees");
		        	        	         printf("\n7  AM\t19 Degrees");
		        	        	         printf("\n8  AM\t20 Degrees");
		        	        	         printf("\n9  AM\t22 Degrees");
		        	        	         printf("\n10 AM\t24 Degrees");
		        	        	         printf("\n11 AM\t25 Degrees");
		        	        	         printf("\n12 PM\t27 Degrees");
		        	        	         printf("\n1  PM\t28 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t28 Degrees");
		        	        	         printf("\n3  PM\t29 Degrees");
		        	        	         printf("\n4  PM\t29 Degrees");
		        	        	         printf("\n5  PM\t27 Degrees");
		        	        	         printf("\n6  PM\t26 Degrees");
		        	        	         printf("\n7  PM\t25 Degrees");
		        	        	         printf("\n8  PM\t24 Degrees");
		        	        	         printf("\n9  PM\t23 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t22 Degrees");
		        	        	         printf("\n11 PM\t21 Degrees");
		        	        	         printf("\n12 AM\t20 Degrees");
		        	        	         printf("\n1  AM\t19 Degrees");
		        	        	         printf("\n2  AM\t18 Degrees");
		        	        	         printf("\n3  AM\t18 Degrees");
		        	        	         printf("\n4  AM\t17 Degrees");
		        	        	         printf("\n5  AM\t16 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t22.2 Celsius\nHumidity\t46 percent\nWindspeed\t18.2 kph");
		        		    break;
					case 3: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t20 Degrees");
		        	        	         printf("\n7  AM\t22 Degrees");
		        	        	         printf("\n8  AM\t23 Degrees");
		        	        	         printf("\n9  AM\t24 Degrees");
		        	        	         printf("\n10 AM\t25 Degrees");
		        	        	         printf("\n11 AM\t26 Degrees");
		        	        	         printf("\n12 PM\t28 Degrees");
		        	        	         printf("\n1  PM\t29 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t30 Degrees");
		        	        	         printf("\n3  PM\t30 Degrees");
		        	        	         printf("\n4  PM\t30 Degrees");
		        	        	         printf("\n5  PM\t29 Degrees");
		        	        	         printf("\n6  PM\t29 Degrees");
		        	        	         printf("\n7  PM\t28 Degrees");
		        	        	         printf("\n8  PM\t28 Degrees");
		        	        	         printf("\n9  PM\t27 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t26 Degrees");
		        	        	         printf("\n11 PM\t25 Degrees");
		        	        	         printf("\n12 AM\t24 Degrees");
		        	        	         printf("\n1  AM\t23 Degrees");
		        	        	         printf("\n2  AM\t22 Degrees");
		        	        	         printf("\n3  AM\t21 Degrees");
		        	        	         printf("\n4  AM\t20 Degrees");
		        	        	         printf("\n5  AM\t19 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t22.2 Celsius\nHumidity\t46 percent\nWindspeed\t18.2 kph");
		        		    break;
		            case 4: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t16 Degrees");
		        	        	         printf("\n7  AM\t18 Degrees");
		        	        	         printf("\n8  AM\t20 Degrees");
		        	        	         printf("\n9  AM\t22 Degrees");
		        	        	         printf("\n10 AM\t24 Degrees");
		        	        	         printf("\n11 AM\t26 Degrees");
		        	        	         printf("\n12 PM\t27 Degrees");
		        	        	         printf("\n1  PM\t29 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t30 Degrees");
		        	        	         printf("\n3  PM\t31 Degrees");
		        	        	         printf("\n4  PM\t31 Degrees");
		        	        	         printf("\n5  PM\t30 Degrees");
		        	        	         printf("\n6  PM\t29 Degrees");
		        	        	         printf("\n7  PM\t28 Degrees");
		        	        	         printf("\n8  PM\t27 Degrees");
		        	        	         printf("\n9  PM\t26 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t25 Degrees");
		        	        	         printf("\n11 PM\t24 Degrees");
		        	        	         printf("\n12 AM\t23 Degrees");
		        	        	         printf("\n1  AM\t21 Degrees");
		        	        	         printf("\n2  AM\t19 Degrees");
		        	        	         printf("\n3  AM\t17 Degrees");
		        	        	         printf("\n4  AM\t16 Degrees");
		        	        	         printf("\n5  AM\t15 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t22.2 Celsius\nHumidity\t46 percent\nWindspeed\t18.2 kph");
		        		    break;
		        	case 5: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t14 Degrees");
		        	        	         printf("\n7  AM\t16 Degrees");
		        	        	         printf("\n8  AM\t17 Degrees");
		        	        	         printf("\n9  AM\t18 Degrees");
		        	        	         printf("\n10 AM\t21 Degrees");
		        	        	         printf("\n11 AM\t23 Degrees");
		        	        	         printf("\n12 PM\t24 Degrees");
		        	        	         printf("\n1  PM\t26 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t27 Degrees");
		        	        	         printf("\n3  PM\t28 Degrees");
		        	        	         printf("\n4  PM\t28 Degrees");
		        	        	         printf("\n5  PM\t26 Degrees");
		        	        	         printf("\n6  PM\t25 Degrees");
		        	        	         printf("\n7  PM\t24 Degrees");
		        	        	         printf("\n8  PM\t23 Degrees");
		        	        	         printf("\n9  PM\t22 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t21 Degrees");
		        	        	         printf("\n11 PM\t20 Degrees");
		        	        	         printf("\n12 AM\t19 Degrees");
		        	        	         printf("\n1  AM\t18 Degrees");
		        	        	         printf("\n2  AM\t16 Degrees");
		        	        	         printf("\n3  AM\t15 Degrees");
		        	        	         printf("\n4  AM\t14 Degrees");
		        	        	         printf("\n5  AM\t13 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t22.2 Celsius\nHumidity\t46 percent\nWindspeed\t18.2 kph");
		        		    break;
					case 6: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t20 Degrees");
		        	        	         printf("\n7  AM\t22 Degrees");
		        	        	         printf("\n8  AM\t23 Degrees");
		        	        	         printf("\n9  AM\t24 Degrees");
		        	        	         printf("\n10 AM\t25 Degrees");
		        	        	         printf("\n11 AM\t25 Degrees");
		        	        	         printf("\n12 PM\t26 Degrees");
		        	        	         printf("\n1  PM\t26 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t27 Degrees");
		        	        	         printf("\n3  PM\t27 Degrees");
		        	        	         printf("\n4  PM\t27 Degrees");
		        	        	         printf("\n5  PM\t26 Degrees");
		        	        	         printf("\n6  PM\t26 Degrees");
		        	        	         printf("\n7  PM\t25 Degrees");
		        	        	         printf("\n8  PM\t25 Degrees");
		        	        	         printf("\n9  PM\t24 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t24 Degrees");
		        	        	         printf("\n11 PM\t23 Degrees");
		        	        	         printf("\n12 AM\t23 Degrees");
		        	        	         printf("\n1  AM\t22 Degrees");
		        	        	         printf("\n2  AM\t22 Degrees");
		        	        	         printf("\n3  AM\t21 Degrees");
		        	        	         printf("\n4  AM\t20 Degrees");
		        	        	         printf("\n5  AM\t19 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t22.2 Celsius\nHumidity\t46 percent\nWindspeed\t18.2 kph");
		        		    break;
					case 7: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t17 Degrees");
		        	        	         printf("\n7  AM\t19 Degrees");
		        	        	         printf("\n8  AM\t20 Degrees");
		        	        	         printf("\n9  AM\t22 Degrees");
		        	        	         printf("\n10 AM\t23 Degrees");
		        	        	         printf("\n11 AM\t24 Degrees");
		        	        	         printf("\n12 PM\t25 Degrees");
		        	        	         printf("\n1  PM\t26 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t27 Degrees");
		        	        	         printf("\n3  PM\t27 Degrees");
		        	        	         printf("\n4  PM\t27 Degrees");
		        	        	         printf("\n5  PM\t26 Degrees");
		        	        	         printf("\n6  PM\t26 Degrees");
		        	        	         printf("\n7  PM\t25 Degrees");
		        	        	         printf("\n8  PM\t25 Degrees");
		        	        	         printf("\n9  PM\t24 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t24 Degrees");
		        	        	         printf("\n11 PM\t23 Degrees");
		        	        	         printf("\n12 AM\t22 Degrees");
		        	        	         printf("\n1  AM\t21 Degrees");
		        	        	         printf("\n2  AM\t20 Degrees");
		        	        	         printf("\n3  AM\t19 Degrees");
		        	        	         printf("\n4  AM\t18 Degrees");
		        	        	         printf("\n5  AM\t17 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t22.2 Celsius\nHumidity\t46 percent\nWindspeed\t18.2 kph");
		        		    break;
		        	case 8: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t18 Degrees");
		        	        	         printf("\n7  AM\t19 Degrees");
		        	        	         printf("\n8  AM\t20 Degrees");
		        	        	         printf("\n9  AM\t22 Degrees");
		        	        	         printf("\n10 AM\t23 Degrees");
		        	        	         printf("\n11 AM\t24 Degrees");
		        	        	         printf("\n12 PM\t25 Degrees");
		        	        	         printf("\n1  PM\t26 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t27 Degrees");
		        	        	         printf("\n3  PM\t27 Degrees");
		        	        	         printf("\n4  PM\t27 Degrees");
		        	        	         printf("\n5  PM\t26 Degrees");
		        	        	         printf("\n6  PM\t26 Degrees");
		        	        	         printf("\n7  PM\t25 Degrees");
		        	        	         printf("\n8  PM\t25 Degrees");
		        	        	         printf("\n9  PM\t24 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t24 Degrees");
		        	        	         printf("\n11 PM\t23 Degrees");
		        	        	         printf("\n12 AM\t22 Degrees");
		        	        	         printf("\n1  AM\t21 Degrees");
		        	        	         printf("\n2  AM\t20 Degrees");
		        	        	         printf("\n3  AM\t20 Degrees");
		        	        	         printf("\n4  AM\t19 Degrees");
		        	        	         printf("\n5  AM\t18 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t22.2 Celsius\nHumidity\t46 percent\nWindspeed\t18.2 kph");
		        		    break;
					case 9: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t15 Degrees");
		        	        	         printf("\n7  AM\t16 Degrees");
		        	        	         printf("\n8  AM\t17 Degrees");
		        	        	         printf("\n9  AM\t18 Degrees");
		        	        	         printf("\n10 AM\t21 Degrees");
		        	        	         printf("\n11 AM\t23 Degrees");
		        	        	         printf("\n12 PM\t24 Degrees");
		        	        	         printf("\n1  PM\t26 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t27 Degrees");
		        	        	         printf("\n3  PM\t28 Degrees");
		        	        	         printf("\n4  PM\t28 Degrees");
		        	        	         printf("\n5  PM\t26 Degrees");
		        	        	         printf("\n6  PM\t25 Degrees");
		        	        	         printf("\n7  PM\t24 Degrees");
		        	        	         printf("\n8  PM\t23 Degrees");
		        	        	         printf("\n9  PM\t22 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t21 Degrees");
		        	        	         printf("\n11 PM\t20 Degrees");
		        	        	         printf("\n12 AM\t20 Degrees");
		        	        	         printf("\n1  AM\t19 Degrees");
		        	        	         printf("\n2  AM\t18 Degrees");
		        	        	         printf("\n3  AM\t17 Degrees");
		        	        	         printf("\n4  AM\t16 Degrees");
		        	        	         printf("\n5  AM\t15 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t22.2 Celsius\nHumidity\t46 percent\nWindspeed\t18.2 kph");
		        		    break;
		            case 10:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t15 Degrees");
		        	        	         printf("\n7  AM\t17 Degrees");
		        	        	         printf("\n8  AM\t19 Degrees");
		        	        	         printf("\n9  AM\t21 Degrees");
		        	        	         printf("\n10 AM\t23 Degrees");
		        	        	         printf("\n11 AM\t25 Degrees");
		        	        	         printf("\n12 PM\t27 Degrees");
		        	        	         printf("\n1  PM\t28 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t28 Degrees");
		        	        	         printf("\n3  PM\t29 Degrees");
		        	        	         printf("\n4  PM\t29 Degrees");
		        	        	         printf("\n5  PM\t27 Degrees");
		        	        	         printf("\n6  PM\t26 Degrees");
		        	        	         printf("\n7  PM\t25 Degrees");
		        	        	         printf("\n8  PM\t24 Degrees");
		        	        	         printf("\n9  PM\t23 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t22 Degrees");
		        	        	         printf("\n11 PM\t21 Degrees");
		        	        	         printf("\n12 AM\t20 Degrees");
		        	        	         printf("\n1  AM\t19 Degrees");
		        	        	         printf("\n2  AM\t18 Degrees");
		        	        	         printf("\n3  AM\t16 Degrees");
		        	        	         printf("\n4  AM\t15 Degrees");
		        	        	         printf("\n5  AM\t14 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t22.2 Celsius\nHumidity\t46 percent\nWindspeed\t18.2 kph");
		        		    break;
		        	case 11:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t14 Degrees");
		        	        	         printf("\n7  AM\t16 Degrees");
		        	        	         printf("\n8  AM\t18 Degrees");
		        	        	         printf("\n9  AM\t20 Degrees");
		        	        	         printf("\n10 AM\t21 Degrees");
		        	        	         printf("\n11 AM\t23 Degrees");
		        	        	         printf("\n12 PM\t26 Degrees");
		        	        	         printf("\n1  PM\t28 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t29 Degrees");
		        	        	         printf("\n3  PM\t30 Degrees");
		        	        	         printf("\n4  PM\t30 Degrees");
		        	        	         printf("\n5  PM\t28 Degrees");
		        	        	         printf("\n6  PM\t27 Degrees");
		        	        	         printf("\n7  PM\t25 Degrees");
		        	        	         printf("\n8  PM\t23 Degrees");
		        	        	         printf("\n9  PM\t22 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t21 Degrees");
		        	        	         printf("\n11 PM\t20 Degrees");
		        	        	         printf("\n12 AM\t19 Degrees");
		        	        	         printf("\n1  AM\t18 Degrees");
		        	        	         printf("\n2  AM\t16 Degrees");
		        	        	         printf("\n3  AM\t15 Degrees");
		        	        	         printf("\n4  AM\t14 Degrees");
		        	        	         printf("\n5  AM\t13 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t22.2 Celsius\nHumidity\t46 percent\nWindspeed\t18.2 kph");
		        		    break;
					case 12:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t16 Degrees");
		        	        	         printf("\n7  AM\t17 Degrees");
		        	        	         printf("\n8  AM\t18 Degrees");
		        	        	         printf("\n9  AM\t20 Degrees");
		        	        	         printf("\n10 AM\t21 Degrees");
		        	        	         printf("\n11 AM\t23 Degrees");
		        	        	         printf("\n12 PM\t26 Degrees");
		        	        	         printf("\n1  PM\t28 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t29 Degrees");
		        	        	         printf("\n3  PM\t30 Degrees");
		        	        	         printf("\n4  PM\t30 Degrees");
		        	        	         printf("\n5  PM\t28 Degrees");
		        	        	         printf("\n6  PM\t27 Degrees");
		        	        	         printf("\n7  PM\t25 Degrees");
		        	        	         printf("\n8  PM\t23 Degrees");
		        	        	         printf("\n9  PM\t22 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t21 Degrees");
		        	        	         printf("\n11 PM\t20 Degrees");
		        	        	         printf("\n12 AM\t20 Degrees");
		        	        	         printf("\n1  AM\t19 Degrees");
		        	        	         printf("\n2  AM\t18 Degrees");
		        	        	         printf("\n3  AM\t18 Degrees");
		        	        	         printf("\n4  AM\t17 Degrees");
		        	        	         printf("\n5  AM\t16 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t22.2 Celsius\nHumidity\t46 percent\nWindspeed\t18.2 kph");
		        		    break;
					case 13:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t20 Degrees");
		        	        	         printf("\n7  AM\t22 Degrees");
		        	        	         printf("\n8  AM\t23 Degrees");
		        	        	         printf("\n9  AM\t24 Degrees");
		        	        	         printf("\n10 AM\t25 Degrees");
		        	        	         printf("\n11 AM\t25 Degrees");
		        	        	         printf("\n12 PM\t26 Degrees");
		        	        	         printf("\n1  PM\t26 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t27 Degrees");
		        	        	         printf("\n3  PM\t28 Degrees");
		        	        	         printf("\n4  PM\t28 Degrees");
		        	        	         printf("\n5  PM\t26 Degrees");
		        	        	         printf("\n6  PM\t26 Degrees");
		        	        	         printf("\n7  PM\t25 Degrees");
		        	        	         printf("\n8  PM\t25 Degrees");
		        	        	         printf("\n9  PM\t24 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t24 Degrees");
		        	        	         printf("\n11 PM\t23 Degrees");
		        	        	         printf("\n12 AM\t23 Degrees");
		        	        	         printf("\n1  AM\t22 Degrees");
		        	        	         printf("\n2  AM\t22 Degrees");
		        	        	         printf("\n3  AM\t21 Degrees");
		        	        	         printf("\n4  AM\t20 Degrees");
		        	        	         printf("\n5  AM\t19 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t22.2 Celsius\nHumidity\t46 percent\nWindspeed\t18.2 kph");
		        		    break;
		        	case 14:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t15 Degrees");
		        	        	         printf("\n7  AM\t17 Degrees");
		        	        	         printf("\n8  AM\t19 Degrees");
		        	        	         printf("\n9  AM\t21 Degrees");
		        	        	         printf("\n10 AM\t23 Degrees");
		        	        	         printf("\n11 AM\t25 Degrees");
		        	        	         printf("\n12 PM\t27 Degrees");
		        	        	         printf("\n1  PM\t28 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t28 Degrees");
		        	        	         printf("\n3  PM\t29 Degrees");
		        	        	         printf("\n4  PM\t29 Degrees");
		        	        	         printf("\n5  PM\t27 Degrees");
		        	        	         printf("\n6  PM\t26 Degrees");
		        	        	         printf("\n7  PM\t25 Degrees");
		        	        	         printf("\n8  PM\t24 Degrees");
		        	        	         printf("\n9  PM\t23 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t22 Degrees");
		        	        	         printf("\n11 PM\t21 Degrees");
		        	        	         printf("\n12 AM\t20 Degrees");
		        	        	         printf("\n1  AM\t19 Degrees");
		        	        	         printf("\n2  AM\t18 Degrees");
		        	        	         printf("\n3  AM\t17 Degrees");
		        	        	         printf("\n4  AM\t16 Degrees");
		        	        	         printf("\n5  AM\t15 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t22.2 Celsius\nHumidity\t46 percent\nWindspeed\t18.2 kph");
		        		    break;
					case 15:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t16 Degrees");
		        	        	         printf("\n7  AM\t18 Degrees");
		        	        	         printf("\n8  AM\t20 Degrees");
		        	        	         printf("\n9  AM\t22 Degrees");
		        	        	         printf("\n10 AM\t24 Degrees");
		        	        	         printf("\n11 AM\t26 Degrees");
		        	        	         printf("\n12 PM\t27 Degrees");
		        	        	         printf("\n1  PM\t29 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t30 Degrees");
		        	        	         printf("\n3  PM\t31 Degrees");
		        	        	         printf("\n4  PM\t31 Degrees");
		        	        	         printf("\n5  PM\t30 Degrees");
		        	        	         printf("\n6  PM\t29 Degrees");
		        	        	         printf("\n7  PM\t28 Degrees");
		        	        	         printf("\n8  PM\t27 Degrees");
		        	        	         printf("\n9  PM\t26 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t25 Degrees");
		        	        	         printf("\n11 PM\t24 Degrees");
		        	        	         printf("\n12 AM\t23 Degrees");
		        	        	         printf("\n1  AM\t21 Degrees");
		        	        	         printf("\n2  AM\t19 Degrees");
		        	        	         printf("\n3  AM\t17 Degrees");
		        	        	         printf("\n4  AM\t16 Degrees");
		        	        	         printf("\n5  AM\t15 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t22.2 Celsius\nHumidity\t46 percent\nWindspeed\t18.2 kph");
		        		    break;
		            case 16:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t17 Degrees");
		        	        	         printf("\n7  AM\t19 Degrees");
		        	        	         printf("\n8  AM\t21 Degrees");
		        	        	         printf("\n9  AM\t23 Degrees");
		        	        	         printf("\n10 AM\t25 Degrees");
		        	        	         printf("\n11 AM\t27 Degrees");
		        	        	         printf("\n12 PM\t29 Degrees");
		        	        	         printf("\n1  PM\t30 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t31 Degrees");
		        	        	         printf("\n3  PM\t32 Degrees");
		        	        	         printf("\n4  PM\t32 Degrees");
		        	        	         printf("\n5  PM\t30 Degrees");
		        	        	         printf("\n6  PM\t29 Degrees");
		        	        	         printf("\n7  PM\t28 Degrees");
		        	        	         printf("\n8  PM\t27 Degrees");
		        	        	         printf("\n9  PM\t26 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t25 Degrees");
		        	        	         printf("\n11 PM\t24 Degrees");
		        	        	         printf("\n12 AM\t23 Degrees");
		        	        	         printf("\n1  AM\t21 Degrees");
		        	        	         printf("\n2  AM\t19 Degrees");
		        	        	         printf("\n3  AM\t18 Degrees");
		        	        	         printf("\n4  AM\t17 Degrees");
		        	        	         printf("\n5  AM\t16 Degrees");
		        	        		     break;	 	     
							}
						    printf("\nSea temperature\t22.2 Celsius\nHumidity\t46 percent\nWindspeed\t18.2 kph");
		        		    break;
		        	case 17:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t16 Degrees");
		        	        	         printf("\n7  AM\t18 Degrees");
		        	        	         printf("\n8  AM\t20 Degrees");
		        	        	         printf("\n9  AM\t22 Degrees");
		        	        	         printf("\n10 AM\t24 Degrees");
		        	        	         printf("\n11 AM\t26 Degrees");
		        	        	         printf("\n12 PM\t27 Degrees");
		        	        	         printf("\n1  PM\t29 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t30 Degrees");
		        	        	         printf("\n3  PM\t31 Degrees");
		        	        	         printf("\n4  PM\t32 Degrees");
		        	        	         printf("\n5  PM\t30 Degrees");
		        	        	         printf("\n6  PM\t29 Degrees");
		        	        	         printf("\n7  PM\t28 Degrees");
		        	        	         printf("\n8  PM\t27 Degrees");
		        	        	         printf("\n9  PM\t26 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t25 Degrees");
		        	        	         printf("\n11 PM\t24 Degrees");
		        	        	         printf("\n12 AM\t23 Degrees");
		        	        	         printf("\n1  AM\t21 Degrees");
		        	        	         printf("\n2  AM\t19 Degrees");
		        	        	         printf("\n3  AM\t17 Degrees");
		        	        	         printf("\n4  AM\t16 Degrees");
		        	        	         printf("\n5  AM\t15 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t22.2 Celsius\nHumidity\t46 percent\nWindspeed\t18.2 kph");
		        		    break;
					case 18:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	           case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t16 Degrees");
		        	        	         printf("\n7  AM\t18 Degrees");
		        	        	         printf("\n8  AM\t20 Degrees");
		        	        	         printf("\n9  AM\t22 Degrees");
		        	        	         printf("\n10 AM\t24 Degrees");
		        	        	         printf("\n11 AM\t26 Degrees");
		        	        	         printf("\n12 PM\t27 Degrees");
		        	        	         printf("\n1  PM\t29 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t30 Degrees");
		        	        	         printf("\n3  PM\t31 Degrees");
		        	        	         printf("\n4  PM\t32 Degrees");
		        	        	         printf("\n5  PM\t30 Degrees");
		        	        	         printf("\n6  PM\t29 Degrees");
		        	        	         printf("\n7  PM\t28 Degrees");
		        	        	         printf("\n8  PM\t27 Degrees");
		        	        	         printf("\n9  PM\t26 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t25 Degrees");
		        	        	         printf("\n11 PM\t24 Degrees");
		        	        	         printf("\n12 AM\t23 Degrees");
		        	        	         printf("\n1  AM\t21 Degrees");
		        	        	         printf("\n2  AM\t19 Degrees");
		        	        	         printf("\n3  AM\t17 Degrees");
		        	        	         printf("\n4  AM\t16 Degrees");
		        	        	         printf("\n5  AM\t15 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t22.2 Celsius\nHumidity\t46 percent\nWindspeed\t18.2 kph");
		        		    break;
					case 19:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t18 Degrees");
		        	        	         printf("\n7  AM\t20 Degrees");
		        	        	         printf("\n8  AM\t22 Degrees");
		        	        	         printf("\n9  AM\t24 Degrees");
		        	        	         printf("\n10 AM\t25 Degrees");
		        	        	         printf("\n11 AM\t27 Degrees");
		        	        	         printf("\n12 PM\t29 Degrees");
		        	        	         printf("\n1  PM\t30 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t31 Degrees");
		        	        	         printf("\n3  PM\t32 Degrees");
		        	        	         printf("\n4  PM\t32 Degrees");
		        	        	         printf("\n5  PM\t30 Degrees");
		        	        	         printf("\n6  PM\t29 Degrees");
		        	        	         printf("\n7  PM\t28 Degrees");
		        	        	         printf("\n8  PM\t27 Degrees");
		        	        	         printf("\n9  PM\t26 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t25 Degrees");
		        	        	         printf("\n11 PM\t24 Degrees");
		        	        	         printf("\n12 AM\t23 Degrees");
		        	        	         printf("\n1  AM\t22 Degrees");
		        	        	         printf("\n2  AM\t21 Degrees");
		        	        	         printf("\n3  AM\t20 Degrees");
		        	        	         printf("\n4  AM\t19 Degrees");
		        	        	         printf("\n5  AM\t18 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t22.2 Celsius\nHumidity\t46 percent\nWindspeed\t18.2 kph");
		        		    break;
		        	case 20:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t22 Degrees");
		        	        	         printf("\n7  AM\t23 Degrees");
		        	        	         printf("\n8  AM\t25 Degrees");
		        	        	         printf("\n9  AM\t27 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t31 Degrees");
		        	        	         printf("\n12 PM\t32 Degrees");
		        	        	         printf("\n1  PM\t33 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t34 Degrees");
		        	        	         printf("\n3  PM\t34 Degrees");
		        	        	         printf("\n4  PM\t34 Degrees");
		        	        	         printf("\n5  PM\t33 Degrees");
		        	        	         printf("\n6  PM\t32 Degrees");
		        	        	         printf("\n7  PM\t32 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t28 Degrees");
		        	        	         printf("\n1  AM\t27 Degrees");
		        	        	         printf("\n2  AM\t26 Degrees");
		        	        	         printf("\n3  AM\t25 Degrees");
		        	        	         printf("\n4  AM\t24 Degrees");
		        	        	         printf("\n5  AM\t22 Degrees");
		        	        		     break;	 	     
							}
						    printf("\nSea temperature\t22.2 Celsius\nHumidity\t46 percent\nWindspeed\t18.2 kph");
		        		    break;
					case 21:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t21 Degrees");
		        	        	         printf("\n7  AM\t23 Degrees");
		        	        	         printf("\n8  AM\t25 Degrees");
		        	        	         printf("\n9  AM\t26 Degrees");
		        	        	         printf("\n10 AM\t28 Degrees");
		        	        	         printf("\n11 AM\t29 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t30 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t31 Degrees");
		        	        	         printf("\n3  PM\t32 Degrees");
		        	        	         printf("\n4  PM\t32 Degrees");
		        	        	         printf("\n5  PM\t31 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t30 Degrees");
		        	        	         printf("\n8  PM\t29 Degrees");
		        	        	         printf("\n9  PM\t28 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t27 Degrees");
		        	        	         printf("\n11 PM\t26 Degrees");
		        	        	         printf("\n12 AM\t25 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t24 Degrees");
		        	        	         printf("\n3  AM\t23 Degrees");
		        	        	         printf("\n4  AM\t21 Degrees");
		        	        	         printf("\n5  AM\t20 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t22.2 Celsius\nHumidity\t46 percent\nWindspeed\t18.2 kph");
		        		    break;
		            case 22:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t23 Degrees");
		        	        	         printf("\n7  AM\t24 Degrees");
		        	        	         printf("\n8  AM\t26 Degrees");
		        	        	         printf("\n9  AM\t27 Degrees");
		        	        	         printf("\n10 AM\t27 Degrees");
		        	        	         printf("\n11 AM\t28 Degrees");
		        	        	         printf("\n12 PM\t29 Degrees");
		        	        	         printf("\n1  PM\t30 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t30 Degrees");
		        	        	         printf("\n3  PM\t30 Degrees");
		        	        	         printf("\n4  PM\t30 Degrees");
		        	        	         printf("\n5  PM\t30 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t30 Degrees");
		        	        	         printf("\n8  PM\t29 Degrees");
		        	        	         printf("\n9  PM\t29 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t28 Degrees");
		        	        	         printf("\n11 PM\t28 Degrees");
		        	        	         printf("\n12 AM\t27 Degrees");
		        	        	         printf("\n1  AM\t26 Degrees");
		        	        	         printf("\n2  AM\t25 Degrees");
		        	        	         printf("\n3  AM\t24 Degrees");
		        	        	         printf("\n4  AM\t23 Degrees");
		        	        	         printf("\n5  AM\t22 Degrees");
		        	        		     break;	 	     
							}
						    printf("\nSea temperature\t22.2 Celsius\nHumidity\t46 percent\nWindspeed\t18.2 kph");
		        		    break;
		        	case 23:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t20 Degrees");
		        	        	         printf("\n7  AM\t21 Degrees");
		        	        	         printf("\n8  AM\t23 Degrees");
		        	        	         printf("\n9  AM\t24 Degrees");
		        	        	         printf("\n10 AM\t26 Degrees");
		        	        	         printf("\n11 AM\t28 Degrees");
		        	        	         printf("\n12 PM\t29 Degrees");
		        	        	         printf("\n1  PM\t30 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t31 Degrees");
		        	        	         printf("\n3  PM\t32 Degrees");
		        	        	         printf("\n4  PM\t33 Degrees");
		        	        	         printf("\n5  PM\t31 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t30 Degrees");
		        	        	         printf("\n8  PM\t29 Degrees");
		        	        	         printf("\n9  PM\t28 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t27 Degrees");
		        	        	         printf("\n11 PM\t26 Degrees");
		        	        	         printf("\n12 AM\t24 Degrees");
		        	        	         printf("\n1  AM\t23 Degrees");
		        	        	         printf("\n2  AM\t22 Degrees");
		        	        	         printf("\n3  AM\t21 Degrees");
		        	        	         printf("\n4  AM\t20 Degrees");
		        	        	         printf("\n5  AM\t19 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t22.2 Celsius\nHumidity\t46 percent\nWindspeed\t18.2 kph");
		        		    break;
					case 24:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t17 Degrees");
		        	        	         printf("\n7  AM\t19 Degrees");
		        	        	         printf("\n8  AM\t21 Degrees");
		        	        	         printf("\n9  AM\t23 Degrees");
		        	        	         printf("\n10 AM\t25 Degrees");
		        	        	         printf("\n11 AM\t27 Degrees");
		        	        	         printf("\n12 PM\t29 Degrees");
		        	        	         printf("\n1  PM\t30 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t31 Degrees");
		        	        	         printf("\n3  PM\t32 Degrees");
		        	        	         printf("\n4  PM\t32 Degrees");
		        	        	         printf("\n5  PM\t30 Degrees");
		        	        	         printf("\n6  PM\t29 Degrees");
		        	        	         printf("\n7  PM\t28 Degrees");
		        	        	         printf("\n8  PM\t27 Degrees");
		        	        	         printf("\n9  PM\t26 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t25 Degrees");
		        	        	         printf("\n11 PM\t24 Degrees");
		        	        	         printf("\n12 AM\t23 Degrees");
		        	        	         printf("\n1  AM\t21 Degrees");
		        	        	         printf("\n2  AM\t19 Degrees");
		        	        	         printf("\n3  AM\t18 Degrees");
		        	        	         printf("\n4  AM\t17 Degrees");
		        	        	         printf("\n5  AM\t16 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t22.2 Celsius\nHumidity\t46 percent\nWindspeed\t18.2 kph");
		        		    break;
					case 25:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t21 Degrees");
		        	        	         printf("\n7  AM\t23 Degrees");
		        	        	         printf("\n8  AM\t25 Degrees");
		        	        	         printf("\n9  AM\t26 Degrees");
		        	        	         printf("\n10 AM\t28 Degrees");
		        	        	         printf("\n11 AM\t29 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t30 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t31 Degrees");
		        	        	         printf("\n3  PM\t32 Degrees");
		        	        	         printf("\n4  PM\t32 Degrees");
		        	        	         printf("\n5  PM\t31 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t30 Degrees");
		        	        	         printf("\n8  PM\t29 Degrees");
		        	        	         printf("\n9  PM\t28 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t27 Degrees");
		        	        	         printf("\n11 PM\t26 Degrees");
		        	        	         printf("\n12 AM\t25 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t24 Degrees");
		        	        	         printf("\n3  AM\t23 Degrees");
		        	        	         printf("\n4  AM\t22 Degrees");
		        	        	         printf("\n5  AM\t21 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t22.2 Celsius\nHumidity\t46 percent\nWindspeed\t18.2 kph");
		        		    break;
		        	case 26:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t18 Degrees");
		        	        	         printf("\n7  AM\t20 Degrees");
		        	        	         printf("\n8  AM\t22 Degrees");
		        	        	         printf("\n9  AM\t24 Degrees");
		        	        	         printf("\n10 AM\t25 Degrees");
		        	        	         printf("\n11 AM\t27 Degrees");
		        	        	         printf("\n12 PM\t29 Degrees");
		        	        	         printf("\n1  PM\t30 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t31 Degrees");
		        	        	         printf("\n3  PM\t32 Degrees");
		        	        	         printf("\n4  PM\t33 Degrees");
		        	        	         printf("\n5  PM\t30 Degrees");
		        	        	         printf("\n6  PM\t29 Degrees");
		        	        	         printf("\n7  PM\t28 Degrees");
		        	        	         printf("\n8  PM\t27 Degrees");
		        	        	         printf("\n9  PM\t26 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t25 Degrees");
		        	        	         printf("\n11 PM\t24 Degrees");
		        	        	         printf("\n12 AM\t23 Degrees");
		        	        	         printf("\n1  AM\t22 Degrees");
		        	        	         printf("\n2  AM\t21 Degrees");
		        	        	         printf("\n3  AM\t20 Degrees");
		        	        	         printf("\n4  AM\t19 Degrees");
		        	        	         printf("\n5  AM\t18 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t22.2 Celsius\nHumidity\t46 percent\nWindspeed\t18.2 kph");
		        		    break;
					case 27:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t20 Degrees");
		        	        	         printf("\n7  AM\t22 Degrees");
		        	        	         printf("\n8  AM\t23 Degrees");
		        	        	         printf("\n9  AM\t24 Degrees");
		        	        	         printf("\n10 AM\t25 Degrees");
		        	        	         printf("\n11 AM\t25 Degrees");
		        	        	         printf("\n12 PM\t26 Degrees");
		        	        	         printf("\n1  PM\t26 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t27 Degrees");
		        	        	         printf("\n3  PM\t28 Degrees");
		        	        	         printf("\n4  PM\t29 Degrees");
		        	        	         printf("\n5  PM\t27 Degrees");
		        	        	         printf("\n6  PM\t26 Degrees");
		        	        	         printf("\n7  PM\t25 Degrees");
		        	        	         printf("\n8  PM\t25 Degrees");
		        	        	         printf("\n9  PM\t24 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t24 Degrees");
		        	        	         printf("\n11 PM\t23 Degrees");
		        	        	         printf("\n12 AM\t23 Degrees");
		        	        	         printf("\n1  AM\t22 Degrees");
		        	        	         printf("\n2  AM\t22 Degrees");
		        	        	         printf("\n3  AM\t21 Degrees");
		        	        	         printf("\n4  AM\t20 Degrees");
		        	        	         printf("\n5  AM\t19 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t22.2 Celsius\nHumidity\t46 percent\nWindspeed\t18.2 kph");
		        		    break;
		            case 28:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t18 Degrees");
		        	        	         printf("\n7  AM\t20 Degrees");
		        	        	         printf("\n8  AM\t22 Degrees");
		        	        	         printf("\n9  AM\t24 Degrees");
		        	        	         printf("\n10 AM\t25 Degrees");
		        	        	         printf("\n11 AM\t27 Degrees");
		        	        	         printf("\n12 PM\t29 Degrees");
		        	        	         printf("\n1  PM\t30 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t31 Degrees");
		        	        	         printf("\n3  PM\t32 Degrees");
		        	        	         printf("\n4  PM\t33 Degrees");
		        	        	         printf("\n5  PM\t30 Degrees");
		        	        	         printf("\n6  PM\t29 Degrees");
		        	        	         printf("\n7  PM\t28 Degrees");
		        	        	         printf("\n8  PM\t27 Degrees");
		        	        	         printf("\n9  PM\t26 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t25 Degrees");
		        	        	         printf("\n11 PM\t24 Degrees");
		        	        	         printf("\n12 AM\t23 Degrees");
		        	        	         printf("\n1  AM\t22 Degrees");
		        	        	         printf("\n2  AM\t21 Degrees");
		        	        	         printf("\n3  AM\t20 Degrees");
		        	        	         printf("\n4  AM\t19 Degrees");
		        	        	         printf("\n5  AM\t18 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t22.2 Celsius\nHumidity\t46 percent\nWindspeed\t18.2 kph");
		        		    break;
		        }
			    break;
		case 3: printf("\nEnter the day of the month.\n(enter the number that coincides with the day)");
		        printf("\nSun\tMon\tTue\tWed\tThu\tFri\tSat");
		        printf("\n   \t   \t1  \t2  \t3  \t4  \t5\n6  \t7  \t8  \t9  \t10 \t11 \t12\n13 \t14 \t15 \t16 \t17 \t18 \t19\n20 \t21 \t22 \t23 \t24 \t25 \t26\n27 \t28 \t29 \t30 \t31");
		        printf("\nEnter here:");   scanf("\n%d",&day);
		        printf("\n(Caution): Prediction of heat waves near the end of the month");
		        switch(day)
		        {
		        	case 1: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t18 Degrees");
		        	        	         printf("\n7  AM\t20 Degrees");
		        	        	         printf("\n8  AM\t22 Degrees");
		        	        	         printf("\n9  AM\t24 Degrees");
		        	        	         printf("\n10 AM\t25 Degrees");
		        	        	         printf("\n11 AM\t27 Degrees");
		        	        	         printf("\n12 PM\t29 Degrees");
		        	        	         printf("\n1  PM\t30 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t31 Degrees");
		        	        	         printf("\n3  PM\t32 Degrees");
		        	        	         printf("\n4  PM\t33 Degrees");
		        	        	         printf("\n5  PM\t30 Degrees");
		        	        	         printf("\n6  PM\t29 Degrees");
		        	        	         printf("\n7  PM\t28 Degrees");
		        	        	         printf("\n8  PM\t27 Degrees");
		        	        	         printf("\n9  PM\t26 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t25 Degrees");
		        	        	         printf("\n11 PM\t24 Degrees");
		        	        	         printf("\n12 AM\t23 Degrees");
		        	        	         printf("\n1  AM\t22 Degrees");
		        	        	         printf("\n2  AM\t21 Degrees");
		        	        	         printf("\n3  AM\t20 Degrees");
		        	        	         printf("\n4  AM\t19 Degrees");
		        	        	         printf("\n5  AM\t18 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t24.2 Celsius\nHumidity\t55 percent\nWindspeed\t20.1 kph");
		        		    break;
					case 2: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t19 Degrees");
		        	        	         printf("\n7  AM\t20 Degrees");
		        	        	         printf("\n8  AM\t22 Degrees");
		        	        	         printf("\n9  AM\t24 Degrees");
		        	        	         printf("\n10 AM\t25 Degrees");
		        	        	         printf("\n11 AM\t27 Degrees");
		        	        	         printf("\n12 PM\t29 Degrees");
		        	        	         printf("\n1  PM\t30 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t31 Degrees");
		        	        	         printf("\n3  PM\t32 Degrees");
		        	        	         printf("\n4  PM\t32 Degrees");
		        	        	         printf("\n5  PM\t30 Degrees");
		        	        	         printf("\n6  PM\t29 Degrees");
		        	        	         printf("\n7  PM\t28 Degrees");
		        	        	         printf("\n8  PM\t27 Degrees");
		        	        	         printf("\n9  PM\t26 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t25 Degrees");
		        	        	         printf("\n11 PM\t24 Degrees");
		        	        	         printf("\n12 AM\t23 Degrees");
		        	        	         printf("\n1  AM\t22 Degrees");
		        	        	         printf("\n2  AM\t22 Degrees");
		        	        	         printf("\n3  AM\t21 Degrees");
		        	        	         printf("\n4  AM\t20 Degrees");
		        	        	         printf("\n5  AM\t19 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t24.2 Celsius\nHumidity\t55 percent\nWindspeed\t20.1 kph");
		        		    break;
					case 3: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t19 Degrees");
		        	        	         printf("\n7  AM\t20 Degrees");
		        	        	         printf("\n8  AM\t22 Degrees");
		        	        	         printf("\n9  AM\t25 Degrees");
		        	        	         printf("\n10 AM\t27 Degrees");
		        	        	         printf("\n11 AM\t28 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t32 Degrees");
		        	        	         printf("\n3  PM\t33 Degrees");
		        	        	         printf("\n4  PM\t33 Degrees");
		        	        	         printf("\n5  PM\t30 Degrees");
		        	        	         printf("\n6  PM\t29 Degrees");
		        	        	         printf("\n7  PM\t28 Degrees");
		        	        	         printf("\n8  PM\t27 Degrees");
		        	        	         printf("\n9  PM\t26 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t25 Degrees");
		        	        	         printf("\n11 PM\t24 Degrees");
		        	        	         printf("\n12 AM\t23 Degrees");
		        	        	         printf("\n1  AM\t23 Degrees");
		        	        	         printf("\n2  AM\t22 Degrees");
		        	        	         printf("\n3  AM\t21 Degrees");
		        	        	         printf("\n4  AM\t20 Degrees");
		        	        	         printf("\n5  AM\t19 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t24.2 Celsius\nHumidity\t55 percent\nWindspeed\t20.1 kph");
		        		    break;
		            case 4: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t21 Degrees");
		        	        	         printf("\n7  AM\t23 Degrees");
		        	        	         printf("\n8  AM\t25 Degrees");
		        	        	         printf("\n9  AM\t26 Degrees");
		        	        	         printf("\n10 AM\t28 Degrees");
		        	        	         printf("\n11 AM\t29 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t32 Degrees");
		        	        	         printf("\n3  PM\t33 Degrees");
		        	        	         printf("\n4  PM\t33 Degrees");
		        	        	         printf("\n5  PM\t31 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t30 Degrees");
		        	        	         printf("\n8  PM\t29 Degrees");
		        	        	         printf("\n9  PM\t28 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t27 Degrees");
		        	        	         printf("\n11 PM\t26 Degrees");
		        	        	         printf("\n12 AM\t25 Degrees");
		        	        	         printf("\n1  AM\t25 Degrees");
		        	        	         printf("\n2  AM\t24 Degrees");
		        	        	         printf("\n3  AM\t23 Degrees");
		        	        	         printf("\n4  AM\t22 Degrees");
		        	        	         printf("\n5  AM\t21 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t24.2 Celsius\nHumidity\t55 percent\nWindspeed\t20.1 kph");
		        		    break;
		        	case 5: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t20 Degrees");
		        	        	         printf("\n7  AM\t23 Degrees");
		        	        	         printf("\n8  AM\t25 Degrees");
		        	        	         printf("\n9  AM\t26 Degrees");
		        	        	         printf("\n10 AM\t28 Degrees");
		        	        	         printf("\n11 AM\t29 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t32 Degrees");
		        	        	         printf("\n3  PM\t33 Degrees");
		        	        	         printf("\n4  PM\t33 Degrees");
		        	        	         printf("\n5  PM\t31 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t30 Degrees");
		        	        	         printf("\n8  PM\t29 Degrees");
		        	        	         printf("\n9  PM\t28 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t27 Degrees");
		        	        	         printf("\n11 PM\t26 Degrees");
		        	        	         printf("\n12 AM\t25 Degrees");
		        	        	         printf("\n1  AM\t24 Degrees");
		        	        	         printf("\n2  AM\t23 Degrees");
		        	        	         printf("\n3  AM\t22 Degrees");
		        	        	         printf("\n4  AM\t21 Degrees");
		        	        	         printf("\n5  AM\t20 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t24.2 Celsius\nHumidity\t55 percent\nWindspeed\t20.1 kph");
		        		    break;
					case 6: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t19 Degrees");
		        	        	         printf("\n7  AM\t20 Degrees");
		        	        	         printf("\n8  AM\t22 Degrees");
		        	        	         printf("\n9  AM\t24 Degrees");
		        	        	         printf("\n10 AM\t25 Degrees");
		        	        	         printf("\n11 AM\t27 Degrees");
		        	        	         printf("\n12 PM\t29 Degrees");
		        	        	         printf("\n1  PM\t30 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t31 Degrees");
		        	        	         printf("\n3  PM\t32 Degrees");
		        	        	         printf("\n4  PM\t32 Degrees");
		        	        	         printf("\n5  PM\t30 Degrees");
		        	        	         printf("\n6  PM\t29 Degrees");
		        	        	         printf("\n7  PM\t28 Degrees");
		        	        	         printf("\n8  PM\t27 Degrees");
		        	        	         printf("\n9  PM\t26 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t25 Degrees");
		        	        	         printf("\n11 PM\t24 Degrees");
		        	        	         printf("\n12 AM\t23 Degrees");
		        	        	         printf("\n1  AM\t22 Degrees");
		        	        	         printf("\n2  AM\t22 Degrees");
		        	        	         printf("\n3  AM\t21 Degrees");
		        	        	         printf("\n4  AM\t20 Degrees");
		        	        	         printf("\n5  AM\t19 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t24.2 Celsius\nHumidity\t55 percent\nWindspeed\t20.1 kph");
		        		    break;
					case 7: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t23 Degrees");
		        	        	         printf("\n7  AM\t24 Degrees");
		        	        	         printf("\n8  AM\t25 Degrees");
		        	        	         printf("\n9  AM\t27 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t31 Degrees");
		        	        	         printf("\n12 PM\t32 Degrees");
		        	        	         printf("\n1  PM\t33 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t34 Degrees");
		        	        	         printf("\n3  PM\t34 Degrees");
		        	        	         printf("\n4  PM\t34 Degrees");
		        	        	         printf("\n5  PM\t33 Degrees");
		        	        	         printf("\n6  PM\t32 Degrees");
		        	        	         printf("\n7  PM\t32 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t28 Degrees");
		        	        	         printf("\n1  AM\t27 Degrees");
		        	        	         printf("\n2  AM\t26 Degrees");
		        	        	         printf("\n3  AM\t25 Degrees");
		        	        	         printf("\n4  AM\t24 Degrees");
		        	        	         printf("\n5  AM\t23 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24.2 Celsius\nHumidity\t55 percent\nWindspeed\t20.1 kph");
		        		    break;
		        	case 8: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t22 Degrees");
		        	        	         printf("\n7  AM\t23 Degrees");
		        	        	         printf("\n8  AM\t25 Degrees");
		        	        	         printf("\n9  AM\t27 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t31 Degrees");
		        	        	         printf("\n12 PM\t32 Degrees");
		        	        	         printf("\n1  PM\t33 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t34 Degrees");
		        	        	         printf("\n3  PM\t35 Degrees");
		        	        	         printf("\n4  PM\t34 Degrees");
		        	        	         printf("\n5  PM\t33 Degrees");
		        	        	         printf("\n6  PM\t32 Degrees");
		        	        	         printf("\n7  PM\t32 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t28 Degrees");
		        	        	         printf("\n1  AM\t27 Degrees");
		        	        	         printf("\n2  AM\t26 Degrees");
		        	        	         printf("\n3  AM\t25 Degrees");
		        	        	         printf("\n4  AM\t24 Degrees");
		        	        	         printf("\n5  AM\t22 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24.2 Celsius\nHumidity\t55 percent\nWindspeed\t20.1 kph");
		        		    break;
					case 9: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t19 Degrees");
		        	        	         printf("\n7  AM\t20 Degrees");
		        	        	         printf("\n8  AM\t22 Degrees");
		        	        	         printf("\n9  AM\t25 Degrees");
		        	        	         printf("\n10 AM\t27 Degrees");
		        	        	         printf("\n11 AM\t28 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t32 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t33 Degrees");
		        	        	         printf("\n3  PM\t34 Degrees");
		        	        	         printf("\n4  PM\t33 Degrees");
		        	        	         printf("\n5  PM\t30 Degrees");
		        	        	         printf("\n6  PM\t29 Degrees");
		        	        	         printf("\n7  PM\t28 Degrees");
		        	        	         printf("\n8  PM\t27 Degrees");
		        	        	         printf("\n9  PM\t26 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t25 Degrees");
		        	        	         printf("\n11 PM\t24 Degrees");
		        	        	         printf("\n12 AM\t23 Degrees");
		        	        	         printf("\n1  AM\t23 Degrees");
		        	        	         printf("\n2  AM\t22 Degrees");
		        	        	         printf("\n3  AM\t21 Degrees");
		        	        	         printf("\n4  AM\t20 Degrees");
		        	        	         printf("\n5  AM\t19 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24.2 Celsius\nHumidity\t55 percent\nWindspeed\t20.1 kph");
		        		    break;
		            case 10:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t21 Degrees");
		        	        	         printf("\n7  AM\t23 Degrees");
		        	        	         printf("\n8  AM\t25 Degrees");
		        	        	         printf("\n9  AM\t27 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t31 Degrees");
		        	        	         printf("\n12 PM\t32 Degrees");
		        	        	         printf("\n1  PM\t33 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t34 Degrees");
		        	        	         printf("\n3  PM\t35 Degrees");
		        	        	         printf("\n4  PM\t34 Degrees");
		        	        	         printf("\n5  PM\t33 Degrees");
		        	        	         printf("\n6  PM\t32 Degrees");
		        	        	         printf("\n7  PM\t32 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t29 Degrees");
		        	        	         printf("\n11 PM\t27 Degrees");
		        	        	         printf("\n12 AM\t26 Degrees");
		        	        	         printf("\n1  AM\t25 Degrees");
		        	        	         printf("\n2  AM\t24 Degrees");
		        	        	         printf("\n3  AM\t22 Degrees");
		        	        	         printf("\n4  AM\t21 Degrees");
		        	        	         printf("\n5  AM\t20 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24.2 Celsius\nHumidity\t55 percent\nWindspeed\t20.1 kph");
		        		    break;
		        	case 11:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t21 Degrees");
		        	        	         printf("\n7  AM\t23 Degrees");
		        	        	         printf("\n8  AM\t25 Degrees");
		        	        	         printf("\n9  AM\t27 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t31 Degrees");
		        	        	         printf("\n12 PM\t33 Degrees");
		        	        	         printf("\n1  PM\t35 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t36 Degrees");
		        	        	         printf("\n3  PM\t37 Degrees");
		        	        	         printf("\n4  PM\t35 Degrees");
		        	        	         printf("\n5  PM\t33 Degrees");
		        	        	         printf("\n6  PM\t32 Degrees");
		        	        	         printf("\n7  PM\t32 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t29 Degrees");
		        	        	         printf("\n11 PM\t27 Degrees");
		        	        	         printf("\n12 AM\t26 Degrees");
		        	        	         printf("\n1  AM\t25 Degrees");
		        	        	         printf("\n2  AM\t24 Degrees");
		        	        	         printf("\n3  AM\t22 Degrees");
		        	        	         printf("\n4  AM\t21 Degrees");
		        	        	         printf("\n5  AM\t20 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24.2 Celsius\nHumidity\t55 percent\nWindspeed\t20.1 kph");
		        		    break;
					case 12:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t25 Degrees");
		        	        	         printf("\n7  AM\t27 Degrees");
		        	        	         printf("\n8  AM\t28 Degrees");
		        	        	         printf("\n9  AM\t30 Degrees");
		        	        	         printf("\n10 AM\t31 Degrees");
		        	        	         printf("\n11 AM\t33 Degrees");
		        	        	         printf("\n12 PM\t35 Degrees");
		        	        	         printf("\n1  PM\t36 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t37 Degrees");
		        	        	         printf("\n3  PM\t38 Degrees");
		        	        	         printf("\n4  PM\t38 Degrees");
		        	        	         printf("\n5  PM\t36 Degrees");
		        	        	         printf("\n6  PM\t35 Degrees");
		        	        	         printf("\n7  PM\t34 Degrees");
		        	        	         printf("\n8  PM\t32 Degrees");
		        	        	         printf("\n9  PM\t31 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t27 Degrees");
		        	        	         printf("\n3  AM\t26 Degrees");
		        	        	         printf("\n4  AM\t26 Degrees");
		        	        	         printf("\n5  AM\t25 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24.2 Celsius\nHumidity\t55 percent\nWindspeed\t20.1 kph");
		        		    break;
					case 13:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t22 Degrees");
		        	        	         printf("\n7  AM\t24 Degrees");
		        	        	         printf("\n8  AM\t27 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t32 Degrees");
		        	        	         printf("\n12 PM\t34 Degrees");
		        	        	         printf("\n1  PM\t37 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t38 Degrees");
		        	        	         printf("\n3  PM\t39 Degrees");
		        	        	         printf("\n4  PM\t38 Degrees");
		        	        	         printf("\n5  PM\t36 Degrees");
		        	        	         printf("\n6  PM\t35 Degrees");
		        	        	         printf("\n7  PM\t34 Degrees");
		        	        	         printf("\n8  PM\t32 Degrees");
		        	        	         printf("\n9  PM\t31 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t28 Degrees");
		        	        	         printf("\n12 AM\t26 Degrees");
		        	        	         printf("\n1  AM\t25 Degrees");
		        	        	         printf("\n2  AM\t24 Degrees");
		        	        	         printf("\n3  AM\t23 Degrees");
		        	        	         printf("\n4  AM\t22 Degrees");
		        	        	         printf("\n5  AM\t21 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24.2 Celsius\nHumidity\t55 percent\nWindspeed\t20.1 kph");
		        		    break;
		        	case 14:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t22 Degrees");
		        	        	         printf("\n7  AM\t24 Degrees");
		        	        	         printf("\n8  AM\t27 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t32 Degrees");
		        	        	         printf("\n12 PM\t34 Degrees");
		        	        	         printf("\n1  PM\t37 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t38 Degrees");
		        	        	         printf("\n3  PM\t38 Degrees");
		        	        	         printf("\n4  PM\t38 Degrees");
		        	        	         printf("\n5  PM\t36 Degrees");
		        	        	         printf("\n6  PM\t35 Degrees");
		        	        	         printf("\n7  PM\t34 Degrees");
		        	        	         printf("\n8  PM\t32 Degrees");
		        	        	         printf("\n9  PM\t31 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t28 Degrees");
		        	        	         printf("\n1  AM\t26 Degrees");
		        	        	         printf("\n2  AM\t25 Degrees");
		        	        	         printf("\n3  AM\t24 Degrees");
		        	        	         printf("\n4  AM\t23 Degrees");
		        	        	         printf("\n5  AM\t22 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24.2 Celsius\nHumidity\t55 percent\nWindspeed\t20.1 kph");
		        		    break;
					case 15:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t23 Degrees");
		        	        	         printf("\n7  AM\t24 Degrees");
		        	        	         printf("\n8  AM\t25 Degrees");
		        	        	         printf("\n9  AM\t27 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t31 Degrees");
		        	        	         printf("\n12 PM\t32 Degrees");
		        	        	         printf("\n1  PM\t33 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t34 Degrees");
		        	        	         printf("\n3  PM\t35 Degrees");
		        	        	         printf("\n4  PM\t34 Degrees");
		        	        	         printf("\n5  PM\t33 Degrees");
		        	        	         printf("\n6  PM\t32 Degrees");
		        	        	         printf("\n7  PM\t32 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t28 Degrees");
		        	        	         printf("\n1  AM\t27 Degrees");
		        	        	         printf("\n2  AM\t26 Degrees");
		        	        	         printf("\n3  AM\t25 Degrees");
		        	        	         printf("\n4  AM\t24 Degrees");
		        	        	         printf("\n5  AM\t23 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t24.2 Celsius\nHumidity\t55 percent\nWindspeed\t20.1 kph");
		        		    break;
		            case 16:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t23 Degrees");
		        	        	         printf("\n7  AM\t24 Degrees");
		        	        	         printf("\n8  AM\t25 Degrees");
		        	        	         printf("\n9  AM\t27 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t31 Degrees");
		        	        	         printf("\n12 PM\t32 Degrees");
		        	        	         printf("\n1  PM\t33 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t34 Degrees");
		        	        	         printf("\n3  PM\t34 Degrees");
		        	        	         printf("\n4  PM\t34 Degrees");
		        	        	         printf("\n5  PM\t33 Degrees");
		        	        	         printf("\n6  PM\t32 Degrees");
		        	        	         printf("\n7  PM\t32 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t28 Degrees");
		        	        	         printf("\n1  AM\t27 Degrees");
		        	        	         printf("\n2  AM\t26 Degrees");
		        	        	         printf("\n3  AM\t25 Degrees");
		        	        	         printf("\n4  AM\t24 Degrees");
		        	        	         printf("\n5  AM\t23 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24.2 Celsius\nHumidity\t55 percent\nWindspeed\t20.1 kph");
		        		    break;
		        	case 17:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t23 Degrees");
		        	        	         printf("\n7  AM\t24 Degrees");
		        	        	         printf("\n8  AM\t25 Degrees");
		        	        	         printf("\n9  AM\t27 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t31 Degrees");
		        	        	         printf("\n12 PM\t32 Degrees");
		        	        	         printf("\n1  PM\t33 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t34 Degrees");
		        	        	         printf("\n3  PM\t34 Degrees");
		        	        	         printf("\n4  PM\t34 Degrees");
		        	        	         printf("\n5  PM\t33 Degrees");
		        	        	         printf("\n6  PM\t32 Degrees");
		        	        	         printf("\n7  PM\t32 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t28 Degrees");
		        	        	         printf("\n1  AM\t27 Degrees");
		        	        	         printf("\n2  AM\t26 Degrees");
		        	        	         printf("\n3  AM\t25 Degrees");
		        	        	         printf("\n4  AM\t24 Degrees");
		        	        	         printf("\n5  AM\t23 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24.2 Celsius\nHumidity\t55 percent\nWindspeed\t20.1 kph");
		        		    break;
					case 18:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t25 Degrees");
		        	        	         printf("\n7  AM\t27 Degrees");
		        	        	         printf("\n8  AM\t28 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t31 Degrees");
		        	        	         printf("\n11 AM\t31 Degrees");
		        	        	         printf("\n12 PM\t32 Degrees");
		        	        	         printf("\n1  PM\t32 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t33 Degrees");
		        	        	         printf("\n3  PM\t33 Degrees");
		        	        	         printf("\n4  PM\t33 Degrees");
		        	        	         printf("\n5  PM\t32 Degrees");
		        	        	         printf("\n6  PM\t32 Degrees");
		        	        	         printf("\n7  PM\t32 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t31 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t27 Degrees");
		        	        	         printf("\n3  AM\t26 Degrees");
		        	        	         printf("\n4  AM\t26 Degrees");
		        	        	         printf("\n5  AM\t25 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24.2 Celsius\nHumidity\t55 percent\nWindspeed\t20.1 kph");
		        		    break;
					case 19:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t25 Degrees");
		        	        	         printf("\n7  AM\t27 Degrees");
		        	        	         printf("\n8  AM\t28 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t31 Degrees");
		        	        	         printf("\n12 PM\t33 Degrees");
		        	        	         printf("\n1  PM\t35 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t36 Degrees");
		        	        	         printf("\n3  PM\t37 Degrees");
		        	        	         printf("\n4  PM\t37 Degrees");
		        	        	         printf("\n5  PM\t35 Degrees");
		        	        	         printf("\n6  PM\t34 Degrees");
		        	        	         printf("\n7  PM\t33 Degrees");
		        	        	         printf("\n8  PM\t32 Degrees");
		        	        	         printf("\n9  PM\t31 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t31 Degrees");
		        	        	         printf("\n11 PM\t30 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t27 Degrees");
		        	        	         printf("\n3  AM\t26 Degrees");
		        	        	         printf("\n4  AM\t25 Degrees");
		        	        	         printf("\n5  AM\t24 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t24.2 Celsius\nHumidity\t55 percent\nWindspeed\t20.1 kph");
		        		    break;
		        	case 20:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t25 Degrees");
		        	        	         printf("\n7  AM\t27 Degrees");
		        	        	         printf("\n8  AM\t28 Degrees");
		        	        	         printf("\n9  AM\t30 Degrees");
		        	        	         printf("\n10 AM\t31 Degrees");
		        	        	         printf("\n11 AM\t33 Degrees");
		        	        	         printf("\n12 PM\t34 Degrees");
		        	        	         printf("\n1  PM\t35 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t36 Degrees");
		        	        	         printf("\n3  PM\t36 Degrees");
		        	        	         printf("\n4  PM\t36 Degrees");
		        	        	         printf("\n5  PM\t35 Degrees");
		        	        	         printf("\n6  PM\t34 Degrees");
		        	        	         printf("\n7  PM\t33 Degrees");
		        	        	         printf("\n8  PM\t32 Degrees");
		        	        	         printf("\n9  PM\t31 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t27 Degrees");
		        	        	         printf("\n3  AM\t26 Degrees");
		        	        	         printf("\n4  AM\t26 Degrees");
		        	        	         printf("\n5  AM\t25 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24.2 Celsius\nHumidity\t55 percent\nWindspeed\t20.1 kph");
		        		    break;
					case 21:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t22 Degrees");
		        	        	         printf("\n7  AM\t23 Degrees");
		        	        	         printf("\n8  AM\t25 Degrees");
		        	        	         printf("\n9  AM\t26 Degrees");
		        	        	         printf("\n10 AM\t28 Degrees");
		        	        	         printf("\n11 AM\t29 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t32 Degrees");
		        	        	         printf("\n3  PM\t33 Degrees");
		        	        	         printf("\n4  PM\t33 Degrees");
		        	        	         printf("\n5  PM\t31 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t30 Degrees");
		        	        	         printf("\n8  PM\t29 Degrees");
		        	        	         printf("\n9  PM\t29 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t28 Degrees");
		        	        	         printf("\n11 PM\t28 Degrees");
		        	        	         printf("\n12 AM\t27 Degrees");
		        	        	         printf("\n1  AM\t26 Degrees");
		        	        	         printf("\n2  AM\t25 Degrees");
		        	        	         printf("\n3  AM\t24 Degrees");
		        	        	         printf("\n4  AM\t23 Degrees");
		        	        	         printf("\n5  AM\t22 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24.2 Celsius\nHumidity\t55 percent\nWindspeed\t20.1 kph");
		        		    break;
		            case 22:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t22 Degrees");
		        	        	         printf("\n7  AM\t23 Degrees");
		        	        	         printf("\n8  AM\t25 Degrees");
		        	        	         printf("\n9  AM\t26 Degrees");
		        	        	         printf("\n10 AM\t28 Degrees");
		        	        	         printf("\n11 AM\t29 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t30 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t31 Degrees");
		        	        	         printf("\n3  PM\t31 Degrees");
		        	        	         printf("\n4  PM\t31 Degrees");
		        	        	         printf("\n5  PM\t30 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t29 Degrees");
		        	        	         printf("\n8  PM\t29 Degrees");
		        	        	         printf("\n9  PM\t28 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t28 Degrees");
		        	        	         printf("\n11 PM\t27 Degrees");
		        	        	         printf("\n12 AM\t27 Degrees");
		        	        	         printf("\n1  AM\t26 Degrees");
		        	        	         printf("\n2  AM\t25 Degrees");
		        	        	         printf("\n3  AM\t24 Degrees");
		        	        	         printf("\n4  AM\t23 Degrees");
		        	        	         printf("\n5  AM\t22 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24.2 Celsius\nHumidity\t55 percent\nWindspeed\t20.1 kph");
		        		    break;
		        	case 23:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t24 Degrees");
		        	        	         printf("\n7  AM\t25 Degrees");
		        	        	         printf("\n8  AM\t26 Degrees");
		        	        	         printf("\n9  AM\t28 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t31 Degrees");
		        	        	         printf("\n12 PM\t32 Degrees");
		        	        	         printf("\n1  PM\t33 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t34 Degrees");
		        	        	         printf("\n3  PM\t34 Degrees");
		        	        	         printf("\n4  PM\t34 Degrees");
		        	        	         printf("\n5  PM\t33 Degrees");
		        	        	         printf("\n6  PM\t32 Degrees");
		        	        	         printf("\n7  PM\t32 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t27 Degrees");
		        	        	         printf("\n3  AM\t26 Degrees");
		        	        	         printf("\n4  AM\t25 Degrees");
		        	        	         printf("\n5  AM\t24 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24.2 Celsius\nHumidity\t55 percent\nWindspeed\t20.1 kph");
		        		    break;
					case 24:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t24 Degrees");
		        	        	         printf("\n7  AM\t25 Degrees");
		        	        	         printf("\n8  AM\t27 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t32 Degrees");
		        	        	         printf("\n12 PM\t34 Degrees");
		        	        	         printf("\n1  PM\t37 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t38 Degrees");
		        	        	         printf("\n3  PM\t38 Degrees");
		        	        	         printf("\n4  PM\t38 Degrees");
		        	        	         printf("\n5  PM\t36 Degrees");
		        	        	         printf("\n6  PM\t35 Degrees");
		        	        	         printf("\n7  PM\t34 Degrees");
		        	        	         printf("\n8  PM\t32 Degrees");
		        	        	         printf("\n9  PM\t31 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t27 Degrees");
		        	        	         printf("\n3  AM\t26 Degrees");
		        	        	         printf("\n4  AM\t25 Degrees");
		        	        	         printf("\n5  AM\t24 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t24.2 Celsius\nHumidity\t55 percent\nWindspeed\t20.1 kph");
		        		    break;
					case 25:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t24 Degrees");
		        	        	         printf("\n7  AM\t25 Degrees");
		        	        	         printf("\n8  AM\t27 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t32 Degrees");
		        	        	         printf("\n12 PM\t34 Degrees");
		        	        	         printf("\n1  PM\t37 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t38 Degrees");
		        	        	         printf("\n3  PM\t40 Degrees");
		        	        	         printf("\n4  PM\t38 Degrees");
		        	        	         printf("\n5  PM\t36 Degrees");
		        	        	         printf("\n6  PM\t35 Degrees");
		        	        	         printf("\n7  PM\t34 Degrees");
		        	        	         printf("\n8  PM\t32 Degrees");
		        	        	         printf("\n9  PM\t31 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t27 Degrees");
		        	        	         printf("\n3  AM\t26 Degrees");
		        	        	         printf("\n4  AM\t25 Degrees");
		        	        	         printf("\n5  AM\t24 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24.2 Celsius\nHumidity\t55 percent\nWindspeed\t20.1 kph");
		        		    break;
		        	case 26:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t21 Degrees");
		        	        	         printf("\n7  AM\t23 Degrees");
		        	        	         printf("\n8  AM\t25 Degrees");
		        	        	         printf("\n9  AM\t28 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t32 Degrees");
		        	        	         printf("\n12 PM\t35 Degrees");
		        	        	         printf("\n1  PM\t37 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t38 Degrees");
		        	        	         printf("\n3  PM\t39 Degrees");
		        	        	         printf("\n4  PM\t38 Degrees");
		        	        	         printf("\n5  PM\t37 Degrees");
		        	        	         printf("\n6  PM\t36 Degrees");
		        	        	         printf("\n7  PM\t34 Degrees");
		        	        	         printf("\n8  PM\t33 Degrees");
		        	        	         printf("\n9  PM\t32 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t31 Degrees");
		        	        	         printf("\n11 PM\t30 Degrees");
		        	        	         printf("\n12 AM\t28 Degrees");
		        	        	         printf("\n1  AM\t26 Degrees");
		        	        	         printf("\n2  AM\t24 Degrees");
		        	        	         printf("\n3  AM\t22 Degrees");
		        	        	         printf("\n4  AM\t21 Degrees");
		        	        	         printf("\n5  AM\t20 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24.2 Celsius\nHumidity\t55 percent\nWindspeed\t20.1 kph");
		        		    break;
					case 27:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t24 Degrees");
		        	        	         printf("\n7  AM\t27 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t31 Degrees");
		        	        	         printf("\n10 AM\t34 Degrees");
		        	        	         printf("\n11 AM\t36 Degrees");
		        	        	         printf("\n12 PM\t38 Degrees");
		        	        	         printf("\n1  PM\t39 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t40 Degrees");
		        	        	         printf("\n3  PM\t41 Degrees");
		        	        	         printf("\n4  PM\t39 Degrees");
		        	        	         printf("\n5  PM\t38 Degrees");
		        	        	         printf("\n6  PM\t37 Degrees");
		        	        	         printf("\n7  PM\t36 Degrees");
		        	        	         printf("\n8  PM\t34 Degrees");
		        	        	         printf("\n9  PM\t33 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t32 Degrees");
		        	        	         printf("\n11 PM\t30 Degrees");
		        	        	         printf("\n12 AM\t28 Degrees");
		        	        	         printf("\n1  AM\t26 Degrees");
		        	        	         printf("\n2  AM\t25 Degrees");
		        	        	         printf("\n3  AM\t24 Degrees");
		        	        	         printf("\n4  AM\t23 Degrees");
		        	        	         printf("\n5  AM\t22 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24.2 Celsius\nHumidity\t55 percent\nWindspeed\t20.1 kph");
		        		    break;
		            case 28:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t27 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t30 Degrees");
		        	        	         printf("\n10 AM\t31 Degrees");
		        	        	         printf("\n11 AM\t33 Degrees");
		        	        	         printf("\n12 PM\t34 Degrees");
		        	        	         printf("\n1  PM\t35 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t36 Degrees");
		        	        	         printf("\n3  PM\t36 Degrees");
		        	        	         printf("\n4  PM\t36 Degrees");
		        	        	         printf("\n5  PM\t35 Degrees");
		        	        	         printf("\n6  PM\t34 Degrees");
		        	        	         printf("\n7  PM\t34 Degrees");
		        	        	         printf("\n8  PM\t33 Degrees");
		        	        	         printf("\n9  PM\t32 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t32 Degrees");
		        	        	         printf("\n11 PM\t31 Degrees");
		        	        	         printf("\n12 AM\t30 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t28 Degrees");
		        	        	         printf("\n4  AM\t28 Degrees");
		        	        	         printf("\n5  AM\t27 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24.2 Celsius\nHumidity\t55 percent\nWindspeed\t20.1 kph");
		        		    break;
		        	case 29:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t26 Degrees");
		        	        	         printf("\n7  AM\t27 Degrees");
		        	        	         printf("\n8  AM\t28 Degrees");
		        	        	         printf("\n9  AM\t30 Degrees");
		        	        	         printf("\n10 AM\t31 Degrees");
		        	        	         printf("\n11 AM\t33 Degrees");
		        	        	         printf("\n12 PM\t34 Degrees");
		        	        	         printf("\n1  PM\t35 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t36 Degrees");
		        	        	         printf("\n3  PM\t36 Degrees");
		        	        	         printf("\n4  PM\t36 Degrees");
		        	        	         printf("\n5  PM\t35 Degrees");
		        	        	         printf("\n6  PM\t34 Degrees");
		        	        	         printf("\n7  PM\t33 Degrees");
		        	        	         printf("\n8  PM\t33 Degrees");
		        	        	         printf("\n9  PM\t32 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t31 Degrees");
		        	        	         printf("\n11 PM\t31 Degrees");
		        	        	         printf("\n12 AM\t30 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t28 Degrees");
		        	        	         printf("\n3  AM\t27 Degrees");
		        	        	         printf("\n4  AM\t27 Degrees");
		        	        	         printf("\n5  AM\t26 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24.2 Celsius\nHumidity\t55 percent\nWindspeed\t20.1 kph");
		        		    break;
					case 30:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t27 Degrees");
		        	        	         printf("\n7  AM\t29 Degrees");
		        	        	         printf("\n8  AM\t32 Degrees");
		        	        	         printf("\n9  AM\t34 Degrees");
		        	        	         printf("\n10 AM\t35 Degrees");
		        	        	         printf("\n11 AM\t37 Degrees");
		        	        	         printf("\n12 PM\t38 Degrees");
		        	        	         printf("\n1  PM\t40 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t42 Degrees");
		        	        	         printf("\n3  PM\t43 Degrees");
		        	        	         printf("\n4  PM\t41 Degrees");
		        	        	         printf("\n5  PM\t40 Degrees");
		        	        	         printf("\n6  PM\t38 Degrees");
		        	        	         printf("\n7  PM\t37 Degrees");
		        	        	         printf("\n8  PM\t35 Degrees");
		        	        	         printf("\n9  PM\t34 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t33 Degrees");
		        	        	         printf("\n11 PM\t32 Degrees");
		        	        	         printf("\n12 AM\t31 Degrees");
		        	        	         printf("\n1  AM\t30 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t28 Degrees");
		        	        	         printf("\n4  AM\t27 Degrees");
		        	        	         printf("\n5  AM\t26 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t24.2 Celsius\nHumidity\t55 percent\nWindspeed\t20.1 kph");
		        	        break;
					case 31:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t24 Degrees");
		        	        	         printf("\n7  AM\t26 Degrees");
		        	        	         printf("\n8  AM\t28 Degrees");
		        	        	         printf("\n9  AM\t30 Degrees");
		        	        	         printf("\n10 AM\t33 Degrees");
		        	        	         printf("\n11 AM\t35 Degrees");
		        	        	         printf("\n12 PM\t37 Degrees");
		        	        	         printf("\n1  PM\t39 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t40 Degrees");
		        	        	         printf("\n3  PM\t41 Degrees");
		        	        	         printf("\n4  PM\t41 Degrees");
		        	        	         printf("\n5  PM\t40 Degrees");
		        	        	         printf("\n6  PM\t38 Degrees");
		        	        	         printf("\n7  PM\t37 Degrees");
		        	        	         printf("\n8  PM\t35 Degrees");
		        	        	         printf("\n9  PM\t34 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t33 Degrees");
		        	        	         printf("\n11 PM\t32 Degrees");
		        	        	         printf("\n12 AM\t31 Degrees");
		        	        	         printf("\n1  AM\t30 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t27 Degrees");
		        	        	         printf("\n4  AM\t25 Degrees");
		        	        	         printf("\n5  AM\t24 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t24.2 Celsius\nHumidity\t55 percent\nWindspeed\t20.1 kph");
		        		    break;		   	   	   	   	    	   	   
			    }
			    break;
		case 4: printf("\nEnter the day of the month.\n(enter the number that coincides with the day)");
		        printf("\nSun\tMon\tTue\tWed\tThu\tFri\tSat");
		        printf("\n   \t   \t   \t   \t   \t1  \t2\n3  \t4  \t5  \t6  \t7  \t8  \t9\n10 \t11 \t12 \t13 \t14 \t15 \t16\n17 \t18 \t19 \t20 \t21 \t22 \t23\n24 \t25 \t26 \t27 \t28 \t29 \t30");
		        printf("\nEnter here:");   scanf("\n%d",&day);
		        printf("\n(Caution): Prediction of long lasting heat waves");
		        switch(day)
		        {
		        	case 1:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t28 Degrees");
							printf("\n7  AM\t28 Degrees");
							printf("\n8  AM\t29 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t29 Degrees");
							printf("\n11 AM\t30 Degrees");
							printf("\n12 PM\t30 Degrees");
							printf("\n1  PM\t31 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t31 Degrees");
							printf("\n3  PM\t32 Degrees");
							printf("\n4  PM\t32 Degrees");
							printf("\n5  PM\t35 Degrees");
							printf("\n6  PM\t35 Degrees");
							printf("\n7  PM\t39 Degrees");
							printf("\n8  PM\t39 Degrees");
							printf("\n9  PM\t40 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t39 Degrees");
							printf("\n11 PM\t39 Degrees");
							printf("\n12 AM\t36 Degrees");
							printf("\n1  AM\t36 Degrees");
							printf("\n2  AM\t33 Degrees");
							printf("\n3  AM\t33 Degrees");
							printf("\n4  AM\t31 Degrees");
							printf("\n5  AM\t31 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 2:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t28 Degrees");
							printf("\n7  AM\t28 Degrees");
							printf("\n8  AM\t29 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t30 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t32 Degrees");
							printf("\n1  PM\t32 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t36 Degrees");
							printf("\n3  PM\t36 Degrees");
							printf("\n4  PM\t35 Degrees");
							printf("\n5  PM\t35 Degrees");
							printf("\n6  PM\t33 Degrees");
							printf("\n7  PM\t33 Degrees");
							printf("\n8  PM\t31 Degrees");
							printf("\n9  PM\t31 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t30 Degrees");
							printf("\n12 AM\t27 Degrees");
							printf("\n1  AM\t27 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t28 Degrees");
							printf("\n4  AM\t29 Degrees");
							printf("\n5  AM\t29 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 3:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t27 Degrees");
							printf("\n7  AM\t27 Degrees");
							printf("\n8  AM\t28 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t29 Degrees");
							printf("\n11 AM\t30 Degrees");
							printf("\n12 PM\t30 Degrees");
							printf("\n1  PM\t31 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t32 Degrees");
							printf("\n3  PM\t33 Degrees");
							printf("\n4  PM\t32 Degrees");
							printf("\n5  PM\t32 Degrees");
							printf("\n6  PM\t31 Degrees");
							printf("\n7  PM\t31 Degrees");
							printf("\n8  PM\t30 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 4:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t27 Degrees");
							printf("\n7  AM\t27 Degrees");
							printf("\n8  AM\t29 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t29 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t31 Degrees");
							printf("\n1  PM\t32 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t32 Degrees");
							printf("\n3  PM\t34 Degrees");
							printf("\n4  PM\t34 Degrees");
							printf("\n5  PM\t31 Degrees");
							printf("\n6  PM\t30 Degrees");
							printf("\n7  PM\t30 Degrees");
							printf("\n8  PM\t30 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t27 Degrees");
							printf("\n5  AM\t27 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 5:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t27 Degrees");
							printf("\n7  AM\t27 Degrees");
							printf("\n8  AM\t29 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t29 Degrees");
							printf("\n11 AM\t32 Degrees");
							printf("\n12 PM\t32 Degrees");
							printf("\n1  PM\t35 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t35 Degrees");
							printf("\n3  PM\t32 Degrees");
							printf("\n4  PM\t32 Degrees");
							printf("\n5  PM\t31 Degrees");
							printf("\n6  PM\t30 Degrees");
							printf("\n7  PM\t30 Degrees");
							printf("\n8  PM\t30 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t27 Degrees");
							printf("\n5  AM\t27 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 6:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t28 Degrees");
							printf("\n7  AM\t28 Degrees");
							printf("\n8  AM\t29 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t30 Degrees");
							printf("\n11 AM\t30 Degrees");
							printf("\n12 PM\t31 Degrees");
							printf("\n1  PM\t32 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t33 Degrees");
							printf("\n3  PM\t34 Degrees");
							printf("\n4  PM\t33 Degrees");
							printf("\n5  PM\t32 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t31 Degrees");
							printf("\n8  PM\t31 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t28 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t28 Degrees");
							printf("\n4  AM\t27 Degrees");
							printf("\n5  AM\t27 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 7:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t27 Degrees");
							printf("\n7  AM\t28 Degrees");
							printf("\n8  AM\t29 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t30 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t32 Degrees");
							printf("\n1  PM\t33 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t37 Degrees");
							printf("\n3  PM\t37 Degrees");
							printf("\n4  PM\t34 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t32 Degrees");
							printf("\n8  PM\t31 Degrees");
							printf("\n9  PM\t31 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t28 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t28 Degrees");
							printf("\n4  AM\t27 Degrees");
							printf("\n5  AM\t27 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 8:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t28 Degrees");
							printf("\n7  AM\t28 Degrees");
							printf("\n8  AM\t29 Degrees");
							printf("\n9  AM\t30 Degrees");
							printf("\n10 AM\t31 Degrees");
							printf("\n11 AM\t32 Degrees");
							printf("\n12 PM\t33 Degrees");
							printf("\n1  PM\t34 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t35 Degrees");
							printf("\n3  PM\t36 Degrees");
							printf("\n4  PM\t34 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t31 Degrees");
							printf("\n8  PM\t30 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 9:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t28 Degrees");
							printf("\n7  AM\t29 Degrees");
							printf("\n8  AM\t29 Degrees");
							printf("\n9  AM\t30 Degrees");
							printf("\n10 AM\t31 Degrees");
							printf("\n11 AM\t32 Degrees");
							printf("\n12 PM\t34 Degrees");
							printf("\n1  PM\t35 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t35 Degrees");
							printf("\n3  PM\t35 Degrees");
							printf("\n4  PM\t34 Degrees");
							printf("\n5  PM\t34 Degrees");
							printf("\n6  PM\t33 Degrees");
							printf("\n7  PM\t33 Degrees");
							printf("\n8  PM\t33 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t28 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t28 Degrees");
							printf("\n4  AM\t27 Degrees");
							printf("\n5  AM\t27 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 10:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t28 Degrees");
							printf("\n7  AM\t28 Degrees");
							printf("\n8  AM\t28 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t30 Degrees");
							printf("\n11 AM\t32 Degrees");
							printf("\n12 PM\t34 Degrees");
							printf("\n1  PM\t35 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t35 Degrees");
							printf("\n3  PM\t35 Degrees");
							printf("\n4  PM\t34 Degrees");
							printf("\n5  PM\t34 Degrees");
							printf("\n6  PM\t33 Degrees");
							printf("\n7  PM\t33.5 Degrees");
							printf("\n8  PM\t33 Degrees");
							printf("\n9  PM\t32 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t32 Degrees");
							printf("\n11 PM\t31 Degrees");
							printf("\n12 AM\t31 Degrees");
							printf("\n1  AM\t30 Degrees");
							printf("\n2  AM\t30 Degrees");
							printf("\n3  AM\t30 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
		        	case 11:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t28 Degrees");
							printf("\n7  AM\t28 Degrees");
							printf("\n8  AM\t28 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t30 Degrees");
							printf("\n11 AM\t32 Degrees");
							printf("\n12 PM\t34 Degrees");
							printf("\n1  PM\t35 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t35 Degrees");
							printf("\n3  PM\t35 Degrees");
							printf("\n4  PM\t34 Degrees");
							printf("\n5  PM\t34 Degrees");
							printf("\n6  PM\t33 Degrees");
							printf("\n7  PM\t33.5 Degrees");
							printf("\n8  PM\t33 Degrees");
							printf("\n9  PM\t32 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t32 Degrees");
							printf("\n11 PM\t31 Degrees");
							printf("\n12 AM\t31 Degrees");
							printf("\n1  AM\t30 Degrees");
							printf("\n2  AM\t30 Degrees");
							printf("\n3  AM\t30 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28 Degrees");
							break;	 	     
							}
							printf("\nSea temperature\t26 Celsius\nHumidity\t55 percent\nWindspeed\t14.8 kph");
		        		    break;
					case 12:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t27 Degrees");
		        	        	         printf("\n7  AM\t29 Degrees");
		        	        	         printf("\n8  AM\t32 Degrees");
		        	        	         printf("\n9  AM\t34 Degrees");
		        	        	         printf("\n10 AM\t35 Degrees");
		        	        	         printf("\n11 AM\t37 Degrees");
		        	        	         printf("\n12 PM\t38 Degrees");
		        	        	         printf("\n1  PM\t40 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t42 Degrees");
		        	        	         printf("\n3  PM\t43 Degrees");
		        	        	         printf("\n4  PM\t41 Degrees");
		        	        	         printf("\n5  PM\t40 Degrees");
		        	        	         printf("\n6  PM\t38 Degrees");
		        	        	         printf("\n7  PM\t37 Degrees");
		        	        	         printf("\n8  PM\t35 Degrees");
		        	        	         printf("\n9  PM\t34 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t33 Degrees");
		        	        	         printf("\n11 PM\t32 Degrees");
		        	        	         printf("\n12 AM\t31 Degrees");
		        	        	         printf("\n1  AM\t30 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t28 Degrees");
		        	        	         printf("\n4  AM\t27 Degrees");
		        	        	         printf("\n5  AM\t26 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t26 Celsius\nHumidity\t55 percent\nWindspeed\t14.8 kph");
		        		    break;
					case 13:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t24 Degrees");
		        	        	         printf("\n7  AM\t25 Degrees");
		        	        	         printf("\n8  AM\t27 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t32 Degrees");
		        	        	         printf("\n12 PM\t34 Degrees");
		        	        	         printf("\n1  PM\t37 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t38 Degrees");
		        	        	         printf("\n3  PM\t40 Degrees");
		        	        	         printf("\n4  PM\t38 Degrees");
		        	        	         printf("\n5  PM\t36 Degrees");
		        	        	         printf("\n6  PM\t35 Degrees");
		        	        	         printf("\n7  PM\t34 Degrees");
		        	        	         printf("\n8  PM\t32 Degrees");
		        	        	         printf("\n9  PM\t31 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t27 Degrees");
		        	        	         printf("\n3  AM\t26 Degrees");
		        	        	         printf("\n4  AM\t25 Degrees");
		        	        	         printf("\n5  AM\t24 Degrees");
		        	        		     break; 	     
							}
							printf("\nSea temperature\t26 Celsius\nHumidity\t55 percent\nWindspeed\t14.8 kph");
		        		    break;
		        	case 14:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t28 Degrees");
							printf("\n7  AM\t28 Degrees");
							printf("\n8  AM\t28 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t30 Degrees");
							printf("\n11 AM\t32 Degrees");
							printf("\n12 PM\t34 Degrees");
							printf("\n1  PM\t35 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t35 Degrees");
							printf("\n3  PM\t35 Degrees");
							printf("\n4  PM\t34 Degrees");
							printf("\n5  PM\t34 Degrees");
							printf("\n6  PM\t33 Degrees");
							printf("\n7  PM\t33.5 Degrees");
							printf("\n8  PM\t33 Degrees");
							printf("\n9  PM\t32 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t32 Degrees");
							printf("\n11 PM\t31 Degrees");
							printf("\n12 AM\t31 Degrees");
							printf("\n1  AM\t30 Degrees");
							printf("\n2  AM\t30 Degrees");
							printf("\n3  AM\t30 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28 Degrees");
							break;	 	     
							}
							printf("\nSea temperature\t26 Celsius\nHumidity\t55 percent\nWindspeed\t14.8 kph");
		        		    break;
					case 15:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t27 Degrees");
		        	        	         printf("\n7  AM\t29 Degrees");
		        	        	         printf("\n8  AM\t32 Degrees");
		        	        	         printf("\n9  AM\t34 Degrees");
		        	        	         printf("\n10 AM\t35 Degrees");
		        	        	         printf("\n11 AM\t37 Degrees");
		        	        	         printf("\n12 PM\t38 Degrees");
		        	        	         printf("\n1  PM\t40 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t42 Degrees");
		        	        	         printf("\n3  PM\t43 Degrees");
		        	        	         printf("\n4  PM\t41 Degrees");
		        	        	         printf("\n5  PM\t40 Degrees");
		        	        	         printf("\n6  PM\t38 Degrees");
		        	        	         printf("\n7  PM\t37 Degrees");
		        	        	         printf("\n8  PM\t35 Degrees");
		        	        	         printf("\n9  PM\t34 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t33 Degrees");
		        	        	         printf("\n11 PM\t32 Degrees");
		        	        	         printf("\n12 AM\t31 Degrees");
		        	        	         printf("\n1  AM\t30 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t28 Degrees");
		        	        	         printf("\n4  AM\t27 Degrees");
		        	        	         printf("\n5  AM\t26 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t26 Celsius\nHumidity\t55 percent\nWindspeed\t14.8 kph");
		        		    break;
		            case 16:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t24 Degrees");
		        	        	         printf("\n7  AM\t25 Degrees");
		        	        	         printf("\n8  AM\t27 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t32 Degrees");
		        	        	         printf("\n12 PM\t34 Degrees");
		        	        	         printf("\n1  PM\t37 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t38 Degrees");
		        	        	         printf("\n3  PM\t40 Degrees");
		        	        	         printf("\n4  PM\t38 Degrees");
		        	        	         printf("\n5  PM\t36 Degrees");
		        	        	         printf("\n6  PM\t35 Degrees");
		        	        	         printf("\n7  PM\t34 Degrees");
		        	        	         printf("\n8  PM\t32 Degrees");
		        	        	         printf("\n9  PM\t31 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t27 Degrees");
		        	        	         printf("\n3  AM\t26 Degrees");
		        	        	         printf("\n4  AM\t25 Degrees");
		        	        	         printf("\n5  AM\t24 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t26 Celsius\nHumidity\t55 percent\nWindspeed\t14.8 kph");
		        		    break;
		        	case 17:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t28 Degrees");
							printf("\n7  AM\t28 Degrees");
							printf("\n8  AM\t28 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t30 Degrees");
							printf("\n11 AM\t32 Degrees");
							printf("\n12 PM\t34 Degrees");
							printf("\n1  PM\t35 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t35 Degrees");
							printf("\n3  PM\t35 Degrees");
							printf("\n4  PM\t34 Degrees");
							printf("\n5  PM\t34 Degrees");
							printf("\n6  PM\t33 Degrees");
							printf("\n7  PM\t33.5 Degrees");
							printf("\n8  PM\t33 Degrees");
							printf("\n9  PM\t32 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t32 Degrees");
							printf("\n11 PM\t31 Degrees");
							printf("\n12 AM\t31 Degrees");
							printf("\n1  AM\t30 Degrees");
							printf("\n2  AM\t30 Degrees");
							printf("\n3  AM\t30 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28 Degrees");
							break;	 	     
							}
							printf("\nSea temperature\t26 Celsius\nHumidity\t55 percent\nWindspeed\t14.8 kph");
		        		    break;
					case 18:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t27 Degrees");
		        	        	         printf("\n7  AM\t29 Degrees");
		        	        	         printf("\n8  AM\t32 Degrees");
		        	        	         printf("\n9  AM\t34 Degrees");
		        	        	         printf("\n10 AM\t35 Degrees");
		        	        	         printf("\n11 AM\t37 Degrees");
		        	        	         printf("\n12 PM\t38 Degrees");
		        	        	         printf("\n1  PM\t40 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t42 Degrees");
		        	        	         printf("\n3  PM\t43 Degrees");
		        	        	         printf("\n4  PM\t41 Degrees");
		        	        	         printf("\n5  PM\t40 Degrees");
		        	        	         printf("\n6  PM\t38 Degrees");
		        	        	         printf("\n7  PM\t37 Degrees");
		        	        	         printf("\n8  PM\t35 Degrees");
		        	        	         printf("\n9  PM\t34 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t33 Degrees");
		        	        	         printf("\n11 PM\t32 Degrees");
		        	        	         printf("\n12 AM\t31 Degrees");
		        	        	         printf("\n1  AM\t30 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t28 Degrees");
		        	        	         printf("\n4  AM\t27 Degrees");
		        	        	         printf("\n5  AM\t26 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t26 Celsius\nHumidity\t55 percent\nWindspeed\t14.8 kph");
		        		    break;
					case 19:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t24 Degrees");
		        	        	         printf("\n7  AM\t25 Degrees");
		        	        	         printf("\n8  AM\t27 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t32 Degrees");
		        	        	         printf("\n12 PM\t34 Degrees");
		        	        	         printf("\n1  PM\t37 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t38 Degrees");
		        	        	         printf("\n3  PM\t40 Degrees");
		        	        	         printf("\n4  PM\t38 Degrees");
		        	        	         printf("\n5  PM\t36 Degrees");
		        	        	         printf("\n6  PM\t35 Degrees");
		        	        	         printf("\n7  PM\t34 Degrees");
		        	        	         printf("\n8  PM\t32 Degrees");
		        	        	         printf("\n9  PM\t31 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t27 Degrees");
		        	        	         printf("\n3  AM\t26 Degrees");
		        	        	         printf("\n4  AM\t25 Degrees");
		        	        	         printf("\n5  AM\t24 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t26 Celsius\nHumidity\t55 percent\nWindspeed\t14.8 kph");
		        		    break;
		        	case 20:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t28 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t31 Degrees");
		        	        	         printf("\n3  PM\t32 Degrees");
		        	        	         printf("\n4  PM\t32 Degrees");
		        	        	         printf("\n5  PM\t31 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t30 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t29 Degrees");
		        	        	         printf("\n4  AM\t28 Degrees");
		        	        	         printf("\n5  AM\t28 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t26 Celsius\nHumidity\t55 percent\nWindspeed\t14.8 kph");
		        		    break;
					case 21:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t27 Degrees");
		        	        	         printf("\n7  AM\t29 Degrees");
		        	        	         printf("\n8  AM\t32 Degrees");
		        	        	         printf("\n9  AM\t34 Degrees");
		        	        	         printf("\n10 AM\t35 Degrees");
		        	        	         printf("\n11 AM\t37 Degrees");
		        	        	         printf("\n12 PM\t38 Degrees");
		        	        	         printf("\n1  PM\t40 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t42 Degrees");
		        	        	         printf("\n3  PM\t43 Degrees");
		        	        	         printf("\n4  PM\t41 Degrees");
		        	        	         printf("\n5  PM\t40 Degrees");
		        	        	         printf("\n6  PM\t38 Degrees");
		        	        	         printf("\n7  PM\t37 Degrees");
		        	        	         printf("\n8  PM\t35 Degrees");
		        	        	         printf("\n9  PM\t34 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t33 Degrees");
		        	        	         printf("\n11 PM\t32 Degrees");
		        	        	         printf("\n12 AM\t31 Degrees");
		        	        	         printf("\n1  AM\t30 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t28 Degrees");
		        	        	         printf("\n4  AM\t27 Degrees");
		        	        	         printf("\n5  AM\t26 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t26 Celsius\nHumidity\t55 percent\nWindspeed\t14.8 kph");
		        		    break;
		            case 22:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t29 Degrees");
		        	        	         printf("\n7  AM\t29 Degrees");
		        	        	         printf("\n8  AM\t30 Degrees");
		        	        	         printf("\n9  AM\t31 Degrees");
		        	        	         printf("\n10 AM\t32 Degrees");
		        	        	         printf("\n11 AM\t33 Degrees");
		        	        	         printf("\n12 PM\t34 Degrees");
		        	        	         printf("\n1  PM\t34 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t36 Degrees");
		        	        	         printf("\n3  PM\t37 Degrees");
		        	        	         printf("\n4  PM\t37 Degrees");
		        	        	         printf("\n5  PM\t36 Degrees");
		        	        	         printf("\n6  PM\t35 Degrees");
		        	        	         printf("\n7  PM\t34 Degrees");
		        	        	         printf("\n8  PM\t33 Degrees");
		        	        	         printf("\n9  PM\t32 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t31 Degrees");
		        	        	         printf("\n11 PM\t31 Degrees");
		        	        	         printf("\n12 AM\t30 Degrees");
		        	        	         printf("\n1  AM\t30 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t29 Degrees");
		        	        	         printf("\n4  AM\t28 Degrees");
		        	        	         printf("\n5  AM\t28 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t26 Celsius\nHumidity\t55 percent\nWindspeed\t14.8 kph");
		        		    break;
		        	case 23:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t28 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t31 Degrees");
		        	        	         printf("\n1  PM\t32 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t33 Degrees");
		        	        	         printf("\n3  PM\t34 Degrees");
		        	        	         printf("\n4  PM\t35 Degrees");
		        	        	         printf("\n5  PM\t34 Degrees");
		        	        	         printf("\n6  PM\t33 Degrees");
		        	        	         printf("\n7  PM\t32 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t29 Degrees");
		        	        	         printf("\n4  AM\t28 Degrees");
		        	        	         printf("\n5  AM\t28 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t26 Celsius\nHumidity\t55 percent\nWindspeed\t14.8 kph");
		        		    break;
					case 24:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t27 Degrees");
		        	        	         printf("\n7  AM\t29 Degrees");
		        	        	         printf("\n8  AM\t32 Degrees");
		        	        	         printf("\n9  AM\t34 Degrees");
		        	        	         printf("\n10 AM\t35 Degrees");
		        	        	         printf("\n11 AM\t37 Degrees");
		        	        	         printf("\n12 PM\t38 Degrees");
		        	        	         printf("\n1  PM\t40 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t42 Degrees");
		        	        	         printf("\n3  PM\t43 Degrees");
		        	        	         printf("\n4  PM\t41 Degrees");
		        	        	         printf("\n5  PM\t40 Degrees");
		        	        	         printf("\n6  PM\t38 Degrees");
		        	        	         printf("\n7  PM\t37 Degrees");
		        	        	         printf("\n8  PM\t35 Degrees");
		        	        	         printf("\n9  PM\t34 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t33 Degrees");
		        	        	         printf("\n11 PM\t32 Degrees");
		        	        	         printf("\n12 AM\t31 Degrees");
		        	        	         printf("\n1  AM\t30 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t28 Degrees");
		        	        	         printf("\n4  AM\t27 Degrees");
		        	        	         printf("\n5  AM\t26 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t26 Celsius\nHumidity\t55 percent\nWindspeed\t14.8 kph");
		        		    break;
					case 25:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t24 Degrees");
		        	        	         printf("\n7  AM\t25 Degrees");
		        	        	         printf("\n8  AM\t27 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t32 Degrees");
		        	        	         printf("\n12 PM\t34 Degrees");
		        	        	         printf("\n1  PM\t37 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t38 Degrees");
		        	        	         printf("\n3  PM\t40 Degrees");
		        	        	         printf("\n4  PM\t38 Degrees");
		        	        	         printf("\n5  PM\t36 Degrees");
		        	        	         printf("\n6  PM\t35 Degrees");
		        	        	         printf("\n7  PM\t34 Degrees");
		        	        	         printf("\n8  PM\t32 Degrees");
		        	        	         printf("\n9  PM\t31 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t27 Degrees");
		        	        	         printf("\n3  AM\t26 Degrees");
		        	        	         printf("\n4  AM\t25 Degrees");
		        	        	         printf("\n5  AM\t24 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24.2 Celsius\nHumidity\t55 percent\nWindspeed\t20.1 kph");
		        		    break;
		        	case 26:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t21 Degrees");
		        	        	         printf("\n7  AM\t23 Degrees");
		        	        	         printf("\n8  AM\t25 Degrees");
		        	        	         printf("\n9  AM\t28 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t32 Degrees");
		        	        	         printf("\n12 PM\t35 Degrees");
		        	        	         printf("\n1  PM\t37 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t38 Degrees");
		        	        	         printf("\n3  PM\t39 Degrees");
		        	        	         printf("\n4  PM\t38 Degrees");
		        	        	         printf("\n5  PM\t37 Degrees");
		        	        	         printf("\n6  PM\t36 Degrees");
		        	        	         printf("\n7  PM\t34 Degrees");
		        	        	         printf("\n8  PM\t33 Degrees");
		        	        	         printf("\n9  PM\t32 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t31 Degrees");
		        	        	         printf("\n11 PM\t30 Degrees");
		        	        	         printf("\n12 AM\t28 Degrees");
		        	        	         printf("\n1  AM\t26 Degrees");
		        	        	         printf("\n2  AM\t24 Degrees");
		        	        	         printf("\n3  AM\t22 Degrees");
		        	        	         printf("\n4  AM\t21 Degrees");
		        	        	         printf("\n5  AM\t20 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24.2 Celsius\nHumidity\t55 percent\nWindspeed\t20.1 kph");
		        		    break;
					case 27:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t24 Degrees");
		        	        	         printf("\n7  AM\t27 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t31 Degrees");
		        	        	         printf("\n10 AM\t34 Degrees");
		        	        	         printf("\n11 AM\t36 Degrees");
		        	        	         printf("\n12 PM\t38 Degrees");
		        	        	         printf("\n1  PM\t39 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t40 Degrees");
		        	        	         printf("\n3  PM\t41 Degrees");
		        	        	         printf("\n4  PM\t39 Degrees");
		        	        	         printf("\n5  PM\t38 Degrees");
		        	        	         printf("\n6  PM\t37 Degrees");
		        	        	         printf("\n7  PM\t36 Degrees");
		        	        	         printf("\n8  PM\t34 Degrees");
		        	        	         printf("\n9  PM\t33 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t32 Degrees");
		        	        	         printf("\n11 PM\t30 Degrees");
		        	        	         printf("\n12 AM\t28 Degrees");
		        	        	         printf("\n1  AM\t26 Degrees");
		        	        	         printf("\n2  AM\t25 Degrees");
		        	        	         printf("\n3  AM\t24 Degrees");
		        	        	         printf("\n4  AM\t23 Degrees");
		        	        	         printf("\n5  AM\t22 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24.2 Celsius\nHumidity\t55 percent\nWindspeed\t20.1 kph");
		        		    break;
		            case 28:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t27 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t30 Degrees");
		        	        	         printf("\n10 AM\t31 Degrees");
		        	        	         printf("\n11 AM\t33 Degrees");
		        	        	         printf("\n12 PM\t34 Degrees");
		        	        	         printf("\n1  PM\t35 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t36 Degrees");
		        	        	         printf("\n3  PM\t36 Degrees");
		        	        	         printf("\n4  PM\t36 Degrees");
		        	        	         printf("\n5  PM\t35 Degrees");
		        	        	         printf("\n6  PM\t34 Degrees");
		        	        	         printf("\n7  PM\t34 Degrees");
		        	        	         printf("\n8  PM\t33 Degrees");
		        	        	         printf("\n9  PM\t32 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t32 Degrees");
		        	        	         printf("\n11 PM\t31 Degrees");
		        	        	         printf("\n12 AM\t30 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t28 Degrees");
		        	        	         printf("\n4  AM\t28 Degrees");
		        	        	         printf("\n5  AM\t27 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24.2 Celsius\nHumidity\t55 percent\nWindspeed\t20.1 kph");
		        		    break;
		        	case 29:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t26 Degrees");
		        	        	         printf("\n7  AM\t27 Degrees");
		        	        	         printf("\n8  AM\t28 Degrees");
		        	        	         printf("\n9  AM\t30 Degrees");
		        	        	         printf("\n10 AM\t31 Degrees");
		        	        	         printf("\n11 AM\t33 Degrees");
		        	        	         printf("\n12 PM\t34 Degrees");
		        	        	         printf("\n1  PM\t35 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t36 Degrees");
		        	        	         printf("\n3  PM\t36 Degrees");
		        	        	         printf("\n4  PM\t36 Degrees");
		        	        	         printf("\n5  PM\t35 Degrees");
		        	        	         printf("\n6  PM\t34 Degrees");
		        	        	         printf("\n7  PM\t33 Degrees");
		        	        	         printf("\n8  PM\t33 Degrees");
		        	        	         printf("\n9  PM\t32 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t31 Degrees");
		        	        	         printf("\n11 PM\t31 Degrees");
		        	        	         printf("\n12 AM\t30 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t28 Degrees");
		        	        	         printf("\n3  AM\t27 Degrees");
		        	        	         printf("\n4  AM\t27 Degrees");
		        	        	         printf("\n5  AM\t26 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t24.2 Celsius\nHumidity\t55 percent\nWindspeed\t20.1 kph");
		        		    break;
					case 30:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t27 Degrees");
		        	        	         printf("\n7  AM\t29 Degrees");
		        	        	         printf("\n8  AM\t32 Degrees");
		        	        	         printf("\n9  AM\t34 Degrees");
		        	        	         printf("\n10 AM\t35 Degrees");
		        	        	         printf("\n11 AM\t37 Degrees");
		        	        	         printf("\n12 PM\t38 Degrees");
		        	        	         printf("\n1  PM\t40 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t42 Degrees");
		        	        	         printf("\n3  PM\t43 Degrees");
		        	        	         printf("\n4  PM\t41 Degrees");
		        	        	         printf("\n5  PM\t40 Degrees");
		        	        	         printf("\n6  PM\t38 Degrees");
		        	        	         printf("\n7  PM\t37 Degrees");
		        	        	         printf("\n8  PM\t35 Degrees");
		        	        	         printf("\n9  PM\t34 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t33 Degrees");
		        	        	         printf("\n11 PM\t32 Degrees");
		        	        	         printf("\n12 AM\t31 Degrees");
		        	        	         printf("\n1  AM\t30 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t28 Degrees");
		        	        	         printf("\n4  AM\t27 Degrees");
		        	        	         printf("\n5  AM\t26 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t24.2 Celsius\nHumidity\t55 percent\nWindspeed\t20.1 kph");
		        	        break;
		    }
		    break;
		case 5: printf("\nEnter the day of the month.\n(enter the number that coincides with the day)");
		        printf("\nSun\tMon\tTue\tWed\tThu\tFri\tSat");
		        printf("\n1  \t2  \t3  \t4  \t5  \t6  \t7\n8  \t9  \t10 \t11 \t12 \t13 \t14\n15 \t16 \t17 \t18 \t19 \t20 \t21\n22 \t23 \t24 \t25 \t26 \t27 \t28\n29 \t30 \t31");
		        printf("\nEnter here:");   scanf("\n%d",&day);
		        printf("\n(Caution): Prediction of high humidity and long lasting heat waves");
		        switch(day) {
				case 1:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t28 Degrees");
							printf("\n7  AM\t28 Degrees");
							printf("\n8  AM\t29 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t29 Degrees");
							printf("\n11 AM\t30 Degrees");
							printf("\n12 PM\t30 Degrees");
							printf("\n1  PM\t31 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t31 Degrees");
							printf("\n3  PM\t32 Degrees");
							printf("\n4  PM\t32 Degrees");
							printf("\n5  PM\t35 Degrees");
							printf("\n6  PM\t35 Degrees");
							printf("\n7  PM\t39 Degrees");
							printf("\n8  PM\t39 Degrees");
							printf("\n9  PM\t40 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t39 Degrees");
							printf("\n11 PM\t39 Degrees");
							printf("\n12 AM\t36 Degrees");
							printf("\n1  AM\t36 Degrees");
							printf("\n2  AM\t33 Degrees");
							printf("\n3  AM\t33 Degrees");
							printf("\n4  AM\t31 Degrees");
							printf("\n5  AM\t31 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 2:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t28 Degrees");
							printf("\n7  AM\t28 Degrees");
							printf("\n8  AM\t29 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t30 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t32 Degrees");
							printf("\n1  PM\t32 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t36 Degrees");
							printf("\n3  PM\t36 Degrees");
							printf("\n4  PM\t35 Degrees");
							printf("\n5  PM\t35 Degrees");
							printf("\n6  PM\t33 Degrees");
							printf("\n7  PM\t33 Degrees");
							printf("\n8  PM\t31 Degrees");
							printf("\n9  PM\t31 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t30 Degrees");
							printf("\n12 AM\t27 Degrees");
							printf("\n1  AM\t27 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t28 Degrees");
							printf("\n4  AM\t29 Degrees");
							printf("\n5  AM\t29 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 3:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t27 Degrees");
							printf("\n7  AM\t27 Degrees");
							printf("\n8  AM\t28 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t29 Degrees");
							printf("\n11 AM\t30 Degrees");
							printf("\n12 PM\t30 Degrees");
							printf("\n1  PM\t31 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t32 Degrees");
							printf("\n3  PM\t33 Degrees");
							printf("\n4  PM\t32 Degrees");
							printf("\n5  PM\t32 Degrees");
							printf("\n6  PM\t31 Degrees");
							printf("\n7  PM\t31 Degrees");
							printf("\n8  PM\t30 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 4:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t27 Degrees");
							printf("\n7  AM\t27 Degrees");
							printf("\n8  AM\t29 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t29 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t31 Degrees");
							printf("\n1  PM\t32 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t32 Degrees");
							printf("\n3  PM\t34 Degrees");
							printf("\n4  PM\t34 Degrees");
							printf("\n5  PM\t31 Degrees");
							printf("\n6  PM\t30 Degrees");
							printf("\n7  PM\t30 Degrees");
							printf("\n8  PM\t30 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t27 Degrees");
							printf("\n5  AM\t27 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 5:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t27 Degrees");
							printf("\n7  AM\t27 Degrees");
							printf("\n8  AM\t29 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t29 Degrees");
							printf("\n11 AM\t32 Degrees");
							printf("\n12 PM\t32 Degrees");
							printf("\n1  PM\t35 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t35 Degrees");
							printf("\n3  PM\t32 Degrees");
							printf("\n4  PM\t32 Degrees");
							printf("\n5  PM\t31 Degrees");
							printf("\n6  PM\t30 Degrees");
							printf("\n7  PM\t30 Degrees");
							printf("\n8  PM\t30 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t27 Degrees");
							printf("\n5  AM\t27 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 6:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t28 Degrees");
							printf("\n7  AM\t28 Degrees");
							printf("\n8  AM\t29 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t30 Degrees");
							printf("\n11 AM\t30 Degrees");
							printf("\n12 PM\t31 Degrees");
							printf("\n1  PM\t32 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t33 Degrees");
							printf("\n3  PM\t34 Degrees");
							printf("\n4  PM\t33 Degrees");
							printf("\n5  PM\t32 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t31 Degrees");
							printf("\n8  PM\t31 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t28 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t28 Degrees");
							printf("\n4  AM\t27 Degrees");
							printf("\n5  AM\t27 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 7:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t27 Degrees");
							printf("\n7  AM\t28 Degrees");
							printf("\n8  AM\t29 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t30 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t32 Degrees");
							printf("\n1  PM\t33 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t37 Degrees");
							printf("\n3  PM\t37 Degrees");
							printf("\n4  PM\t34 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t32 Degrees");
							printf("\n8  PM\t31 Degrees");
							printf("\n9  PM\t31 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t28 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t28 Degrees");
							printf("\n4  AM\t27 Degrees");
							printf("\n5  AM\t27 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 8:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t28 Degrees");
							printf("\n7  AM\t28 Degrees");
							printf("\n8  AM\t29 Degrees");
							printf("\n9  AM\t30 Degrees");
							printf("\n10 AM\t31 Degrees");
							printf("\n11 AM\t32 Degrees");
							printf("\n12 PM\t33 Degrees");
							printf("\n1  PM\t34 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t35 Degrees");
							printf("\n3  PM\t36 Degrees");
							printf("\n4  PM\t34 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t31 Degrees");
							printf("\n8  PM\t30 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 9:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t28 Degrees");
							printf("\n7  AM\t29 Degrees");
							printf("\n8  AM\t29 Degrees");
							printf("\n9  AM\t30 Degrees");
							printf("\n10 AM\t31 Degrees");
							printf("\n11 AM\t32 Degrees");
							printf("\n12 PM\t34 Degrees");
							printf("\n1  PM\t35 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t35 Degrees");
							printf("\n3  PM\t35 Degrees");
							printf("\n4  PM\t34 Degrees");
							printf("\n5  PM\t34 Degrees");
							printf("\n6  PM\t33 Degrees");
							printf("\n7  PM\t33 Degrees");
							printf("\n8  PM\t33 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t28 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t28 Degrees");
							printf("\n4  AM\t27 Degrees");
							printf("\n5  AM\t27 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 10:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t28 Degrees");
							printf("\n7  AM\t28 Degrees");
							printf("\n8  AM\t28 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t30 Degrees");
							printf("\n11 AM\t32 Degrees");
							printf("\n12 PM\t34 Degrees");
							printf("\n1  PM\t35 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t35 Degrees");
							printf("\n3  PM\t35 Degrees");
							printf("\n4  PM\t34 Degrees");
							printf("\n5  PM\t34 Degrees");
							printf("\n6  PM\t33 Degrees");
							printf("\n7  PM\t33.5 Degrees");
							printf("\n8  PM\t33 Degrees");
							printf("\n9  PM\t32 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t32 Degrees");
							printf("\n11 PM\t31 Degrees");
							printf("\n12 AM\t31 Degrees");
							printf("\n1  AM\t30 Degrees");
							printf("\n2  AM\t30 Degrees");
							printf("\n3  AM\t30 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 11:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t29 Degrees");
							printf("\n7  AM\t29 Degrees");
							printf("\n8  AM\t29 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t29 Degrees");
							printf("\n11 AM\t30 Degrees");
							printf("\n12 PM\t30 Degrees");
							printf("\n1  PM\t31 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t31 Degrees");
							printf("\n3  PM\t32 Degrees");
							printf("\n4  PM\t32 Degrees");
							printf("\n5  PM\t31 Degrees");
							printf("\n6  PM\t30 Degrees");
							printf("\n7  PM\t30 Degrees");
							printf("\n8  PM\t30 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t29 Degrees");
							printf("\n5  AM\t29 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 12:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t28 Degrees");
							printf("\n7  AM\t28 Degrees");
							printf("\n8  AM\t29 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t29 Degrees");
							printf("\n11 AM\t30 Degrees");
							printf("\n12 PM\t30 Degrees");
							printf("\n1  PM\t32 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t32 Degrees");
							printf("\n3  PM\t36 Degrees");
							printf("\n4  PM\t36 Degrees");
							printf("\n5  PM\t34 Degrees");
							printf("\n6  PM\t34 Degrees");
							printf("\n7  PM\t32 Degrees");
							printf("\n8  PM\t32 Degrees");
							printf("\n9  PM\t31 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 13:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t28 Degrees");
							printf("\n7  AM\t28 Degrees");
							printf("\n8  AM\t29 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t29 Degrees");
							printf("\n11 AM\t30 Degrees");
							printf("\n12 PM\t30 Degrees");
							printf("\n1  PM\t33 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t33 Degrees");
							printf("\n3  PM\t36 Degrees");
							printf("\n4  PM\t36 Degrees");
							printf("\n5  PM\t35 Degrees");
							printf("\n6  PM\t35 Degrees");
							printf("\n7  PM\t34 Degrees");
							printf("\n8  PM\t31 Degrees");
							printf("\n9  PM\t31 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t28 Degrees");
							printf("\n12 AM\t28 Degrees");
							printf("\n1  AM\t28 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t28 Degrees");
							printf("\n4  AM\t29 Degrees");
							printf("\n5  AM\t29 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 14:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t28 Degrees");
							printf("\n7  AM\t28 Degrees");
							printf("\n8  AM\t30 Degrees");
							printf("\n9  AM\t30 Degrees");
							printf("\n10 AM\t32 Degrees");
							printf("\n11 AM\t32 Degrees");
							printf("\n12 PM\t36 Degrees");
							printf("\n1  PM\t40 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t40 Degrees");
							printf("\n3  PM\t43 Degrees");
							printf("\n4  PM\t43 Degrees");
							printf("\n5  PM\t40 Degrees");
							printf("\n6  PM\t40 Degrees");
							printf("\n7  PM\t36 Degrees");
							printf("\n8  PM\t36 Degrees");
							printf("\n9  PM\t33 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t33 Degrees");
							printf("\n11 PM\t30 Degrees");
							printf("\n12 AM\t30 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 15:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t28 Degrees");
							printf("\n7  AM\t28 Degrees");
							printf("\n8  AM\t29 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t29 Degrees");
							printf("\n11 AM\t33 Degrees");
							printf("\n12 PM\t33 Degrees");
							printf("\n1  PM\t37 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t37 Degrees");
							printf("\n3  PM\t33 Degrees");
							printf("\n4  PM\t33 Degrees");
							printf("\n5  PM\t31 Degrees");
							printf("\n6  PM\t30 Degrees");
							printf("\n7  PM\t30 Degrees");
							printf("\n8  PM\t30 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 16:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t29 Degrees");
							printf("\n7  AM\t29 Degrees");
							printf("\n8  AM\t33 Degrees");
							printf("\n9  AM\t33 Degrees");
							printf("\n10 AM\t38 Degrees");
							printf("\n11 AM\t38 Degrees");
							printf("\n12 PM\t40 Degrees");
							printf("\n1  PM\t40 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t41 Degrees");
							printf("\n3  PM\t39 Degrees");
							printf("\n4  PM\t37 Degrees");
							printf("\n5  PM\t37 Degrees");
							printf("\n6  PM\t35 Degrees");
							printf("\n7  PM\t32 Degrees");
							printf("\n8  PM\t32 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 17:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t28 Degrees");
							printf("\n7  AM\t28 Degrees");
							printf("\n8  AM\t30 Degrees");
							printf("\n9  AM\t34 Degrees");
							printf("\n10 AM\t34 Degrees");
							printf("\n11 AM\t38 Degrees");
							printf("\n12 PM\t38 Degrees");
							printf("\n1  PM\t41 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t41 Degrees");
							printf("\n3  PM\t38 Degrees");
							printf("\n4  PM\t38 Degrees");
							printf("\n5  PM\t36 Degrees");
							printf("\n6  PM\t34 Degrees");
							printf("\n7  PM\t34 Degrees");
							printf("\n8  PM\t30 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 18:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t28 Degrees");
							printf("\n7  AM\t28 Degrees");
							printf("\n8  AM\t30 Degrees");
							printf("\n9  AM\t32 Degrees");
							printf("\n10 AM\t32 Degrees");
							printf("\n11 AM\t35 Degrees");
							printf("\n12 PM\t35 Degrees");
							printf("\n1  PM\t36 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t36 Degrees");
							printf("\n3  PM\t34 Degrees");
							printf("\n4  PM\t34 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t33 Degrees");
							printf("\n7  PM\t32 Degrees");
							printf("\n8  PM\t32 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 19:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t28 Degrees");
							printf("\n7  AM\t28 Degrees");
							printf("\n8  AM\t30 Degrees");
							printf("\n9  AM\t32 Degrees");
							printf("\n10 AM\t32 Degrees");
							printf("\n11 AM\t35 Degrees");
							printf("\n12 PM\t35 Degrees");
							printf("\n1  PM\t36 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t36 Degrees");
							printf("\n3  PM\t34 Degrees");
							printf("\n4  PM\t34 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t33 Degrees");
							printf("\n7  PM\t32 Degrees");
							printf("\n8  PM\t32 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 20:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t28 Degrees");
							printf("\n7  AM\t28 Degrees");
							printf("\n8  AM\t29 Degrees");
							printf("\n9  AM\t30 Degrees");
							printf("\n10 AM\t30 Degrees");
							printf("\n11 AM\t33 Degrees");
							printf("\n12 PM\t33 Degrees");
							printf("\n1  PM\t35 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t35 Degrees");
							printf("\n3  PM\t32 Degrees");
							printf("\n4  PM\t32 Degrees");
							printf("\n5  PM\t31 Degrees");
							printf("\n6  PM\t30 Degrees");
							printf("\n7  PM\t30 Degrees");
							printf("\n8  PM\t30 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 21:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t28 Degrees");
							printf("\n7  AM\t28 Degrees");
							printf("\n8  AM\t29 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t29 Degrees");
							printf("\n11 AM\t30 Degrees");
							printf("\n12 PM\t30 Degrees");
							printf("\n1  PM\t31 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t31 Degrees");
							printf("\n3  PM\t32 Degrees");
							printf("\n4  PM\t32 Degrees");
							printf("\n5  PM\t31 Degrees");
							printf("\n6  PM\t30 Degrees");
							printf("\n7  PM\t30 Degrees");
							printf("\n8  PM\t30 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 22:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t28 Degrees");
							printf("\n7  AM\t28 Degrees");
							printf("\n8  AM\t29 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t29 Degrees");
							printf("\n11 AM\t30 Degrees");
							printf("\n12 PM\t30 Degrees");
							printf("\n1  PM\t31 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t31 Degrees");
							printf("\n3  PM\t32 Degrees");
							printf("\n4  PM\t32 Degrees");
							printf("\n5  PM\t31 Degrees");
							printf("\n6  PM\t30 Degrees");
							printf("\n7  PM\t30 Degrees");
							printf("\n8  PM\t30 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 23:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t28 Degrees");
							printf("\n7  AM\t28 Degrees");
							printf("\n8  AM\t29 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t29 Degrees");
							printf("\n11 AM\t30 Degrees");
							printf("\n12 PM\t30 Degrees");
							printf("\n1  PM\t31 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t31 Degrees");
							printf("\n3  PM\t32 Degrees");
							printf("\n4  PM\t32 Degrees");
							printf("\n5  PM\t31 Degrees");
							printf("\n6  PM\t30 Degrees");
							printf("\n7  PM\t30 Degrees");
							printf("\n8  PM\t30 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 24:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t28 Degrees");
							printf("\n7  AM\t28 Degrees");
							printf("\n8  AM\t29 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t29 Degrees");
							printf("\n11 AM\t30 Degrees");
							printf("\n12 PM\t30 Degrees");
							printf("\n1  PM\t31 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t31 Degrees");
							printf("\n3  PM\t32 Degrees");
							printf("\n4  PM\t32 Degrees");
							printf("\n5  PM\t31 Degrees");
							printf("\n6  PM\t30 Degrees");
							printf("\n7  PM\t30 Degrees");
							printf("\n8  PM\t30 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 25:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t29 Degrees");
							printf("\n7  AM\t29 Degrees");
							printf("\n8  AM\t30 Degrees");
							printf("\n9  AM\t30 Degrees");
							printf("\n10 AM\t33 Degrees");
							printf("\n11 AM\t33 Degrees");
							printf("\n12 PM\t35 Degrees");
							printf("\n1  PM\t35 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t35 Degrees");
							printf("\n3  PM\t34 Degrees");
							printf("\n4  PM\t34 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t33 Degrees");
							printf("\n7  PM\t33 Degrees");
							printf("\n8  PM\t32 Degrees");
							printf("\n9  PM\t32 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t31 Degrees");
							printf("\n11 PM\t31 Degrees");
							printf("\n12 AM\t30 Degrees");
							printf("\n1  AM\t30 Degrees");
							printf("\n2  AM\t30.7 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t29 Degrees");
							printf("\n5  AM\t29 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 26:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t29 Degrees");
							printf("\n7  AM\t29 Degrees");
							printf("\n8  AM\t30 Degrees");
							printf("\n9  AM\t30 Degrees");
							printf("\n10 AM\t32 Degrees");
							printf("\n11 AM\t32 Degrees");
							printf("\n12 PM\t34 Degrees");
							printf("\n1  PM\t34 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t34 Degrees");
							printf("\n3  PM\t33 Degrees");
							printf("\n4  PM\t33 Degrees");
							printf("\n5  PM\t32 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t31 Degrees");
							printf("\n8  PM\t31 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t29 Degrees");
							printf("\n5  AM\t29 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 27:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t30 Degrees");
							printf("\n7  AM\t30 Degrees");
							printf("\n8  AM\t31 Degrees");
							printf("\n9  AM\t31 Degrees");
							printf("\n10 AM\t33 Degrees");
							printf("\n11 AM\t33 Degrees");
							printf("\n12 PM\t35 Degrees");
							printf("\n1  PM\t35 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t35 Degrees");
							printf("\n3  PM\t35 Degrees");
							printf("\n4  PM\t34 Degrees");
							printf("\n5  PM\t34 Degrees");
							printf("\n6  PM\t33 Degrees");
							printf("\n7  PM\t33 Degrees");
							printf("\n8  PM\t32 Degrees");
							printf("\n9  PM\t32 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t31 Degrees");
							printf("\n11 PM\t31 Degrees");
							printf("\n12 AM\t30 Degrees");
							printf("\n1  AM\t30 Degrees");
							printf("\n2  AM\t30 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t29 Degrees");
							printf("\n5  AM\t29 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 28:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t29 Degrees");
							printf("\n7  AM\t29 Degrees");
							printf("\n8  AM\t31 Degrees");
							printf("\n9  AM\t31 Degrees");
							printf("\n10 AM\t33 Degrees");
							printf("\n11 AM\t33 Degrees");
							printf("\n12 PM\t35 Degrees");
							printf("\n1  PM\t36 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t36 Degrees");
							printf("\n3  PM\t36 Degrees");
							printf("\n4  PM\t35 Degrees");
							printf("\n5  PM\t35 Degrees");
							printf("\n6  PM\t35 Degrees");
							printf("\n7  PM\t34 Degrees");
							printf("\n8  PM\t34 Degrees");
							printf("\n9  PM\t34 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t33 Degrees");
							printf("\n11 PM\t31 Degrees");
							printf("\n12 AM\t31 Degrees");
							printf("\n1  AM\t30 Degrees");
							printf("\n2  AM\t30 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t29 Degrees");
							printf("\n5  AM\t29 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 29:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t30 Degrees");
							printf("\n7  AM\t30 Degrees");
							printf("\n8  AM\t30 Degrees");
							printf("\n9  AM\t32 Degrees");
							printf("\n10 AM\t32 Degrees");
							printf("\n11 AM\t33 Degrees");
							printf("\n12 PM\t33 Degrees");
							printf("\n1  PM\t35 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t35 Degrees");
							printf("\n3  PM\t35 Degrees");
							printf("\n4  PM\t35 Degrees");
							printf("\n5  PM\t34 Degrees");
							printf("\n6  PM\t34 Degrees");
							printf("\n7  PM\t33 Degrees");
							printf("\n8  PM\t33 Degrees");
							printf("\n9  PM\t32 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t32 Degrees");
							printf("\n11 PM\t32 Degrees");
							printf("\n12 AM\t31 Degrees");
							printf("\n1  AM\t31 Degrees");
							printf("\n2  AM\t31 Degrees");
							printf("\n3  AM\t30 Degrees");
							printf("\n4  AM\t30 Degrees");
							printf("\n5  AM\t30 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 30:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t29 Degrees");
							printf("\n7  AM\t29 Degrees");
							printf("\n8  AM\t31 Degrees");
							printf("\n9  AM\t31 Degrees");
							printf("\n10 AM\t33 Degrees");
							printf("\n11 AM\t33 Degrees");
							printf("\n12 PM\t35 Degrees");
							printf("\n1  PM\t36 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t36 Degrees");
							printf("\n3  PM\t36 Degrees");
							printf("\n4  PM\t35 Degrees");
							printf("\n5  PM\t35 Degrees");
							printf("\n6  PM\t35 Degrees");
							printf("\n7  PM\t34 Degrees");
							printf("\n8  PM\t34 Degrees");
							printf("\n9  PM\t34 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t33 Degrees");
							printf("\n11 PM\t31 Degrees");
							printf("\n12 AM\t31 Degrees");
							printf("\n1  AM\t30 Degrees");
							printf("\n2  AM\t30 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t29 Degrees");
							printf("\n5  AM\t29 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
				case 31:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t29 Degrees");
							printf("\n7  AM\t29 Degrees");
							printf("\n8  AM\t30 Degrees");
							printf("\n9  AM\t30 Degrees");
							printf("\n10 AM\t33 Degrees");
							printf("\n11 AM\t33 Degrees");
							printf("\n12 PM\t35 Degrees");
							printf("\n1  PM\t35 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t35 Degrees");
							printf("\n3  PM\t34 Degrees");
							printf("\n4  PM\t34 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t33 Degrees");
							printf("\n7  PM\t33 Degrees");
							printf("\n8  PM\t32 Degrees");
							printf("\n9  PM\t32 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t31 Degrees");
							printf("\n11 PM\t31 Degrees");
							printf("\n12 AM\t30 Degrees");
							printf("\n1  AM\t30 Degrees");
							printf("\n2  AM\t30.7 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t29 Degrees");
							printf("\n5  AM\t29 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t63 percent\nWindspeed\t21.2 kph");
					break;
			}
			break;
		case 6: printf("\nEnter the day of the month.\n(enter the number that coincides with the day)");
		        printf("\nSun\tMon\tTue\tWed\tThu\tFri\tSat");
		        printf("\n   \t   \t   \t1  \t2  \t3  \t4\n5  \t6  \t7  \t8  \t9  \t10 \t11\n12 \t13 \t14 \t15 \t16 \t17 \t18\n19 \t20 \t21 \t22 \t23 \t24 \t25\n26 \t27 \t28 \t29 \t30");
		        printf("\nEnter here:");   scanf("\n%d",&day);
		        printf("\n(Caution): Prediction of heat waves and light rain near the end of the month");
		        switch(day)
		        {
		        	case 1: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t30 Degrees");
							printf("\n7  AM\t30.55 Degrees");
							printf("\n8  AM\t29.5 Degrees");
							printf("\n9  AM\t31 Degrees");
							printf("\n10 AM\t30.5 Degrees");
							printf("\n11 AM\t30 Degrees");
							printf("\n12 PM\t30.5 Degrees");
							printf("\n1  PM\t31 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t31.5 Degrees");
							printf("\n3  PM\t32 Degrees");
							printf("\n4  PM\t32.5 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t31 Degrees");
							printf("\n8  PM\t30 Degrees");
							printf("\n9  PM\t30.5 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29.5 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29.5 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28.5 Degrees");
							break;		 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
					case 2: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t30 Degrees");
							printf("\n7  AM\t30 Degrees");
							printf("\n8  AM\t30.5 Degrees");
							printf("\n9  AM\t31 Degrees");
							printf("\n10 AM\t31.5 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t31 Degrees");
							printf("\n1  PM\t32 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t32.5 Degrees");
							printf("\n3  PM\t34 Degrees");
							printf("\n4  PM\t34.5 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t31.5 Degrees");
							printf("\n8  PM\t31 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29.5 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t30 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28.5 Degrees");
							break;		 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
					case 3: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t30 Degrees");
							printf("\n7  AM\t30 Degrees");
							printf("\n8  AM\t30.5 Degrees");
							printf("\n9  AM\t31 Degrees");
							printf("\n10 AM\t31.5 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t31 Degrees");
							printf("\n1  PM\t32 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t32.5 Degrees");
							printf("\n3  PM\t34 Degrees");
							printf("\n4  PM\t34.5 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t31.5 Degrees");
							printf("\n8  PM\t31 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29.5 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t30 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28.5 Degrees");
							break;		 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
		            case 4: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t30 Degrees");
							printf("\n7  AM\t30 Degrees");
							printf("\n8  AM\t30.5 Degrees");
							printf("\n9  AM\t31 Degrees");
							printf("\n10 AM\t31.5 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t31 Degrees");
							printf("\n1  PM\t32 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t32.5 Degrees");
							printf("\n3  PM\t34 Degrees");
							printf("\n4  PM\t34.5 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t31.5 Degrees");
							printf("\n8  PM\t31 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29.5 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t30 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28.5 Degrees");
							break;		 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
		        	case 5: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t30 Degrees");
							printf("\n7  AM\t30.55 Degrees");
							printf("\n8  AM\t29.5 Degrees");
							printf("\n9  AM\t31 Degrees");
							printf("\n10 AM\t30.5 Degrees");
							printf("\n11 AM\t30 Degrees");
							printf("\n12 PM\t30.5 Degrees");
							printf("\n1  PM\t31 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t31.5 Degrees");
							printf("\n3  PM\t32 Degrees");
							printf("\n4  PM\t32.5 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t31 Degrees");
							printf("\n8  PM\t30 Degrees");
							printf("\n9  PM\t30.5 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29.5 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29.5 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28.5 Degrees");
							break;		 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
					case 6: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t30 Degrees");
							printf("\n7  AM\t30.55 Degrees");
							printf("\n8  AM\t29.5 Degrees");
							printf("\n9  AM\t31 Degrees");
							printf("\n10 AM\t30.5 Degrees");
							printf("\n11 AM\t30 Degrees");
							printf("\n12 PM\t30.5 Degrees");
							printf("\n1  PM\t31 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t31.5 Degrees");
							printf("\n3  PM\t32 Degrees");
							printf("\n4  PM\t32.5 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t31 Degrees");
							printf("\n8  PM\t30 Degrees");
							printf("\n9  PM\t30.5 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29.5 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29.5 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28.5 Degrees");
							break;		 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
					case 7: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t30 Degrees");
							printf("\n7  AM\t30.55 Degrees");
							printf("\n8  AM\t29.5 Degrees");
							printf("\n9  AM\t31 Degrees");
							printf("\n10 AM\t30.5 Degrees");
							printf("\n11 AM\t30 Degrees");
							printf("\n12 PM\t30.5 Degrees");
							printf("\n1  PM\t31 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t31.5 Degrees");
							printf("\n3  PM\t32 Degrees");
							printf("\n4  PM\t32.5 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t31 Degrees");
							printf("\n8  PM\t30 Degrees");
							printf("\n9  PM\t30.5 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29.5 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29.5 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28.5 Degrees");
							break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
		        	case 8: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t30 Degrees");
							printf("\n7  AM\t30 Degrees");
							printf("\n8  AM\t30.5 Degrees");
							printf("\n9  AM\t31 Degrees");
							printf("\n10 AM\t31.5 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t31 Degrees");
							printf("\n1  PM\t32 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t32.5 Degrees");
							printf("\n3  PM\t34 Degrees");
							printf("\n4  PM\t34.5 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t31.5 Degrees");
							printf("\n8  PM\t31 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29.5 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t30 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28.5 Degrees");
							break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
					case 9: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t30 Degrees");
							printf("\n7  AM\t29 Degrees");
							printf("\n8  AM\t29.5 Degrees");
							printf("\n9  AM\t30 Degrees");
							printf("\n10 AM\t30.5 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t31.5 Degrees");
							printf("\n1  PM\t32 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t32 Degrees");
							printf("\n3  PM\t32.5 Degrees");
							printf("\n4  PM\t33 Degrees");
							printf("\n5  PM\t32 Degrees");
							printf("\n6  PM\t31 Degrees");
							printf("\n7  PM\t31.5 Degrees");
							printf("\n8  PM\t30 Degrees");
							printf("\n9  PM\t30.5 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t30.5 Degrees");
							printf("\n12 AM\t30 Degrees");
							printf("\n1  AM\t29.5 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28.5 Degrees");
							printf("\n5  AM\t28 Degrees");
							break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
		            case 10:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t30 Degrees");
							printf("\n7  AM\t30 Degrees");
							printf("\n8  AM\t30.5 Degrees");
							printf("\n9  AM\t31 Degrees");
							printf("\n10 AM\t31.5 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t31 Degrees");
							printf("\n1  PM\t32 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t32.5 Degrees");
							printf("\n3  PM\t34 Degrees");
							printf("\n4  PM\t34.5 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t31.5 Degrees");
							printf("\n8  PM\t31 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29.5 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t30 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28.5 Degrees");
							break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
		        	case 11:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t30 Degrees");
							printf("\n7  AM\t30 Degrees");
							printf("\n8  AM\t30.5 Degrees");
							printf("\n9  AM\t31 Degrees");
							printf("\n10 AM\t31.5 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t31 Degrees");
							printf("\n1  PM\t32 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t32.5 Degrees");
							printf("\n3  PM\t34 Degrees");
							printf("\n4  PM\t34.5 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t31.5 Degrees");
							printf("\n8  PM\t31 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29.5 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t30 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28.5 Degrees");
							break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
					case 12:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t30 Degrees");
							printf("\n7  AM\t30.5 Degrees");
							printf("\n8  AM\t30 Degrees");
							printf("\n9  AM\t31.5 Degrees");
							printf("\n10 AM\t30.5 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t31.5 Degrees");
							printf("\n1  PM\t32 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t32 Degrees");
							printf("\n3  PM\t32.5 Degrees");
							printf("\n4  PM\t33 Degrees");
							printf("\n5  PM\t32.5 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t31 Degrees");
							printf("\n8  PM\t30.5 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30.5 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29.5 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29.5 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28.5 Degrees");
							break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
					case 13:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t30 Degrees");
							printf("\n7  AM\t30.5 Degrees");
							printf("\n8  AM\t30 Degrees");
							printf("\n9  AM\t31.5 Degrees");
							printf("\n10 AM\t30.5 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t31.5 Degrees");
							printf("\n1  PM\t32 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t32 Degrees");
							printf("\n3  PM\t32.5 Degrees");
							printf("\n4  PM\t33 Degrees");
							printf("\n5  PM\t32.5 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t31 Degrees");
							printf("\n8  PM\t30.5 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30.5 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29.5 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29.5 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28.5 Degrees");
							break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
		        	case 14:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t30 Degrees");
							printf("\n7  AM\t30.5 Degrees");
							printf("\n8  AM\t30 Degrees");
							printf("\n9  AM\t31.5 Degrees");
							printf("\n10 AM\t30.5 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t31.5 Degrees");
							printf("\n1  PM\t32 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t32 Degrees");
							printf("\n3  PM\t32.5 Degrees");
							printf("\n4  PM\t33 Degrees");
							printf("\n5  PM\t32.5 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t31 Degrees");
							printf("\n8  PM\t30.5 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30.5 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29.5 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29.5 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28.5 Degrees");
							break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
					case 15:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t30 Degrees");
							printf("\n7  AM\t30 Degrees");
							printf("\n8  AM\t30.5 Degrees");
							printf("\n9  AM\t31 Degrees");
							printf("\n10 AM\t31.5 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t31 Degrees");
							printf("\n1  PM\t32 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t32.5 Degrees");
							printf("\n3  PM\t34 Degrees");
							printf("\n4  PM\t34.5 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t31.5 Degrees");
							printf("\n8  PM\t31 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29.5 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t30 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28.5 Degrees");
							break;		 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
		            case 16:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t30 Degrees");
							printf("\n7  AM\t30 Degrees");
							printf("\n8  AM\t30.5 Degrees");
							printf("\n9  AM\t31 Degrees");
							printf("\n10 AM\t31.5 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t31 Degrees");
							printf("\n1  PM\t32 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t32.5 Degrees");
							printf("\n3  PM\t34 Degrees");
							printf("\n4  PM\t34.5 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t31.5 Degrees");
							printf("\n8  PM\t31 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29.5 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t30 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28.5 Degrees");
							break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
		        	case 17:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t30 Degrees");
							printf("\n7  AM\t30 Degrees");
							printf("\n8  AM\t30.5 Degrees");
							printf("\n9  AM\t31 Degrees");
							printf("\n10 AM\t31.5 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t31 Degrees");
							printf("\n1  PM\t32 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t32.5 Degrees");
							printf("\n3  PM\t34 Degrees");
							printf("\n4  PM\t34.5 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t31.5 Degrees");
							printf("\n8  PM\t31 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29.5 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t30 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28.5 Degrees");
							break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
					case 18:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t30 Degrees");
							printf("\n7  AM\t30 Degrees");
							printf("\n8  AM\t30.5 Degrees");
							printf("\n9  AM\t31 Degrees");
							printf("\n10 AM\t31.5 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t31 Degrees");
							printf("\n1  PM\t32 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t32.5 Degrees");
							printf("\n3  PM\t34 Degrees");
							printf("\n4  PM\t34.5 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t31.5 Degrees");
							printf("\n8  PM\t31 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29.5 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t30 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28.5 Degrees");
							break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
					case 19:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t30 Degrees");
							printf("\n7  AM\t30 Degrees");
							printf("\n8  AM\t30.5 Degrees");
							printf("\n9  AM\t31 Degrees");
							printf("\n10 AM\t31.5 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t31 Degrees");
							printf("\n1  PM\t32 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t32.5 Degrees");
							printf("\n3  PM\t34 Degrees");
							printf("\n4  PM\t34.5 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t31.5 Degrees");
							printf("\n8  PM\t31 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29.5 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t30 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28.5 Degrees");
							break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
		        	case 20:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t30 Degrees");
							printf("\n7  AM\t30.5 Degrees");
							printf("\n8  AM\t30 Degrees");
							printf("\n9  AM\t31.5 Degrees");
							printf("\n10 AM\t30.5 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t31.5 Degrees");
							printf("\n1  PM\t32 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t32 Degrees");
							printf("\n3  PM\t32.5 Degrees");
							printf("\n4  PM\t33 Degrees");
							printf("\n5  PM\t32.5 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t31 Degrees");
							printf("\n8  PM\t30.5 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30.5 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29.5 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29.5 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28.5 Degrees");
							break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
					case 21:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t30 Degrees");
							printf("\n7  AM\t30.5 Degrees");
							printf("\n8  AM\t30 Degrees");
							printf("\n9  AM\t31.5 Degrees");
							printf("\n10 AM\t30.5 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t31.5 Degrees");
							printf("\n1  PM\t32 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t32 Degrees");
							printf("\n3  PM\t32.5 Degrees");
							printf("\n4  PM\t33 Degrees");
							printf("\n5  PM\t32.5 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t31 Degrees");
							printf("\n8  PM\t30.5 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30.5 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29.5 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29.5 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28.5 Degrees");
							break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
		            case 22:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t30 Degrees");
							printf("\n7  AM\t30.5 Degrees");
							printf("\n8  AM\t30 Degrees");
							printf("\n9  AM\t31.5 Degrees");
							printf("\n10 AM\t30.5 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t31.5 Degrees");
							printf("\n1  PM\t32 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t32 Degrees");
							printf("\n3  PM\t32.5 Degrees");
							printf("\n4  PM\t33 Degrees");
							printf("\n5  PM\t32.5 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t31 Degrees");
							printf("\n8  PM\t30.5 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30.5 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29.5 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29.5 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28.5 Degrees");
							break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
		        	case 23:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t30 Degrees");
							printf("\n7  AM\t30.5 Degrees");
							printf("\n8  AM\t30 Degrees");
							printf("\n9  AM\t31.5 Degrees");
							printf("\n10 AM\t30.5 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t31.5 Degrees");
							printf("\n1  PM\t32 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t32 Degrees");
							printf("\n3  PM\t32.5 Degrees");
							printf("\n4  PM\t33 Degrees");
							printf("\n5  PM\t32.5 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t31 Degrees");
							printf("\n8  PM\t30.5 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30.5 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29.5 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29.5 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28.5 Degrees");
							break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
					case 24:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t30 Degrees");
							printf("\n7  AM\t30.5 Degrees");
							printf("\n8  AM\t30 Degrees");
							printf("\n9  AM\t31.5 Degrees");
							printf("\n10 AM\t30.5 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t31.5 Degrees");
							printf("\n1  PM\t32 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t32 Degrees");
							printf("\n3  PM\t32.5 Degrees");
							printf("\n4  PM\t33 Degrees");
							printf("\n5  PM\t32.5 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t31 Degrees");
							printf("\n8  PM\t30.5 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30.5 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29.5 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29.5 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28.5 Degrees");
							break;		 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
					case 25:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t30 Degrees");
							printf("\n7  AM\t30.5 Degrees");
							printf("\n8  AM\t30 Degrees");
							printf("\n9  AM\t31.5 Degrees");
							printf("\n10 AM\t30.5 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t31.5 Degrees");
							printf("\n1  PM\t32 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t32 Degrees");
							printf("\n3  PM\t32.5 Degrees");
							printf("\n4  PM\t33 Degrees");
							printf("\n5  PM\t32.5 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t31 Degrees");
							printf("\n8  PM\t30.5 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30.5 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29.5 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29.5 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28.5 Degrees");
							break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
		        	case 26:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t30 Degrees");
							printf("\n7  AM\t30 Degrees");
							printf("\n8  AM\t30.5 Degrees");
							printf("\n9  AM\t30 Degrees");
							printf("\n10 AM\t31 Degrees");
							printf("\n11 AM\t30.5 Degrees");
							printf("\n12 PM\t31 Degrees");
							printf("\n1  PM\t31.5 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t32 Degrees");
							printf("\n3  PM\t33 Degrees");
							printf("\n4  PM\t33 Degrees");
							printf("\n5  PM\t31.5 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t31 Degrees");
							printf("\n8  PM\t30 Degrees");
							printf("\n9  PM\t30.5 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29.5 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29.5 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28.5 Degrees");
							printf("\n5  AM\t28 Degrees");
							break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
					case 27:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment) {
						
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t30 Degrees");
							printf("\n7  AM\t30 Degrees");
							printf("\n8  AM\t30.5 Degrees");
							printf("\n9  AM\t30 Degrees");
							printf("\n10 AM\t31 Degrees");
							printf("\n11 AM\t30.5 Degrees");
							printf("\n12 PM\t31 Degrees");
							printf("\n1  PM\t31.5 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t32 Degrees");
							printf("\n3  PM\t33 Degrees");
							printf("\n4  PM\t33 Degrees");
							printf("\n5  PM\t31.5 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t31 Degrees");
							printf("\n8  PM\t30 Degrees");
							printf("\n9  PM\t30.5 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29.5 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29.5 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28.5 Degrees");
							printf("\n5  AM\t28 Degrees");
							break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
		            case 28:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment) {
						
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t30 Degrees");
							printf("\n7  AM\t30 Degrees");
							printf("\n8  AM\t30.5 Degrees");
							printf("\n9  AM\t30 Degrees");
							printf("\n10 AM\t31 Degrees");
							printf("\n11 AM\t30.5 Degrees");
							printf("\n12 PM\t31 Degrees");
							printf("\n1  PM\t31.5 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t32 Degrees");
							printf("\n3  PM\t33 Degrees");
							printf("\n4  PM\t33 Degrees");
							printf("\n5  PM\t31.5 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t31 Degrees");
							printf("\n8  PM\t30 Degrees");
							printf("\n9  PM\t30.5 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29.5 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29.5 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28.5 Degrees");
							printf("\n5  AM\t28 Degrees");
							break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
		        	case 29:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t30 Degrees");
							printf("\n7  AM\t30.5 Degrees");
							printf("\n8  AM\t30 Degrees");
							printf("\n9  AM\t31.5 Degrees");
							printf("\n10 AM\t30.5 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t31.5 Degrees");
							printf("\n1  PM\t32 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t32 Degrees");
							printf("\n3  PM\t32.5 Degrees");
							printf("\n4  PM\t33 Degrees");
							printf("\n5  PM\t32.5 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t31 Degrees");
							printf("\n8  PM\t30.5 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30.5 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29.5 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29.5 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28.5 Degrees");
							break;	 	     
							}
						    printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;
					case 30:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment) {
					case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t30 Degrees");
							printf("\n7  AM\t30.5 Degrees");
							printf("\n8  AM\t30 Degrees");
							printf("\n9  AM\t31.5 Degrees");
							printf("\n10 AM\t30.5 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t31.5 Degrees");
							printf("\n1  PM\t32 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t32 Degrees");
							printf("\n3  PM\t32.5 Degrees");
							printf("\n4  PM\t33 Degrees");
							printf("\n5  PM\t32.5 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t31 Degrees");
							printf("\n8  PM\t30.5 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30.5 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29.5 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29.5 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28.5 Degrees");
							break;	 	     
							}
							printf("\nSea temperature\t24 Celsius\nHumidity\t54 percent\nWindspeed\t12.2 kph");
		        		    break;        	    	   	   
				}
			    break;
		case 7: printf("\nEnter the day of the month.\n(enter the number that coincides with the day)");
		        printf("\nSun\tMon\tTue\tWed\tThu\tFri\tSat");
		        printf("\n   \t   \t   \t   \t   \t1  \t2\n3  \t4  \t5  \t6  \t7  \t8  \t9\n10 \t11 \t12 \t13 \t14 \t15 \t16\n17 \t18 \t19 \t20 \t21 \t22 \t23\n24 \t25 \t26 \t27 \t28 \t29 \t30\n31");
		        printf("\nEnter here:");   scanf("\n%d",&day);
		        printf("\n(Caution): Prediction of rain and dust storms");
		        switch(day) {
				case 1:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t29.8 Degrees");
							printf("\n7  AM\t30 Degrees");
							printf("\n8  AM\t29 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t29 Degrees");
							printf("\n11 AM\t30 Degrees");
							printf("\n12 PM\t30 Degrees");
							printf("\n1  PM\t32 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t32 Degrees");
							printf("\n3  PM\t32.5 Degrees");
							printf("\n4  PM\t33 Degrees");
							printf("\n5  PM\t32.5 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t30 Degrees");
							printf("\n8  PM\t30.5 Degrees");
							printf("\n9  PM\t29.5 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t29 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t28 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t27 Degrees");
							printf("\n5  AM\t29 Degrees");
							break;
					}
					printf("\nSea temperature\t29.1 Celsius\nHumidity\t74 percent\nWindspeed\t15.8 kph");
					break;
				case 2:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t28 Degrees");
							printf("\n7  AM\t29 Degrees");
							printf("\n8  AM\t29 Degrees");
							printf("\n9  AM\t30 Degrees");
							printf("\n10 AM\t32 Degrees");
							printf("\n11 AM\t32 Degrees");
							printf("\n12 PM\t34 Degrees");
							printf("\n1  PM\t36 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t36 Degrees");
							printf("\n3  PM\t35.5 Degrees");
							printf("\n4  PM\t35 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t31 Degrees");
							printf("\n8  PM\t31 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t29.5 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t28.5 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28 Degrees");
							break;
					}
					printf("\nSea temperature\t29.1 Celsius\nHumidity\t74 percent\nWindspeed\t15.8 kph");
					break;
				case 3:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t29 Degrees");
							printf("\n7  AM\t29 Degrees");
							printf("\n8  AM\t29.5 Degrees");
							printf("\n9  AM\t30 Degrees");
							printf("\n10 AM\t30 Degrees");
							printf("\n11 AM\t30.5 Degrees");
							printf("\n12 PM\t31 Degrees");
							printf("\n1  PM\t31.5 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t32 Degrees");
							printf("\n3  PM\t33 Degrees");
							printf("\n4  PM\t33 Degrees");
							printf("\n5  PM\t32 Degrees");
							printf("\n6  PM\t31 Degrees");
							printf("\n7  PM\t31 Degrees");
							printf("\n8  PM\t30 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t28 Degrees");
							printf("\n2  AM\t28.5 Degrees");
							printf("\n3  AM\t28 Degrees");
							printf("\n4  AM\t27 Degrees");
							printf("\n5  AM\t28 Degrees");
							break;
					}
					printf("\nSea temperature\t30 Celsius\nHumidity\t74 percent\nWindspeed\t15.8 kph");
					break;
				case 4:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t29 Degrees");
							printf("\n7  AM\t29 Degrees");
							printf("\n8  AM\t29.5 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t30 Degrees");
							printf("\n11 AM\t30 Degrees");
							printf("\n12 PM\t30.5 Degrees");
							printf("\n1  PM\t31 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t31.5 Degrees");
							printf("\n3  PM\t32 Degrees");
							printf("\n4  PM\t34 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t31 Degrees");
							printf("\n8  PM\t30 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t29 Degrees");
							printf("\n11 PM\t29.5 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t28 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t27 Degrees");
							printf("\n4  AM\t28.5 Degrees");
							printf("\n5  AM\t28 Degrees");
							break;
					}
					printf("\nSea temperature\t29.4 Celsius\nHumidity\t76.2 percent\nWindspeed\t16.4 kph");
					break;
				case 5:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t30 Degrees");
							printf("\n7  AM\t29 Degrees");
							printf("\n8  AM\t29.5 Degrees");
							printf("\n9  AM\t30 Degrees");
							printf("\n10 AM\t31 Degrees");
							printf("\n11 AM\t30.5 Degrees");
							printf("\n12 PM\t29 Degrees");
							printf("\n1  PM\t30.5 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t31 Degrees");
							printf("\n3  PM\t32 Degrees");
							printf("\n4  PM\t32.5 Degrees");
							printf("\n5  PM\t31 Degrees");
							printf("\n6  PM\t30.5 Degrees");
							printf("\n7  PM\t30 Degrees");
							printf("\n8  PM\t30.5 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29.5 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t27 Degrees");
							break;
					}
					printf("\nSea temperature\t29.1 Celsius\nHumidity\t74 percent\nWindspeed\t15.8 kph");
					break;
				case 6:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t30 Degrees");
							printf("\n7  AM\t31 Degrees");
							printf("\n8  AM\t30.5 Degrees");
							printf("\n9  AM\t30.5 Degrees");
							printf("\n10 AM\t31 Degrees");
							printf("\n11 AM\t32 Degrees");
							printf("\n12 PM\t32 Degrees");
							printf("\n1  PM\t32.5 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t33 Degrees");
							printf("\n3  PM\t33.5 Degrees");
							printf("\n4  PM\t35 Degrees");
							printf("\n5  PM\t34 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t31 Degrees");
							printf("\n8  PM\t30 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29.5 Degrees");
							printf("\n1  AM\t28 Degrees");
							printf("\n2  AM\t28.5 Degrees");
							printf("\n3  AM\t28 Degrees");
							printf("\n4  AM\t27 Degrees");
							printf("\n5  AM\t27 Degrees");
							break;
					}
					printf("\nSea temperature\t29.1 Celsius\nHumidity\t74 percent\nWindspeed\t15 kph");
					break;
				case 7:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t29 Degrees");
							printf("\n7  AM\t29 Degrees");
							printf("\n8  AM\t29.5 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t30.5 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t32.5 Degrees");
							printf("\n1  PM\t33 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t34 Degrees");
							printf("\n3  PM\t35.5 Degrees");
							printf("\n4  PM\t34 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t32.5 Degrees");
							printf("\n7  PM\t32 Degrees");
							printf("\n8  PM\t31 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29.5 Degrees");
							printf("\n1  AM\t28.5 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t28 Degrees");
							printf("\n4  AM\t27 Degrees");
							printf("\n5  AM\t27.5 Degrees");
							break;
					}
					printf("\nSea temperature\t29 Celsius\nHumidity\t74.5 percent\nWindspeed\t15.8 kph");
					break;
				case 8:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t30 Degrees");
							printf("\n7  AM\t31 Degrees");
							printf("\n8  AM\t30.5 Degrees");
							printf("\n9  AM\t30.5 Degrees");
							printf("\n10 AM\t31 Degrees");
							printf("\n11 AM\t32 Degrees");
							printf("\n12 PM\t32 Degrees");
							printf("\n1  PM\t32.5 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t33 Degrees");
							printf("\n3  PM\t33.5 Degrees");
							printf("\n4  PM\t35 Degrees");
							printf("\n5  PM\t34 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t31 Degrees");
							printf("\n8  PM\t30 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29.5 Degrees");
							printf("\n1  AM\t28 Degrees");
							printf("\n2  AM\t28.5 Degrees");
							printf("\n3  AM\t28 Degrees");
							printf("\n4  AM\t27 Degrees");
							printf("\n5  AM\t27 Degrees");
							break;
					
					}
					printf("\nSea temperature\t29.1 Celsius\nHumidity\t74 percent\nWindspeed\t15.8 kph");
					break;
				case 9:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t29 Degrees");
							printf("\n7  AM\t29 Degrees");
							printf("\n8  AM\t29.5 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t30.5 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t32.5 Degrees");
							printf("\n1  PM\t33 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t34 Degrees");
							printf("\n3  PM\t35.5 Degrees");
							printf("\n4  PM\t34 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t32.5 Degrees");
							printf("\n7  PM\t32 Degrees");
							printf("\n8  PM\t31 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29.5 Degrees");
							printf("\n1  AM\t28.5 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t28 Degrees");
							printf("\n4  AM\t27 Degrees");
							printf("\n5  AM\t27.5 Degrees");
							break;
					
					}
					printf("\nSea temperature\t30 Celsius\nHumidity\t74.5 percent\nWindspeed\t15.8 kph");
					break;
				case 10:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t27 Degrees");
							printf("\n7  AM\t28 Degrees");
							printf("\n8  AM\t28.5 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t30.5 Degrees");
							printf("\n11 AM\t32 Degrees");
							printf("\n12 PM\t31 Degrees");
							printf("\n1  PM\t32 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t32.5 Degrees");
							printf("\n3  PM\t33 Degrees");
							printf("\n4  PM\t34 Degrees");
							printf("\n5  PM\t33.5 Degrees");
							printf("\n6  PM\t32 Degrees");
							printf("\n7  PM\t33 Degrees");
							printf("\n8  PM\t33 Degrees");
							printf("\n9  PM\t32 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t32 Degrees");
							printf("\n11 PM\t31.5 Degrees");
							printf("\n12 AM\t32 Degrees");
							printf("\n1  AM\t30 Degrees");
							printf("\n2  AM\t31 Degrees");
							printf("\n3  AM\t30.5 Degrees");
							printf("\n4  AM\t29 Degrees");
							printf("\n5  AM\t29 Degrees");
							break;
					}
					printf("\nSea temperature\t29.1 Celsius\nHumidity\t74.5 percent\nWindspeed\t15.5 kph");
					break;
				case 11:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t29 Degrees");
							printf("\n7  AM\t29 Degrees");
							printf("\n8  AM\t29.5 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t30.5 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t32.5 Degrees");
							printf("\n1  PM\t33 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t34 Degrees");
							printf("\n3  PM\t35.5 Degrees");
							printf("\n4  PM\t34 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t32.5 Degrees");
							printf("\n7  PM\t32 Degrees");
							printf("\n8  PM\t31 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29.5 Degrees");
							printf("\n1  AM\t28.5 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t28 Degrees");
							printf("\n4  AM\t27 Degrees");
							printf("\n5  AM\t27.5 Degrees");
							break;
					
					}
					printf("\nSea temperature\t29 Celsius\nHumidity\t74.5 percent\nWindspeed\t15.5 kph");
					break;
				case 12:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t28 Degrees");
							printf("\n7  AM\t29 Degrees");
							printf("\n8  AM\t29.5 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t30 Degrees");
							printf("\n11 AM\t30.5 Degrees");
							printf("\n12 PM\t30 Degrees");
							printf("\n1  PM\t31 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t31 Degrees");
							printf("\n3  PM\t32 Degrees");
							printf("\n4  PM\t32 Degrees");
							printf("\n5  PM\t31 Degrees");
							printf("\n6  PM\t30.5 Degrees");
							printf("\n7  PM\t30 Degrees");
							printf("\n8  PM\t30 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29.5 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t29.5 Degrees");
							printf("\n2  AM\t29 Degrees");
							printf("\n3  AM\t28 Degrees");
							printf("\n4  AM\t28.5 Degrees");
							printf("\n5  AM\t28 Degrees");
							break;
					}
					printf("\nSea temperature\t30 Celsius\nHumidity\t75 percent\nWindspeed\t16 kph");
					break;
				case 13:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t29 Degrees");
							printf("\n7  AM\t29 Degrees");
							printf("\n8  AM\t29.5 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t30.5 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t32.5 Degrees");
							printf("\n1  PM\t33 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t34 Degrees");
							printf("\n3  PM\t35.5 Degrees");
							printf("\n4  PM\t34 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t32.5 Degrees");
							printf("\n7  PM\t32 Degrees");
							printf("\n8  PM\t31 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29.5 Degrees");
							printf("\n1  AM\t28.5 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t28 Degrees");
							printf("\n4  AM\t27 Degrees");
							printf("\n5  AM\t27.5 Degrees");
							break;
					
					}
					printf("\nSea temperature\t29.5 Celsius\nHumidity\t74.5 percent\nWindspeed\t15 kph");
					break;
				case 14:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t28 Degrees");
							printf("\n7  AM\t28.5 Degrees");
							printf("\n8  AM\t29 Degrees");
							printf("\n9  AM\t29.5 Degrees");
							printf("\n10 AM\t29 Degrees");
							printf("\n11 AM\t30 Degrees");
							printf("\n12 PM\t30.5 Degrees");
							printf("\n1  PM\t35 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t36 Degrees");
							printf("\n3  PM\t33 Degrees");
							printf("\n4  PM\t34 Degrees");
							printf("\n5  PM\t35 Degrees");
							printf("\n6  PM\t34 Degrees");
							printf("\n7  PM\t34.5 Degrees");
							printf("\n8  PM\t33 Degrees");
							printf("\n9  PM\t32 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t32 Degrees");
							printf("\n11 PM\t31 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29.5 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28.5 Degrees");
							printf("\n5  AM\t28 Degrees");
							break;
					}
					printf("\nSea temperature\t29 Celsius\nHumidity\t75 percent\nWindspeed\t15 kph");
					break;
				case 15:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t29 Degrees");
							printf("\n7  AM\t29 Degrees");
							printf("\n8  AM\t29.5 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t30.5 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t32.5 Degrees");
							printf("\n1  PM\t33 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t34 Degrees");
							printf("\n3  PM\t35.5 Degrees");
							printf("\n4  PM\t34 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t32.5 Degrees");
							printf("\n7  PM\t32 Degrees");
							printf("\n8  PM\t31 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29.5 Degrees");
							printf("\n1  AM\t28.5 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t28 Degrees");
							printf("\n4  AM\t27 Degrees");
							printf("\n5  AM\t27.5 Degrees");
							break;
					
					}
					printf("\nSea temperature\t29 Celsius\nHumidity\t76 percent\nWindspeed\t16.8 kph");
					break;
				case 16:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t28 Degrees");
							printf("\n7  AM\t28 Degrees");
							printf("\n8  AM\t29 Degrees");
							printf("\n9  AM\t30 Degrees");
							printf("\n10 AM\t30.5 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t30.5 Degrees");
							printf("\n1  PM\t32 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t33 Degrees");
							printf("\n3  PM\t34 Degrees");
							printf("\n4  PM\t34.5 Degrees");
							printf("\n5  PM\t35 Degrees");
							printf("\n6  PM\t35.5 Degrees");
							printf("\n7  PM\t34 Degrees");
							printf("\n8  PM\t34 Degrees");
							printf("\n9  PM\t33 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t32 Degrees");
							printf("\n11 PM\t31 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t29.5 Degrees");
							printf("\n2  AM\t29 Degrees");
							printf("\n3  AM\t28 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t27 Degrees");
							break;
					}
					printf("\nSea temperature\t29.1 Celsius\nHumidity\t74 percent\nWindspeed\t15.8 kph");
					break;
				case 17:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t29 Degrees");
							printf("\n7  AM\t29 Degrees");
							printf("\n8  AM\t29.5 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t30.5 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t32.5 Degrees");
							printf("\n1  PM\t33 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t34 Degrees");
							printf("\n3  PM\t35.5 Degrees");
							printf("\n4  PM\t34 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t32.5 Degrees");
							printf("\n7  PM\t32 Degrees");
							printf("\n8  PM\t31 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29.5 Degrees");
							printf("\n1  AM\t28.5 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t28 Degrees");
							printf("\n4  AM\t27 Degrees");
							printf("\n5  AM\t27.5 Degrees");
							break;
					
					}
					printf("\nSea temperature\t29.1 Celsius\nHumidity\t74 percent\nWindspeed\t15.8 kph");
					break;
				case 18:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t28 Degrees");
							printf("\n7  AM\t28 Degrees");
							printf("\n8  AM\t29.5 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t29.5 Degrees");
							printf("\n11 AM\t30 Degrees");
							printf("\n12 PM\t30.5 Degrees");
							printf("\n1  PM\t31 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t33 Degrees");
							printf("\n3  PM\t34 Degrees");
							printf("\n4  PM\t35 Degrees");
							printf("\n5  PM\t35.5 Degrees");
							printf("\n6  PM\t30 Degrees");
							printf("\n7  PM\t33 Degrees");
							printf("\n8  PM\t30 Degrees");
							printf("\n9  PM\t32 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t30 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t28.5 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28 Degrees");
							break;
					}
					printf("\nSea temperature\t30.1 Celsius\nHumidity\t72 percent\nWindspeed\t16.8 kph");
					break;
				case 19:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t29 Degrees");
							printf("\n7  AM\t29 Degrees");
							printf("\n8  AM\t29.5 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t30.5 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t32.5 Degrees");
							printf("\n1  PM\t33 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t34 Degrees");
							printf("\n3  PM\t35.5 Degrees");
							printf("\n4  PM\t34 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t32.5 Degrees");
							printf("\n7  PM\t32 Degrees");
							printf("\n8  PM\t31 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29.5 Degrees");
							printf("\n1  AM\t28.5 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t28 Degrees");
							printf("\n4  AM\t27 Degrees");
							printf("\n5  AM\t27.5 Degrees");
							break;
					
					}
					printf("\nSea temperature\t29.5 Celsius\nHumidity\t76 percent\nWindspeed\t15.8 kph");
					break;
				case 20:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t28 Degrees");
							printf("\n7  AM\t28 Degrees");
							printf("\n8  AM\t29 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t29 Degrees");
							printf("\n11 AM\t30 Degrees");
							printf("\n12 PM\t30 Degrees");
							printf("\n1  PM\t31 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t31 Degrees");
							printf("\n3  PM\t32 Degrees");
							printf("\n4  PM\t32 Degrees");
							printf("\n5  PM\t31 Degrees");
							printf("\n6  PM\t30 Degrees");
							printf("\n7  PM\t30 Degrees");
							printf("\n8  PM\t30 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28 Degrees");
							break;
					}
					printf("\nSea temperature\t31 Celsius\nHumidity\t75 percent\nWindspeed\t15 kph");
					break;
				case 21:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t28 Degrees");
							printf("\n7  AM\t28 Degrees");
							printf("\n8  AM\t29 Degrees");
							printf("\n9  AM\t30 Degrees");
							printf("\n10 AM\t29 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t30 Degrees");
							printf("\n1  PM\t31 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t31 Degrees");
							printf("\n3  PM\t33 Degrees");
							printf("\n4  PM\t33 Degrees");
							printf("\n5  PM\t31 Degrees");
							printf("\n6  PM\t30.5 Degrees");
							printf("\n7  PM\t30 Degrees");
							printf("\n8  PM\t30.5 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29.5 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29 Degrees");
							printf("\n3  AM\t29.5 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28 Degrees");
							break;
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t75 percent\nWindspeed\t16 kph");
					break;
				case 22:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t29 Degrees");
							printf("\n7  AM\t29 Degrees");
							printf("\n8  AM\t29.5 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t30.5 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t32.5 Degrees");
							printf("\n1  PM\t33 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t34 Degrees");
							printf("\n3  PM\t35.5 Degrees");
							printf("\n4  PM\t34 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t32.5 Degrees");
							printf("\n7  PM\t32 Degrees");
							printf("\n8  PM\t31 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29.5 Degrees");
							printf("\n1  AM\t28.5 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t28 Degrees");
							printf("\n4  AM\t27 Degrees");
							printf("\n5  AM\t27.5 Degrees");
							break;
					
					}
					printf("\nSea temperature\t29.1 Celsius\nHumidity\t74 percent\nWindspeed\t15.8 kph");
					break;
				case 23:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t28.5 Degrees");
							printf("\n7  AM\t28 Degrees");
							printf("\n8  AM\t29.5 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t29 Degrees");
							printf("\n11 AM\t32 Degrees");
							printf("\n12 PM\t32 Degrees");
							printf("\n1  PM\t33 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t34 Degrees");
							printf("\n3  PM\t35 Degrees");
							printf("\n4  PM\t35.5 Degrees");
							printf("\n5  PM\t31 Degrees");
							printf("\n6  PM\t30 Degrees");
							printf("\n7  PM\t30.5 Degrees");
							printf("\n8  PM\t30 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29.5 Degrees");
							printf("\n12 AM\t29 Degrees");
							printf("\n1  AM\t28.5 Degrees");
							printf("\n2  AM\t29 Degrees");
							printf("\n3  AM\t29.5 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28 Degrees");
							break;
					}
					printf("\nSea temperature\t29.1 Celsius\nHumidity\t74 percent\nWindspeed\t15.8 kph");
					break;
				case 24:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t29 Degrees");
							printf("\n7  AM\t29 Degrees");
							printf("\n8  AM\t29.5 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t30.5 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t32.5 Degrees");
							printf("\n1  PM\t33 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t34 Degrees");
							printf("\n3  PM\t35.5 Degrees");
							printf("\n4  PM\t34 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t32.5 Degrees");
							printf("\n7  PM\t32 Degrees");
							printf("\n8  PM\t31 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29.5 Degrees");
							printf("\n1  AM\t28.5 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t28 Degrees");
							printf("\n4  AM\t27 Degrees");
							printf("\n5  AM\t27.5 Degrees");
							break;
					
					}
					printf("\nSea temperature\t28 Celsius\nHumidity\t76 percent\nWindspeed\t15 kph");
					break;
				case 25:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t29 Degrees");
							printf("\n7  AM\t29 Degrees");
							printf("\n8  AM\t29.5 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t30.5 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t32.5 Degrees");
							printf("\n1  PM\t33 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t34 Degrees");
							printf("\n3  PM\t35.5 Degrees");
							printf("\n4  PM\t34 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t32.5 Degrees");
							printf("\n7  PM\t32 Degrees");
							printf("\n8  PM\t31 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29.5 Degrees");
							printf("\n1  AM\t28.5 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t28 Degrees");
							printf("\n4  AM\t27 Degrees");
							printf("\n5  AM\t27.5 Degrees");
							break;
					
					}
					printf("\nSea temperature\t29.5 Celsius\nHumidity\t74.2 percent\nWindspeed\t15.5 kph");
					break;
				case 26:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t28 Degrees");
							printf("\n7  AM\t28 Degrees");
							printf("\n8  AM\t28.5 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t29.5 Degrees");
							printf("\n11 AM\t30 Degrees");
							printf("\n12 PM\t30.5 Degrees");
							printf("\n1  PM\t31 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t31.5 Degrees");
							printf("\n3  PM\t32 Degrees");
							printf("\n4  PM\t33 Degrees");
							printf("\n5  PM\t33.5 Degrees");
							printf("\n6  PM\t33 Degrees");
							printf("\n7  PM\t32 Degrees");
							printf("\n8  PM\t32.5 Degrees");
							printf("\n9  PM\t32 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t31 Degrees");
							printf("\n11 PM\t30 Degrees");
							printf("\n12 AM\t29.5 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t29.5 Degrees");
							printf("\n4  AM\t28.5 Degrees");
							printf("\n5  AM\t28 Degrees");
							break;
					}
					printf("\nSea temperature\t29.1 Celsius\nHumidity\t74 percent\nWindspeed\t15.8 kph");
					break;
				case 27:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t29 Degrees");
							printf("\n7  AM\t29 Degrees");
							printf("\n8  AM\t29.5 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t30.5 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t32.5 Degrees");
							printf("\n1  PM\t33 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t34 Degrees");
							printf("\n3  PM\t35.5 Degrees");
							printf("\n4  PM\t34 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t32.5 Degrees");
							printf("\n7  PM\t32 Degrees");
							printf("\n8  PM\t31 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29.5 Degrees");
							printf("\n1  AM\t28.5 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t28 Degrees");
							printf("\n4  AM\t27 Degrees");
							printf("\n5  AM\t27.5 Degrees");
							break;
					
					}
					printf("\nSea temperature\t29.3 Celsius\nHumidity\t74.2 percent\nWindspeed\t15.8 kph");
					break;
				case 28:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t28 Degrees");
							printf("\n7  AM\t28 Degrees");
							printf("\n8  AM\t29.5 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t29 Degrees");
							printf("\n11 AM\t30 Degrees");
							printf("\n12 PM\t30.5 Degrees");
							printf("\n1  PM\t31 5Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t31 Degrees");
							printf("\n3  PM\t32 Degrees");
							printf("\n4  PM\t32.5 Degrees");
							printf("\n5  PM\t31 Degrees");
							printf("\n6  PM\t30.5 Degrees");
							printf("\n7  PM\t30 Degrees");
							printf("\n8  PM\t30 Degrees");
							printf("\n9  PM\t30.5 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29.5 Degrees");
							printf("\n1  AM\t29 Degrees");
							printf("\n2  AM\t29.5 Degrees");
							printf("\n3  AM\t29 Degrees");
							printf("\n4  AM\t28 Degrees");
							printf("\n5  AM\t28 Degrees");
							break;
					}
					printf("\nSea temperature\t29 Celsius\nHumidity\t72 percent\nWindspeed\t13.8 kph");
					break;
				case 29:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t29 Degrees");
							printf("\n7  AM\t29 Degrees");
							printf("\n8  AM\t29.5 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t30.5 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t32.5 Degrees");
							printf("\n1  PM\t33 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t34 Degrees");
							printf("\n3  PM\t35.5 Degrees");
							printf("\n4  PM\t34 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t32.5 Degrees");
							printf("\n7  PM\t32 Degrees");
							printf("\n8  PM\t31 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29.5 Degrees");
							printf("\n1  AM\t28.5 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t28 Degrees");
							printf("\n4  AM\t27 Degrees");
							printf("\n5  AM\t27.5 Degrees");
							break;
					
					}
					printf("\nSea temperature\t32.1 Celsius\nHumidity\t74 percent\nWindspeed\t17.8 kph");
					break;
				case 30:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t29 Degrees");
							printf("\n7  AM\t29 Degrees");
							printf("\n8  AM\t29.5 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t30.5 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t32.5 Degrees");
							printf("\n1  PM\t33 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t34 Degrees");
							printf("\n3  PM\t35.5 Degrees");
							printf("\n4  PM\t34 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t32.5 Degrees");
							printf("\n7  PM\t32 Degrees");
							printf("\n8  PM\t31 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29.5 Degrees");
							printf("\n1  AM\t28.5 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t28 Degrees");
							printf("\n4  AM\t27 Degrees");
							printf("\n5  AM\t27.5 Degrees");
							break;
					
					}
					printf("\nSea temperature\t29.1 Celsius\nHumidity\t74 percent\nWindspeed\t15.8 kph");
					break;
				case 31:
					printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
					scanf("\n%c",&moment);
					switch(moment) {
						case 'M':
							printf("\nTime\tTemperature");
							printf("\n6  AM\t29 Degrees");
							printf("\n7  AM\t29 Degrees");
							printf("\n8  AM\t29.5 Degrees");
							printf("\n9  AM\t29 Degrees");
							printf("\n10 AM\t30.5 Degrees");
							printf("\n11 AM\t31 Degrees");
							printf("\n12 PM\t32.5 Degrees");
							printf("\n1  PM\t33 Degrees");
							break;
						case 'E':
							printf("\nTime\tTemperature");
							printf("\n2  PM\t34 Degrees");
							printf("\n3  PM\t35.5 Degrees");
							printf("\n4  PM\t34 Degrees");
							printf("\n5  PM\t33 Degrees");
							printf("\n6  PM\t32.5 Degrees");
							printf("\n7  PM\t32 Degrees");
							printf("\n8  PM\t31 Degrees");
							printf("\n9  PM\t30 Degrees");
							break;
						case 'N':
							printf("\nTime\tTemperature");
							printf("\n10 PM\t30 Degrees");
							printf("\n11 PM\t29 Degrees");
							printf("\n12 AM\t29.5 Degrees");
							printf("\n1  AM\t28.5 Degrees");
							printf("\n2  AM\t28 Degrees");
							printf("\n3  AM\t28 Degrees");
							printf("\n4  AM\t27 Degrees");
							printf("\n5  AM\t27.5 Degrees");
							break;
					
					}
					printf("\nSea temperature\t29.1 Celsius\nHumidity\t74 percent\nWindspeed\t15.8 kph");
					break;	
			}
			break;
		case 8: printf("\nEnter the day of the month.\n(enter the number that coincides with the day)");
		        printf("\nSun\tMon\tTue\tWed\tThu\tFri\tSat");
		        printf("\n   \t1  \t2  \t3  \t4  \t5  \t6\n7  \t8  \t9  \t10 \t11 \t12 \t13\n14 \t15 \t16 \t17 \t18 \t19 \t20\n21 \t22 \t23 \t24 \t25 \t26 \t27\n28 \t29 \t30 \t31");
		        printf("\nEnter here:");   scanf("\n%d",&day);
		        printf("\n(Caution): Prediction of heavy rain and thunder storms");
		        switch(day)
		        {
		        	case 1: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t28 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t29 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t30 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t30 Degrees");
		        	        	         printf("\n3  PM\t30 Degrees");
		        	        	         printf("\n4  PM\t30 Degrees");
		        	        	         printf("\n5  PM\t30 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t30 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t28 Degrees");
		        	        	         printf("\n3  AM\t28 Degrees");
		        	        	         printf("\n4  AM\t28 Degrees");
		        	        	         printf("\n5  AM\t28 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t28 Celsius\nHumidity\t74 percent\nWindspeed\t14.8 kph");
		        		    break;
					case 2: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t27 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t31 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t31 Degrees");
		        	        	         printf("\n3  PM\t31 Degrees");
		        	        	         printf("\n4  PM\t31 Degrees");
		        	        	         printf("\n5  PM\t31 Degrees");
		        	        	         printf("\n6  PM\t31 Degrees");
		        	        	         printf("\n7  PM\t31 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t28 Degrees");
		        	        	         printf("\n3  AM\t28 Degrees");
		        	        	         printf("\n4  AM\t28 Degrees");
		        	        	         printf("\n5  AM\t27 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t28 Celsius\nHumidity\t74 percent\nWindspeed\t14.8 kph");
		        		    break;
					case 3: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t28 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t32 Degrees");
		        	        	         printf("\n3  PM\t32 Degrees");
		        	        	         printf("\n4  PM\t32 Degrees");
		        	        	         printf("\n5  PM\t31 Degrees");
		        	        	         printf("\n6  PM\t31 Degrees");
		        	        	         printf("\n7  PM\t31 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t29 Degrees");
		        	        	         printf("\n4  AM\t28 Degrees");
		        	        	         printf("\n5  AM\t28 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t28 Celsius\nHumidity\t74 percent\nWindspeed\t14.8 kph");
		        		    break;
		            case 4: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t28 Degrees");
		        	        	         printf("\n7  AM\t29 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t30 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t31 Degrees");
		        	        	         printf("\n12 PM\t31 Degrees");
		        	        	         printf("\n1  PM\t32 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t33 Degrees");
		        	        	         printf("\n3  PM\t34 Degrees");
		        	        	         printf("\n4  PM\t34 Degrees");
		        	        	         printf("\n5  PM\t32 Degrees");
		        	        	         printf("\n6  PM\t32 Degrees");
		        	        	         printf("\n7  PM\t31 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t29 Degrees");
		        	        	         printf("\n4  AM\t28 Degrees");
		        	        	         printf("\n5  AM\t28 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t28 Celsius\nHumidity\t74 percent\nWindspeed\t14.8 kph");
		        		    break;
		        	case 5: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t28 Degrees");
		        	        	         printf("\n7  AM\t29 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t30 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t31 Degrees");
		        	        	         printf("\n12 PM\t31 Degrees");
		        	        	         printf("\n1  PM\t32 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t33 Degrees");
		        	        	         printf("\n3  PM\t34 Degrees");
		        	        	         printf("\n4  PM\t34 Degrees");
		        	        	         printf("\n5  PM\t32 Degrees");
		        	        	         printf("\n6  PM\t32 Degrees");
		        	        	         printf("\n7  PM\t31 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t29 Degrees");
		        	        	         printf("\n4  AM\t28 Degrees");
		        	        	         printf("\n5  AM\t28 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t28 Celsius\nHumidity\t74 percent\nWindspeed\t14.8 kph");
		        		    break;
					case 6: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t29 Degrees");
		        	        	         printf("\n7  AM\t29 Degrees");
		        	        	         printf("\n8  AM\t30 Degrees");
		        	        	         printf("\n9  AM\t30 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t31 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t32 Degrees");
		        	        	         printf("\n3  PM\t33 Degrees");
		        	        	         printf("\n4  PM\t33 Degrees");
		        	        	         printf("\n5  PM\t32 Degrees");
		        	        	         printf("\n6  PM\t32 Degrees");
		        	        	         printf("\n7  PM\t31 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t30 Degrees");
		        	        	         printf("\n12 AM\t30 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t29 Degrees");
		        	        	         printf("\n4  AM\t29 Degrees");
		        	        	         printf("\n5  AM\t29 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t28 Celsius\nHumidity\t74 percent\nWindspeed\t14.8 kph");
		        		    break;
					case 7: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t28 Degrees");
		        	        	         printf("\n7  AM\t29 Degrees");
		        	        	         printf("\n8  AM\t30 Degrees");
		        	        	         printf("\n9  AM\t30 Degrees");
		        	        	         printf("\n10 AM\t31 Degrees");
		        	        	         printf("\n11 AM\t32 Degrees");
		        	        	         printf("\n12 PM\t32 Degrees");
		        	        	         printf("\n1  PM\t33 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t34 Degrees");
		        	        	         printf("\n3  PM\t35 Degrees");
		        	        	         printf("\n4  PM\t33 Degrees");
		        	        	         printf("\n5  PM\t33 Degrees");
		        	        	         printf("\n6  PM\t32 Degrees");
		        	        	         printf("\n7  PM\t32 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t31 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t31 Degrees");
		        	        	         printf("\n11 PM\t30 Degrees");
		        	        	         printf("\n12 AM\t30 Degrees");
		        	        	         printf("\n1  AM\t30 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t29 Degrees");
		        	        	         printf("\n4  AM\t28 Degrees");
		        	        	         printf("\n5  AM\t28 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t28 Celsius\nHumidity\t74 percent\nWindspeed\t14.8 kph");
		        		    break;
		        	case 8: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t27 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t30 Degrees");
		        	        	         printf("\n10 AM\t31 Degrees");
		        	        	         printf("\n11 AM\t32 Degrees");
		        	        	         printf("\n12 PM\t33 Degrees");
		        	        	         printf("\n1  PM\t34 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t35 Degrees");
		        	        	         printf("\n3  PM\t35 Degrees");
		        	        	         printf("\n4  PM\t34 Degrees");
		        	        	         printf("\n5  PM\t33 Degrees");
		        	        	         printf("\n6  PM\t33 Degrees");
		        	        	         printf("\n7  PM\t32 Degrees");
		        	        	         printf("\n8  PM\t32 Degrees");
		        	        	         printf("\n9  PM\t31 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t31 Degrees");
		        	        	         printf("\n11 PM\t30 Degrees");
		        	        	         printf("\n12 AM\t30 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t28 Degrees");
		        	        	         printf("\n4  AM\t28 Degrees");
		        	        	         printf("\n5  AM\t27 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t28 Celsius\nHumidity\t74 percent\nWindspeed\t14.8 kph");
		        		    break;
					case 9: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t30 Degrees");
		        	        	         printf("\n7  AM\t30 Degrees");
		        	        	         printf("\n8  AM\t31 Degrees");
		        	        	         printf("\n9  AM\t32 Degrees");
		        	        	         printf("\n10 AM\t33 Degrees");
		        	        	         printf("\n11 AM\t33 Degrees");
		        	        	         printf("\n12 PM\t34 Degrees");
		        	        	         printf("\n1  PM\t35 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t36 Degrees");
		        	        	         printf("\n3  PM\t37 Degrees");
		        	        	         printf("\n4  PM\t37 Degrees");
		        	        	         printf("\n5  PM\t36 Degrees");
		        	        	         printf("\n6  PM\t35 Degrees");
		        	        	         printf("\n7  PM\t35 Degrees");
		        	        	         printf("\n8  PM\t34 Degrees");
		        	        	         printf("\n9  PM\t34 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t33 Degrees");
		        	        	         printf("\n11 PM\t33 Degrees");
		        	        	         printf("\n12 AM\t32 Degrees");
		        	        	         printf("\n1  AM\t32 Degrees");
		        	        	         printf("\n2  AM\t31 Degrees");
		        	        	         printf("\n3  AM\t31 Degrees");
		        	        	         printf("\n4  AM\t30 Degrees");
		        	        	         printf("\n5  AM\t30 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t28 Celsius\nHumidity\t74 percent\nWindspeed\t14.8 kph");
		        		    break;
		            case 10:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t27 Degrees");
		        	        	         printf("\n7  AM\t27 Degrees");
		        	        	         printf("\n8  AM\t28 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t32 Degrees");
		        	        	         printf("\n12 PM\t34 Degrees");
		        	        	         printf("\n1  PM\t35 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t36 Degrees");
		        	        	         printf("\n3  PM\t36 Degrees");
		        	        	         printf("\n4  PM\t35 Degrees");
		        	        	         printf("\n5  PM\t35 Degrees");
		        	        	         printf("\n6  PM\t34 Degrees");
		        	        	         printf("\n7  PM\t34 Degrees");
		        	        	         printf("\n8  PM\t33 Degrees");
		        	        	         printf("\n9  PM\t32 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t32 Degrees");
		        	        	         printf("\n11 PM\t31 Degrees");
		        	        	         printf("\n12 AM\t31 Degrees");
		        	        	         printf("\n1  AM\t30 Degrees");
		        	        	         printf("\n2  AM\t30 Degrees");
		        	        	         printf("\n3  AM\t28 Degrees");
		        	        	         printf("\n4  AM\t28 Degrees");
		        	        	         printf("\n5  AM\t27 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t28 Celsius\nHumidity\t74 percent\nWindspeed\t14.8 kph");
		        		    break;
		        	case 11:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t28 Degrees");
		        	        	         printf("\n7  AM\t29 Degrees");
		        	        	         printf("\n8  AM\t30 Degrees");
		        	        	         printf("\n9  AM\t30 Degrees");
		        	        	         printf("\n10 AM\t31 Degrees");
		        	        	         printf("\n11 AM\t32 Degrees");
		        	        	         printf("\n12 PM\t34 Degrees");
		        	        	         printf("\n1  PM\t35 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t36 Degrees");
		        	        	         printf("\n3  PM\t36 Degrees");
		        	        	         printf("\n4  PM\t35 Degrees");
		        	        	         printf("\n5  PM\t35 Degrees");
		        	        	         printf("\n6  PM\t34 Degrees");
		        	        	         printf("\n7  PM\t34 Degrees");
		        	        	         printf("\n8  PM\t33 Degrees");
		        	        	         printf("\n9  PM\t32 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t32 Degrees");
		        	        	         printf("\n11 PM\t31 Degrees");
		        	        	         printf("\n12 AM\t31 Degrees");
		        	        	         printf("\n1  AM\t30 Degrees");
		        	        	         printf("\n2  AM\t30 Degrees");
		        	        	         printf("\n3  AM\t29 Degrees");
		        	        	         printf("\n4  AM\t29 Degrees");
		        	        	         printf("\n5  AM\t28 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t28 Celsius\nHumidity\t74 percent\nWindspeed\t14.8 kph");
		        		    break;
					case 12:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t27 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t31 Degrees");
		        	        	         printf("\n12 PM\t31 Degrees");
		        	        	         printf("\n1  PM\t32 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t33 Degrees");
		        	        	         printf("\n3  PM\t34 Degrees");
		        	        	         printf("\n4  PM\t34 Degrees");
		        	        	         printf("\n5  PM\t32 Degrees");
		        	        	         printf("\n6  PM\t32 Degrees");
		        	        	         printf("\n7  PM\t31 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t29 Degrees");
		        	        	         printf("\n4  AM\t28 Degrees");
		        	        	         printf("\n5  AM\t27 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t28 Celsius\nHumidity\t74 percent\nWindspeed\t14.8 kph");
		        		    break;
					case 13:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t26 Degrees");
		        	        	         printf("\n7  AM\t26 Degrees");
		        	        	         printf("\n8  AM\t27 Degrees");
		        	        	         printf("\n9  AM\t27 Degrees");
		        	        	         printf("\n10 AM\t27 Degrees");
		        	        	         printf("\n11 AM\t28 Degrees");
		        	        	         printf("\n12 PM\t28 Degrees");
		        	        	         printf("\n1  PM\t28 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t29 Degrees");
		        	        	         printf("\n3  PM\t29 Degrees");
		        	        	         printf("\n4  PM\t29 Degrees");
		        	        	         printf("\n5  PM\t29 Degrees");
		        	        	         printf("\n6  PM\t29 Degrees");
		        	        	         printf("\n7  PM\t28 Degrees");
		        	        	         printf("\n8  PM\t28 Degrees");
		        	        	         printf("\n9  PM\t28 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t28 Degrees");
		        	        	         printf("\n11 PM\t27 Degrees");
		        	        	         printf("\n12 AM\t27 Degrees");
		        	        	         printf("\n1  AM\t27 Degrees");
		        	        	         printf("\n2  AM\t27 Degrees");
		        	        	         printf("\n3  AM\t27 Degrees");
		        	        	         printf("\n4  AM\t26 Degrees");
		        	        	         printf("\n5  AM\t26 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t28 Celsius\nHumidity\t74 percent\nWindspeed\t14.8 kph");
		        		    break;
		        	case 14:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t26 Degrees");
		        	        	         printf("\n7  AM\t27 Degrees");
		        	        	         printf("\n8  AM\t28 Degrees");
		        	        	         printf("\n9  AM\t28 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t31 Degrees");
		        	        	         printf("\n3  PM\t32 Degrees");
		        	        	         printf("\n4  PM\t32 Degrees");
		        	        	         printf("\n5  PM\t31 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t30 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t29 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t28 Degrees");
		        	        	         printf("\n3  AM\t27 Degrees");
		        	        	         printf("\n4  AM\t27 Degrees");
		        	        	         printf("\n5  AM\t26 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t28 Celsius\nHumidity\t74 percent\nWindspeed\t14.8 kph");
		        		    break;
					case 15:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t28 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t31 Degrees");
		        	        	         printf("\n3  PM\t31 Degrees");
		        	        	         printf("\n4  PM\t31 Degrees");
		        	        	         printf("\n5  PM\t31 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t30 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t29 Degrees");
		        	        	         printf("\n4  AM\t28 Degrees");
		        	        	         printf("\n5  AM\t28 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t28 Celsius\nHumidity\t74 percent\nWindspeed\t14.8 kph");
		        		    break;
		            case 16:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t27 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t32 Degrees");
		        	        	         printf("\n3  PM\t33 Degrees");
		        	        	         printf("\n4  PM\t32 Degrees");
		        	        	         printf("\n5  PM\t31 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t30 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t28 Degrees");
		        	        	         printf("\n4  AM\t28 Degrees");
		        	        	         printf("\n5  AM\t27 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t28 Celsius\nHumidity\t74 percent\nWindspeed\t14.8 kph");
		        		    break;
		        	case 17:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t27 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t28 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t29 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t30 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t30 Degrees");
		        	        	         printf("\n3  PM\t30 Degrees");
		        	        	         printf("\n4  PM\t30 Degrees");
		        	        	         printf("\n5  PM\t30 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t30 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t29 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t28 Degrees");
		        	        	         printf("\n3  AM\t28 Degrees");
		        	        	         printf("\n4  AM\t27 Degrees");
		        	        	         printf("\n5  AM\t27 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t28 Celsius\nHumidity\t74 percent\nWindspeed\t14.8 kph");
		        		    break;
					case 18:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t27 Degrees");
		        	        	         printf("\n7  AM\t27 Degrees");
		        	        	         printf("\n8  AM\t28 Degrees");
		        	        	         printf("\n9  AM\t28 Degrees");
		        	        	         printf("\n10 AM\t28 Degrees");
		        	        	         printf("\n11 AM\t28 Degrees");
		        	        	         printf("\n12 PM\t28 Degrees");
		        	        	         printf("\n1  PM\t28 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t29 Degrees");
		        	        	         printf("\n3  PM\t29 Degrees");
		        	        	         printf("\n4  PM\t29 Degrees");
		        	        	         printf("\n5  PM\t29 Degrees");
		        	        	         printf("\n6  PM\t29 Degrees");
		        	        	         printf("\n7  PM\t29 Degrees");
		        	        	         printf("\n8  PM\t28 Degrees");
		        	        	         printf("\n9  PM\t28 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t28 Degrees");
		        	        	         printf("\n11 PM\t28 Degrees");
		        	        	         printf("\n12 AM\t28 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t28 Degrees");
		        	        	         printf("\n3  AM\t27 Degrees");
		        	        	         printf("\n4  AM\t27 Degrees");
		        	        	         printf("\n5  AM\t27 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t28 Celsius\nHumidity\t74 percent\nWindspeed\t14.8 kph");
		        		    break;
					case 19:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t28 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t30 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t30 Degrees");
		        	        	         printf("\n3  PM\t30 Degrees");
		        	        	         printf("\n4  PM\t30 Degrees");
		        	        	         printf("\n5  PM\t30 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t30 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t29 Degrees");
		        	        	         printf("\n4  AM\t28 Degrees");
		        	        	         printf("\n5  AM\t28 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t28 Celsius\nHumidity\t74 percent\nWindspeed\t14.8 kph");
		        		    break;
		        	case 20:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t27 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t28 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t29 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t31 Degrees");
		        	        	         printf("\n3  PM\t31 Degrees");
		        	        	         printf("\n4  PM\t31 Degrees");
		        	        	         printf("\n5  PM\t31 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t30 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t29 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t28 Degrees");
		        	        	         printf("\n3  AM\t28 Degrees");
		        	        	         printf("\n4  AM\t27 Degrees");
		        	        	         printf("\n5  AM\t27 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t28 Celsius\nHumidity\t74 percent\nWindspeed\t14.8 kph");
		        		    break;
					case 21:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t27 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t31 Degrees");
		        	        	         printf("\n3  PM\t32 Degrees");
		        	        	         printf("\n4  PM\t32 Degrees");
		        	        	         printf("\n5  PM\t31 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t30 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t29 Degrees");
		        	        	         printf("\n4  AM\t28 Degrees");
		        	        	         printf("\n5  AM\t27 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t28 Celsius\nHumidity\t74 percent\nWindspeed\t14.8 kph");
		        		    break;
		            case 22:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t28 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t31 Degrees");
		        	        	         printf("\n3  PM\t32 Degrees");
		        	        	         printf("\n4  PM\t32 Degrees");
		        	        	         printf("\n5  PM\t31 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t30 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t29 Degrees");
		        	        	         printf("\n4  AM\t28 Degrees");
		        	        	         printf("\n5  AM\t28 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t28 Celsius\nHumidity\t74 percent\nWindspeed\t14.8 kph");
		        		    break;
		        	case 23:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t27 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t31 Degrees");
		        	        	         printf("\n3  PM\t31 Degrees");
		        	        	         printf("\n4  PM\t31 Degrees");
		        	        	         printf("\n5  PM\t31 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t30 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t29 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t28 Degrees");
		        	        	         printf("\n3  AM\t28 Degrees");
		        	        	         printf("\n4  AM\t27 Degrees");
		        	        	         printf("\n5  AM\t27 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t28 Celsius\nHumidity\t74 percent\nWindspeed\t14.8 kph");
		        		    break;
					case 24:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t26 Degrees");
		        	        	         printf("\n7  AM\t26 Degrees");
		        	        	         printf("\n8  AM\t26 Degrees");
		        	        	         printf("\n9  AM\t26 Degrees");
		        	        	         printf("\n10 AM\t27 Degrees");
		        	        	         printf("\n11 AM\t27 Degrees");
		        	        	         printf("\n12 PM\t27 Degrees");
		        	        	         printf("\n1  PM\t27 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t28 Degrees");
		        	        	         printf("\n3  PM\t28 Degrees");
		        	        	         printf("\n4  PM\t28 Degrees");
		        	        	         printf("\n5  PM\t28 Degrees");
		        	        	         printf("\n6  PM\t28 Degrees");
		        	        	         printf("\n7  PM\t28 Degrees");
		        	        	         printf("\n8  PM\t28 Degrees");
		        	        	         printf("\n9  PM\t28 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t27 Degrees");
		        	        	         printf("\n11 PM\t27 Degrees");
		        	        	         printf("\n12 AM\t27 Degrees");
		        	        	         printf("\n1  AM\t27 Degrees");
		        	        	         printf("\n2  AM\t27 Degrees");
		        	        	         printf("\n3  AM\t26 Degrees");
		        	        	         printf("\n4  AM\t26 Degrees");
		        	        	         printf("\n5  AM\t26 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t28 Celsius\nHumidity\t74 percent\nWindspeed\t14.8 kph");
		        		    break;
					case 25:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t27 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t28 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t29 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t30 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t30 Degrees");
		        	        	         printf("\n3  PM\t30 Degrees");
		        	        	         printf("\n4  PM\t30 Degrees");
		        	        	         printf("\n5  PM\t30 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t30 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t29 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t28 Degrees");
		        	        	         printf("\n3  AM\t28 Degrees");
		        	        	         printf("\n4  AM\t27 Degrees");
		        	        	         printf("\n5  AM\t27 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t28 Celsius\nHumidity\t74 percent\nWindspeed\t14.8 kph");
		        		    break;
		        	case 26:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t27 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t31 Degrees");
		        	        	         printf("\n3  PM\t31 Degrees");
		        	        	         printf("\n4  PM\t31 Degrees");
		        	        	         printf("\n5  PM\t31 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t30 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t29 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t28 Degrees");
		        	        	         printf("\n3  AM\t28 Degrees");
		        	        	         printf("\n4  AM\t27 Degrees");
		        	        	         printf("\n5  AM\t27 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t28 Celsius\nHumidity\t74 percent\nWindspeed\t14.8 kph");
		        		    break;
					case 27:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t28 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t31 Degrees");
		        	        	         printf("\n3  PM\t31 Degrees");
		        	        	         printf("\n4  PM\t31 Degrees");
		        	        	         printf("\n5  PM\t31 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t30 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t29 Degrees");
		        	        	         printf("\n4  AM\t28 Degrees");
		        	        	         printf("\n5  AM\t28 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t28 Celsius\nHumidity\t74 percent\nWindspeed\t14.8 kph");
		        		    break;
		            case 28:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t27 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t31 Degrees");
		        	        	         printf("\n3  PM\t32 Degrees");
		        	        	         printf("\n4  PM\t32 Degrees");
		        	        	         printf("\n5  PM\t31 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t30 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t28 Degrees");
		        	        	         printf("\n3  AM\t28 Degrees");
		        	        	         printf("\n4  AM\t27 Degrees");
		        	        	         printf("\n5  AM\t27 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t28 Celsius\nHumidity\t74 percent\nWindspeed\t14.8 kph");
		        		    break;
		        	case 29:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t27 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t31 Degrees");
		        	        	         printf("\n3  PM\t32 Degrees");
		        	        	         printf("\n4  PM\t32 Degrees");
		        	        	         printf("\n5  PM\t31 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t30 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t28 Degrees");
		        	        	         printf("\n3  AM\t28 Degrees");
		        	        	         printf("\n4  AM\t27 Degrees");
		        	        	         printf("\n5  AM\t27 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t28 Celsius\nHumidity\t74 percent\nWindspeed\t14.8 kph");
		        		    break;
					case 30:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t25 Degrees");
		        	        	         printf("\n7  AM\t27 Degrees");
		        	        	         printf("\n8  AM\t28 Degrees");
		        	        	         printf("\n9  AM\t28 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t31 Degrees");
		        	        	         printf("\n1  PM\t32 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t33 Degrees");
		        	        	         printf("\n3  PM\t33 Degrees");
		        	        	         printf("\n4  PM\t33 Degrees");
		        	        	         printf("\n5  PM\t32 Degrees");
		        	        	         printf("\n6  PM\t31 Degrees");
		        	        	         printf("\n7  PM\t31 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t29 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t28 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t27 Degrees");
		        	        	         printf("\n3  AM\t27 Degrees");
		        	        	         printf("\n4  AM\t26 Degrees");
		        	        	         printf("\n5  AM\t25 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t28 Celsius\nHumidity\t74 percent\nWindspeed\t14.8 kph");
		        		    break;	
					case 31:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t28 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t31 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t32 Degrees");
		        	        	         printf("\n3  PM\t33 Degrees");
		        	        	         printf("\n4  PM\t33 Degrees");
		        	        	         printf("\n5  PM\t32 Degrees");
		        	        	         printf("\n6  PM\t32 Degrees");
		        	        	         printf("\n7  PM\t31 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t30 Degrees");
		        	        	         printf("\n12 AM\t30 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t29 Degrees");
		        	        	         printf("\n4  AM\t28 Degrees");
		        	        	         printf("\n5  AM\t28 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t28 Celsius\nHumidity\t74 percent\nWindspeed\t14.8 kph");
		        		    break;	   	   	   	   	    	   	   		   	   	   	   	    	   	   
				}
			    break;
		case 9: printf("\nEnter the day of the month.\n(enter the number that coincides with the day)");
		        printf("\nSun\tMon\tTue\tWed\tThu\tFri\tSat");
		        printf("\n   \t   \t   \t   \t1  \t2  \t3\n4  \t5  \t6  \t7  \t8  \t9  \t10\n11 \t12 \t13 \t14 \t15 \t16 \t17\n18 \t19 \t20 \t21 \t22 \t23 \t24\n25 \t26 \t27 \t28 \t29 \t30");
		        printf("\nEnter here:");   scanf("\n%d",&day);
		        switch(day)
		        {
		        	case 1: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t28 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t31 Degrees");
		        	        	         printf("\n3  PM\t32 Degrees");
		        	        	         printf("\n4  PM\t32 Degrees");
		        	        	         printf("\n5  PM\t31 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t30 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t29 Degrees");
		        	        	         printf("\n4  AM\t28 Degrees");
		        	        	         printf("\n5  AM\t28 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t27.8 Celsius\nHumidity\t69 percent\nWindspeed\t12.6 kph");
		        		    break;
					case 2: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t28 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t31 Degrees");
		        	        	         printf("\n12 PM\t32 Degrees");
		        	        	         printf("\n1  PM\t32 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t33 Degrees");
		        	        	         printf("\n3  PM\t34 Degrees");
		        	        	         printf("\n4  PM\t34 Degrees");
		        	        	         printf("\n5  PM\t33 Degrees");
		        	        	         printf("\n6  PM\t32 Degrees");
		        	        	         printf("\n7  PM\t31 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t28 Degrees");
		        	        	         printf("\n3  AM\t28 Degrees");
		        	        	         printf("\n4  AM\t28 Degrees");
		        	        	         printf("\n5  AM\t27 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t27.8 Celsius\nHumidity\t69 percent\nWindspeed\t12.6 kph");
		        		    break;
					case 3: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t27 Degrees");
		        	        	         printf("\n7  AM\t27 Degrees");
		        	        	         printf("\n8  AM\t28 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t32 Degrees");
		        	        	         printf("\n3  PM\t33 Degrees");
		        	        	         printf("\n4  PM\t32 Degrees");
		        	        	         printf("\n5  PM\t32 Degrees");
		        	        	         printf("\n6  PM\t31 Degrees");
		        	        	         printf("\n7  PM\t31 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t29 Degrees");
		        	        	         printf("\n4  AM\t28 Degrees");
		        	        	         printf("\n5  AM\t28 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t27.8 Celsius\nHumidity\t69 percent\nWindspeed\t12.6 kph");
		        		    break;
		            case 4: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t28 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t31 Degrees");
		        	        	         printf("\n3  PM\t32 Degrees");
		        	        	         printf("\n4  PM\t32 Degrees");
		        	        	         printf("\n5  PM\t31 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t30 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t29 Degrees");
		        	        	         printf("\n4  AM\t28 Degrees");
		        	        	         printf("\n5  AM\t28 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t27.8 Celsius\nHumidity\t69 percent\nWindspeed\t12.6 kph");
		        		    break;
		        	case 5: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t28 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t31 Degrees");
		        	        	         printf("\n3  PM\t32 Degrees");
		        	        	         printf("\n4  PM\t32 Degrees");
		        	        	         printf("\n5  PM\t31 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t30 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t29 Degrees");
		        	        	         printf("\n4  AM\t28 Degrees");
		        	        	         printf("\n5  AM\t28 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t27.8 Celsius\nHumidity\t69 percent\nWindspeed\t12.6 kph");
		        		    break;
					case 6: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t28 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t31 Degrees");
		        	        	         printf("\n1  PM\t32 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t33 Degrees");
		        	        	         printf("\n3  PM\t34 Degrees");
		        	        	         printf("\n4  PM\t33 Degrees");
		        	        	         printf("\n5  PM\t32 Degrees");
		        	        	         printf("\n6  PM\t32 Degrees");
		        	        	         printf("\n7  PM\t31 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t28 Degrees");
		        	        	         printf("\n3  AM\t28 Degrees");
		        	        	         printf("\n4  AM\t27 Degrees");
		        	        	         printf("\n5  AM\t27 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t27.8 Celsius\nHumidity\t69 percent\nWindspeed\t12.6 kph");
		        		    break;
					case 7: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t27 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t31 Degrees");
		        	        	         printf("\n12 PM\t32 Degrees");
		        	        	         printf("\n1  PM\t33 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t34 Degrees");
		        	        	         printf("\n3  PM\t35 Degrees");
		        	        	         printf("\n4  PM\t34 Degrees");
		        	        	         printf("\n5  PM\t33 Degrees");
		        	        	         printf("\n6  PM\t32 Degrees");
		        	        	         printf("\n7  PM\t32 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t31 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t28 Degrees");
		        	        	         printf("\n3  AM\t28 Degrees");
		        	        	         printf("\n4  AM\t27 Degrees");
		        	        	         printf("\n5  AM\t27 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.8 Celsius\nHumidity\t69 percent\nWindspeed\t12.6 kph");
		        		    break;
		        	case 8: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t27 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t30 Degrees");
		        	        	         printf("\n10 AM\t31 Degrees");
		        	        	         printf("\n11 AM\t32 Degrees");
		        	        	         printf("\n12 PM\t33 Degrees");
		        	        	         printf("\n1  PM\t34 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t35 Degrees");
		        	        	         printf("\n3  PM\t36 Degrees");
		        	        	         printf("\n4  PM\t34 Degrees");
		        	        	         printf("\n5  PM\t33 Degrees");
		        	        	         printf("\n6  PM\t32 Degrees");
		        	        	         printf("\n7  PM\t31 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t29 Degrees");
		        	        	         printf("\n4  AM\t28 Degrees");
		        	        	         printf("\n5  AM\t28 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.8 Celsius\nHumidity\t69 percent\nWindspeed\t12.6 kph");
		        		    break;
					case 9: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t28 Degrees");
		        	        	         printf("\n7  AM\t29 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t30 Degrees");
		        	        	         printf("\n10 AM\t31 Degrees");
		        	        	         printf("\n11 AM\t32 Degrees");
		        	        	         printf("\n12 PM\t34 Degrees");
		        	        	         printf("\n1  PM\t36 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t38 Degrees");
		        	        	         printf("\n3  PM\t40 Degrees");
		        	        	         printf("\n4  PM\t38 Degrees");
		        	        	         printf("\n5  PM\t36 Degrees");
		        	        	         printf("\n6  PM\t34 Degrees");
		        	        	         printf("\n7  PM\t32 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t28 Degrees");
		        	        	         printf("\n3  AM\t28 Degrees");
		        	        	         printf("\n4  AM\t27 Degrees");
		        	        	         printf("\n5  AM\t27 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.8 Celsius\nHumidity\t69 percent\nWindspeed\t12.6 kph");
		        		    break;
		            case 10:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t27 Degrees");
		        	        	         printf("\n7  AM\t27 Degrees");
		        	        	         printf("\n8  AM\t28 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t32 Degrees");
		        	        	         printf("\n12 PM\t34 Degrees");
		        	        	         printf("\n1  PM\t36 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t38 Degrees");
		        	        	         printf("\n3  PM\t40 Degrees");
		        	        	         printf("\n4  PM\t38 Degrees");
		        	        	         printf("\n5  PM\t36 Degrees");
		        	        	         printf("\n6  PM\t35 Degrees");
		        	        	         printf("\n7  PM\t34 Degrees");
		        	        	         printf("\n8  PM\t33 Degrees");
		        	        	         printf("\n9  PM\t32 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t32 Degrees");
		        	        	         printf("\n11 PM\t31 Degrees");
		        	        	         printf("\n12 AM\t31 Degrees");
		        	        	         printf("\n1  AM\t30 Degrees");
		        	        	         printf("\n2  AM\t30 Degrees");
		        	        	         printf("\n3  AM\t30 Degrees");
		        	        	         printf("\n4  AM\t29 Degrees");
		        	        	         printf("\n5  AM\t29 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.8 Celsius\nHumidity\t69 percent\nWindspeed\t12.6 kph");
		        		    break;
		        	case 11:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t29 Degrees");
		        	        	         printf("\n7  AM\t30 Degrees");
		        	        	         printf("\n8  AM\t30 Degrees");
		        	        	         printf("\n9  AM\t31 Degrees");
		        	        	         printf("\n10 AM\t31 Degrees");
		        	        	         printf("\n11 AM\t32 Degrees");
		        	        	         printf("\n12 PM\t33 Degrees");
		        	        	         printf("\n1  PM\t34 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t35 Degrees");
		        	        	         printf("\n3  PM\t36 Degrees");
		        	        	         printf("\n4  PM\t35 Degrees");
		        	        	         printf("\n5  PM\t35 Degrees");
		        	        	         printf("\n6  PM\t34 Degrees");
		        	        	         printf("\n7  PM\t34 Degrees");
		        	        	         printf("\n8  PM\t33 Degrees");
		        	        	         printf("\n9  PM\t33 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t32 Degrees");
		        	        	         printf("\n11 PM\t32 Degrees");
		        	        	         printf("\n12 AM\t31 Degrees");
		        	        	         printf("\n1  AM\t31 Degrees");
		        	        	         printf("\n2  AM\t30 Degrees");
		        	        	         printf("\n3  AM\t30 Degrees");
		        	        	         printf("\n4  AM\t29 Degrees");
		        	        	         printf("\n5  AM\t29 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.8 Celsius\nHumidity\t69 percent\nWindspeed\t12.6 kph");
		        		    break;
					case 12:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t26 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t30 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t31 Degrees");
		        	        	         printf("\n12 PM\t32 Degrees");
		        	        	         printf("\n1  PM\t33 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t35 Degrees");
		        	        	         printf("\n3  PM\t35 Degrees");
		        	        	         printf("\n4  PM\t34 Degrees");
		        	        	         printf("\n5  PM\t34 Degrees");
		        	        	         printf("\n6  PM\t33 Degrees");
		        	        	         printf("\n7  PM\t33 Degrees");
		        	        	         printf("\n8  PM\t32 Degrees");
		        	        	         printf("\n9  PM\t31 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t31 Degrees");
		        	        	         printf("\n11 PM\t30 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t28 Degrees");
		        	        	         printf("\n3  AM\t28 Degrees");
		        	        	         printf("\n4  AM\t27 Degrees");
		        	        	         printf("\n5  AM\t26 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.8 Celsius\nHumidity\t69 percent\nWindspeed\t12.6 kph");
		        		    break;
					case 13:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t25 Degrees");
		        	        	         printf("\n7  AM\t27 Degrees");
		        	        	         printf("\n8  AM\t28 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t31 Degrees");
		        	        	         printf("\n12 PM\t33 Degrees");
		        	        	         printf("\n1  PM\t33 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t34 Degrees");
		        	        	         printf("\n3  PM\t36 Degrees");
		        	        	         printf("\n4  PM\t34 Degrees");
		        	        	         printf("\n5  PM\t33 Degrees");
		        	        	         printf("\n6  PM\t33 Degrees");
		        	        	         printf("\n7  PM\t32 Degrees");
		        	        	         printf("\n8  PM\t32 Degrees");
		        	        	         printf("\n9  PM\t31 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t31 Degrees");
		        	        	         printf("\n11 PM\t30 Degrees");
		        	        	         printf("\n12 AM\t30 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t28 Degrees");
		        	        	         printf("\n3  AM\t28 Degrees");
		        	        	         printf("\n4  AM\t27 Degrees");
		        	        	         printf("\n5  AM\t25 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.8 Celsius\nHumidity\t69 percent\nWindspeed\t12.6 kph");
		        		    break;
		        	case 14:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t25 Degrees");
		        	        	         printf("\n7  AM\t26 Degrees");
		        	        	         printf("\n8  AM\t28 Degrees");
		        	        	         printf("\n9  AM\t30 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t31 Degrees");
		        	        	         printf("\n12 PM\t32 Degrees");
		        	        	         printf("\n1  PM\t34 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t36 Degrees");
		        	        	         printf("\n3  PM\t37 Degrees");
		        	        	         printf("\n4  PM\t35 Degrees");
		        	        	         printf("\n5  PM\t34 Degrees");
		        	        	         printf("\n6  PM\t33 Degrees");
		        	        	         printf("\n7  PM\t32 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t31 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t30 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t28 Degrees");
		        	        	         printf("\n3  AM\t28 Degrees");
		        	        	         printf("\n4  AM\t26 Degrees");
		        	        	         printf("\n5  AM\t25 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.8 Celsius\nHumidity\t69 percent\nWindspeed\t12.6 kph");
		        		    break;
					case 15:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t27 Degrees");
		        	        	         printf("\n7  AM\t27 Degrees");
		        	        	         printf("\n8  AM\t28 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t32 Degrees");
		        	        	         printf("\n3  PM\t33 Degrees");
		        	        	         printf("\n4  PM\t33 Degrees");
		        	        	         printf("\n5  PM\t32 Degrees");
		        	        	         printf("\n6  PM\t31 Degrees");
		        	        	         printf("\n7  PM\t31 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t29 Degrees");
		        	        	         printf("\n4  AM\t28 Degrees");
		        	        	         printf("\n5  AM\t28 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t27.8 Celsius\nHumidity\t69 percent\nWindspeed\t12.6 kph");
		        		    break;
		            case 16:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t28 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t31 Degrees");
		        	        	         printf("\n3  PM\t32 Degrees");
		        	        	         printf("\n4  PM\t32 Degrees");
		        	        	         printf("\n5  PM\t31 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t30 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t29 Degrees");
		        	        	         printf("\n4  AM\t28 Degrees");
		        	        	         printf("\n5  AM\t28 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.8 Celsius\nHumidity\t69 percent\nWindspeed\t12.6 kph");
		        		    break;
		        	case 17:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t27 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t28 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t31 Degrees");
		        	        	         printf("\n3  PM\t32 Degrees");
		        	        	         printf("\n4  PM\t32 Degrees");
		        	        	         printf("\n5  PM\t31 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t30 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t28 Degrees");
		        	        	         printf("\n3  AM\t28 Degrees");
		        	        	         printf("\n4  AM\t28 Degrees");
		        	        	         printf("\n5  AM\t27 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.8 Celsius\nHumidity\t69 percent\nWindspeed\t12.6 kph");
		        		    break;
					case 18:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t27 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t31 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t33 Degrees");
		        	        	         printf("\n3  PM\t34 Degrees");
		        	        	         printf("\n4  PM\t34 Degrees");
		        	        	         printf("\n5  PM\t33 Degrees");
		        	        	         printf("\n6  PM\t32 Degrees");
		        	        	         printf("\n7  PM\t32 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t30 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t28 Degrees");
		        	        	         printf("\n4  AM\t28 Degrees");
		        	        	         printf("\n5  AM\t27 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.8 Celsius\nHumidity\t69 percent\nWindspeed\t12.6 kph");
		        		    break;
					case 19:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t27 Degrees");
		        	        	         printf("\n7  AM\t27 Degrees");
		        	        	         printf("\n8  AM\t28 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t32 Degrees");
		        	        	         printf("\n3  PM\t33 Degrees");
		        	        	         printf("\n4  PM\t33 Degrees");
		        	        	         printf("\n5  PM\t32 Degrees");
		        	        	         printf("\n6  PM\t31 Degrees");
		        	        	         printf("\n7  PM\t31 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t29 Degrees");
		        	        	         printf("\n4  AM\t28 Degrees");
		        	        	         printf("\n5  AM\t28 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t27.8 Celsius\nHumidity\t69 percent\nWindspeed\t12.6 kph");
		        		    break;
		        	case 20:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t26 Degrees");
		        	        	         printf("\n7  AM\t27 Degrees");
		        	        	         printf("\n8  AM\t28 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t31 Degrees");
		        	        	         printf("\n3  PM\t32 Degrees");
		        	        	         printf("\n4  PM\t32 Degrees");
		        	        	         printf("\n5  PM\t31 Degrees");
		        	        	         printf("\n6  PM\t31 Degrees");
		        	        	         printf("\n7  PM\t30 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t28 Degrees");
		        	        	         printf("\n3  AM\t27 Degrees");
		        	        	         printf("\n4  AM\t27 Degrees");
		        	        	         printf("\n5  AM\t26 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.8 Celsius\nHumidity\t69 percent\nWindspeed\t12.6 kph");
		        		    break;
					case 21:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t26 Degrees");
		        	        	         printf("\n7  AM\t27 Degrees");
		        	        	         printf("\n8  AM\t28 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t31 Degrees");
		        	        	         printf("\n3  PM\t32 Degrees");
		        	        	         printf("\n4  PM\t32 Degrees");
		        	        	         printf("\n5  PM\t31 Degrees");
		        	        	         printf("\n6  PM\t31 Degrees");
		        	        	         printf("\n7  PM\t30 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t28 Degrees");
		        	        	         printf("\n3  AM\t27 Degrees");
		        	        	         printf("\n4  AM\t27 Degrees");
		        	        	         printf("\n5  AM\t26 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.8 Celsius\nHumidity\t69 percent\nWindspeed\t12.6 kph");
		        		    break;
		            case 22:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t26 Degrees");
		        	        	         printf("\n7  AM\t27 Degrees");
		        	        	         printf("\n8  AM\t28 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t31 Degrees");
		        	        	         printf("\n3  PM\t32 Degrees");
		        	        	         printf("\n4  PM\t32 Degrees");
		        	        	         printf("\n5  PM\t31 Degrees");
		        	        	         printf("\n6  PM\t31 Degrees");
		        	        	         printf("\n7  PM\t30 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t28 Degrees");
		        	        	         printf("\n3  AM\t27 Degrees");
		        	        	         printf("\n4  AM\t27 Degrees");
		        	        	         printf("\n5  AM\t26 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.8 Celsius\nHumidity\t69 percent\nWindspeed\t12.6 kph");
		        		    break;
		        	case 23:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t28 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t31 Degrees");
		        	        	         printf("\n3  PM\t31 Degrees");
		        	        	         printf("\n4  PM\t31 Degrees");
		        	        	         printf("\n5  PM\t31 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t30 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t29 Degrees");
		        	        	         printf("\n4  AM\t28 Degrees");
		        	        	         printf("\n5  AM\t28 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.8 Celsius\nHumidity\t69 percent\nWindspeed\t12.6 kph");
		        		    break;
					case 24:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t27 Degrees");
		        	        	         printf("\n7  AM\t27 Degrees");
		        	        	         printf("\n8  AM\t28 Degrees");
		        	        	         printf("\n9  AM\t28 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t29 Degrees");
		        	        	         printf("\n12 PM\t29 Degrees");
		        	        	         printf("\n1  PM\t30 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t30 Degrees");
		        	        	         printf("\n3  PM\t30 Degrees");
		        	        	         printf("\n4  PM\t30 Degrees");
		        	        	         printf("\n5  PM\t30 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t30 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t29 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t28 Degrees");
		        	        	         printf("\n3  AM\t28 Degrees");
		        	        	         printf("\n4  AM\t27 Degrees");
		        	        	         printf("\n5  AM\t27 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t27.8 Celsius\nHumidity\t69 percent\nWindspeed\t12.6 kph");
		        		    break;
					case 25:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t27 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t28 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t32 Degrees");
		        	        	         printf("\n3  PM\t32 Degrees");
		        	        	         printf("\n4  PM\t32 Degrees");
		        	        	         printf("\n5  PM\t31 Degrees");
		        	        	         printf("\n6  PM\t31 Degrees");
		        	        	         printf("\n7  PM\t31 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t28 Degrees");
		        	        	         printf("\n3  AM\t28 Degrees");
		        	        	         printf("\n4  AM\t27 Degrees");
		        	        	         printf("\n5  AM\t27 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.8 Celsius\nHumidity\t69 percent\nWindspeed\t12.6 kph");
		        		    break;
		        	case 26:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t28 Degrees");
		        	        	         printf("\n7  AM\t29 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t30 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t31 Degrees");
		        	        	         printf("\n12 PM\t31 Degrees");
		        	        	         printf("\n1  PM\t32 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t32 Degrees");
		        	        	         printf("\n3  PM\t33 Degrees");
		        	        	         printf("\n4  PM\t33 Degrees");
		        	        	         printf("\n5  PM\t32 Degrees");
		        	        	         printf("\n6  PM\t32 Degrees");
		        	        	         printf("\n7  PM\t32 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t31 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t31 Degrees");
		        	        	         printf("\n11 PM\t30 Degrees");
		        	        	         printf("\n12 AM\t30 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t29 Degrees");
		        	        	         printf("\n4  AM\t28 Degrees");
		        	        	         printf("\n5  AM\t28 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.8 Celsius\nHumidity\t69 percent\nWindspeed\t12.6 kph");
		        		    break;
					case 27:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t23 Degrees");
		        	        	         printf("\n7  AM\t25 Degrees");
		        	        	         printf("\n8  AM\t26 Degrees");
		        	        	         printf("\n9  AM\t27 Degrees");
		        	        	         printf("\n10 AM\t28 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t32 Degrees");
		        	        	         printf("\n3  PM\t33 Degrees");
		        	        	         printf("\n4  PM\t32 Degrees");
		        	        	         printf("\n5  PM\t32 Degrees");
		        	        	         printf("\n6  PM\t31 Degrees");
		        	        	         printf("\n7  PM\t30 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t29 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t29 Degrees");
		        	        	         printf("\n11 PM\t28 Degrees");
		        	        	         printf("\n12 AM\t28 Degrees");
		        	        	         printf("\n1  AM\t27 Degrees");
		        	        	         printf("\n2  AM\t27 Degrees");
		        	        	         printf("\n3  AM\t26 Degrees");
		        	        	         printf("\n4  AM\t24 Degrees");
		        	        	         printf("\n5  AM\t23 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.8 Celsius\nHumidity\t69 percent\nWindspeed\t12.6 kph");
		        		    break;
		            case 28:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t26 Degrees");
		        	        	         printf("\n7  AM\t27 Degrees");
		        	        	         printf("\n8  AM\t28 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t31 Degrees");
		        	        	         printf("\n3  PM\t32 Degrees");
		        	        	         printf("\n4  PM\t32 Degrees");
		        	        	         printf("\n5  PM\t31 Degrees");
		        	        	         printf("\n6  PM\t31 Degrees");
		        	        	         printf("\n7  PM\t30 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t28 Degrees");
		        	        	         printf("\n3  AM\t27 Degrees");
		        	        	         printf("\n4  AM\t27 Degrees");
		        	        	         printf("\n5  AM\t26 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.8 Celsius\nHumidity\t69 percent\nWindspeed\t12.6 kph");
		        		    break;
		        	case 29:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t26 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t31 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t32 Degrees");
		        	        	         printf("\n3  PM\t33 Degrees");
		        	        	         printf("\n4  PM\t33 Degrees");
		        	        	         printf("\n5  PM\t32 Degrees");
		        	        	         printf("\n6  PM\t32 Degrees");
		        	        	         printf("\n7  PM\t31 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t28 Degrees");
		        	        	         printf("\n3  AM\t27 Degrees");
		        	        	         printf("\n4  AM\t27 Degrees");
		        	        	         printf("\n5  AM\t26 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.8 Celsius\nHumidity\t69 percent\nWindspeed\t12.6 kph");
		        		    break;
					case 30:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t26 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t31 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t32 Degrees");
		        	        	         printf("\n3  PM\t33 Degrees");
		        	        	         printf("\n4  PM\t33 Degrees");
		        	        	         printf("\n5  PM\t32 Degrees");
		        	        	         printf("\n6  PM\t32 Degrees");
		        	        	         printf("\n7  PM\t31 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t28 Degrees");
		        	        	         printf("\n3  AM\t27 Degrees");
		        	        	         printf("\n4  AM\t27 Degrees");
		        	        	         printf("\n5  AM\t26 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t27.8 Celsius\nHumidity\t69 percent\nWindspeed\t12.6 kph");
		        		    break;	   	   	   	   	    	   	   
				}
			    break;
		case 10:printf("\nEnter the day of the month.\n(enter the number that coincides with the day)");
		        printf("\nSun\tMon\tTue\tWed\tThu\tFri\tSat");
		        printf("\n   \t   \t   \t   \t   \t   \t1\n2  \t3  \t4  \t5  \t6  \t7  \t8\n9  \t10 \t11 \t12 \t13 \t14 \t15\n16 \t17 \t18 \t19 \t20 \t21 \t22\n23 \t24 \t25 \t26 \t27 \t28 \t29\n30 \t31");
		        printf("\nEnter here:");   scanf("\n%d",&day);
		        switch(day)
		        {
		        	case 1: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t26 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t31 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t32 Degrees");
		        	        	         printf("\n3  PM\t33 Degrees");
		        	        	         printf("\n4  PM\t33 Degrees");
		        	        	         printf("\n5  PM\t32 Degrees");
		        	        	         printf("\n6  PM\t32 Degrees");
		        	        	         printf("\n7  PM\t31 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t28 Degrees");
		        	        	         printf("\n3  AM\t27 Degrees");
		        	        	         printf("\n4  AM\t27 Degrees");
		        	        	         printf("\n5  AM\t26 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t27.9 Celsius\nHumidity\t57 percent\nWindspeed\t7.2 kph");
		        		    break;
					case 2: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t27 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t31 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t33 Degrees");
		        	        	         printf("\n3  PM\t34 Degrees");
		        	        	         printf("\n4  PM\t34 Degrees");
		        	        	         printf("\n5  PM\t33 Degrees");
		        	        	         printf("\n6  PM\t32 Degrees");
		        	        	         printf("\n7  PM\t32 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t30 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t28 Degrees");
		        	        	         printf("\n4  AM\t28 Degrees");
		        	        	         printf("\n5  AM\t27 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t27.9 Celsius\nHumidity\t57 percent\nWindspeed\t7.2 kph");
		        		    break;
					case 3: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t27 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t31 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t33 Degrees");
		        	        	         printf("\n3  PM\t34 Degrees");
		        	        	         printf("\n4  PM\t34 Degrees");
		        	        	         printf("\n5  PM\t33 Degrees");
		        	        	         printf("\n6  PM\t32 Degrees");
		        	        	         printf("\n7  PM\t32 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t30 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t28 Degrees");
		        	        	         printf("\n4  AM\t28 Degrees");
		        	        	         printf("\n5  AM\t27 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t27.9 Celsius\nHumidity\t57 percent\nWindspeed\t7.2 kph");
		        		    break;
		            case 4: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t27 Degrees");
		        	        	         printf("\n7  AM\t27 Degrees");
		        	        	         printf("\n8  AM\t28 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t32 Degrees");
		        	        	         printf("\n3  PM\t33 Degrees");
		        	        	         printf("\n4  PM\t32 Degrees");
		        	        	         printf("\n5  PM\t32 Degrees");
		        	        	         printf("\n6  PM\t31 Degrees");
		        	        	         printf("\n7  PM\t31 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t29 Degrees");
		        	        	         printf("\n3  AM\t29 Degrees");
		        	        	         printf("\n4  AM\t28 Degrees");
		        	        	         printf("\n5  AM\t28 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t27.9 Celsius\nHumidity\t57 percent\nWindspeed\t7.2 kph");
		        		    break;
		        	case 5: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t26 Degrees");
		        	        	         printf("\n7  AM\t27 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t31 Degrees");
		        	        	         printf("\n1  PM\t33 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t34 Degrees");
		        	        	         printf("\n3  PM\t36 Degrees");
		        	        	         printf("\n4  PM\t35 Degrees");
		        	        	         printf("\n5  PM\t34 Degrees");
		        	        	         printf("\n6  PM\t34 Degrees");
		        	        	         printf("\n7  PM\t33 Degrees");
		        	        	         printf("\n8  PM\t32 Degrees");
		        	        	         printf("\n9  PM\t32 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t28 Degrees");
		        	        	         printf("\n3  AM\t27 Degrees");
		        	        	         printf("\n4  AM\t27 Degrees");
		        	        	         printf("\n5  AM\t26 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t27.9 Celsius\nHumidity\t57 percent\nWindspeed\t7.2 kph");
		        		    break;
					case 6: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t26 Degrees");
		        	        	         printf("\n7  AM\t27 Degrees");
		        	        	         printf("\n8  AM\t28 Degrees");
		        	        	         printf("\n9  AM\t30 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t32 Degrees");
		        	        	         printf("\n12 PM\t33 Degrees");
		        	        	         printf("\n1  PM\t35 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t36 Degrees");
		        	        	         printf("\n3  PM\t37 Degrees");
		        	        	         printf("\n4  PM\t36 Degrees");
		        	        	         printf("\n5  PM\t34 Degrees");
		        	        	         printf("\n6  PM\t33 Degrees");
		        	        	         printf("\n7  PM\t32 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t31 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t30 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t28 Degrees");
		        	        	         printf("\n3  AM\t28 Degrees");
		        	        	         printf("\n4  AM\t26 Degrees");
		        	        	         printf("\n5  AM\t26 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t27.9 Celsius\nHumidity\t57 percent\nWindspeed\t7.2 kph");
		        		    break;
					case 7: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t26 Degrees");
		        	        	         printf("\n7  AM\t27 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t30 Degrees");
		        	        	         printf("\n10 AM\t31 Degrees");
		        	        	         printf("\n11 AM\t32 Degrees");
		        	        	         printf("\n12 PM\t34 Degrees");
		        	        	         printf("\n1  PM\t35 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t37 Degrees");
		        	        	         printf("\n3  PM\t38 Degrees");
		        	        	         printf("\n4  PM\t38 Degrees");
		        	        	         printf("\n5  PM\t36 Degrees");
		        	        	         printf("\n6  PM\t33 Degrees");
		        	        	         printf("\n7  PM\t33 Degrees");
		        	        	         printf("\n8  PM\t32 Degrees");
		        	        	         printf("\n9  PM\t31 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t31 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t28 Degrees");
		        	        	         printf("\n3  AM\t27 Degrees");
		        	        	         printf("\n4  AM\t25 Degrees");
		        	        	         printf("\n5  AM\t24 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.9 Celsius\nHumidity\t57 percent\nWindspeed\t7.2 kph");
		        		    break;
		        	case 8: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t29 Degrees");
		        	        	         printf("\n7  AM\t30 Degrees");
		        	        	         printf("\n8  AM\t30 Degrees");
		        	        	         printf("\n9  AM\t31 Degrees");
		        	        	         printf("\n10 AM\t32 Degrees");
		        	        	         printf("\n11 AM\t33 Degrees");
		        	        	         printf("\n12 PM\t34 Degrees");
		        	        	         printf("\n1  PM\t36 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t38 Degrees");
		        	        	         printf("\n3  PM\t39 Degrees");
		        	        	         printf("\n4  PM\t37 Degrees");
		        	        	         printf("\n5  PM\t36 Degrees");
		        	        	         printf("\n6  PM\t35 Degrees");
		        	        	         printf("\n7  PM\t34 Degrees");
		        	        	         printf("\n8  PM\t34 Degrees");
		        	        	         printf("\n9  PM\t33 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t32 Degrees");
		        	        	         printf("\n11 PM\t32 Degrees");
		        	        	         printf("\n12 AM\t31 Degrees");
		        	        	         printf("\n1  AM\t31 Degrees");
		        	        	         printf("\n2  AM\t30 Degrees");
		        	        	         printf("\n3  AM\t30 Degrees");
		        	        	         printf("\n4  AM\t29 Degrees");
		        	        	         printf("\n5  AM\t29 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.9 Celsius\nHumidity\t57 percent\nWindspeed\t7.2 kph");
		        		    break;
					case 9: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t26 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t30 Degrees");
		        	        	         printf("\n10 AM\t32 Degrees");
		        	        	         printf("\n11 AM\t34 Degrees");
		        	        	         printf("\n12 PM\t37 Degrees");
		        	        	         printf("\n1  PM\t36 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t38 Degrees");
		        	        	         printf("\n3  PM\t39 Degrees");
		        	        	         printf("\n4  PM\t36 Degrees");
		        	        	         printf("\n5  PM\t35 Degrees");
		        	        	         printf("\n6  PM\t34 Degrees");
		        	        	         printf("\n7  PM\t32 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t27 Degrees");
		        	        	         printf("\n3  AM\t27 Degrees");
		        	        	         printf("\n4  AM\t25 Degrees");
		        	        	         printf("\n5  AM\t24 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.9 Celsius\nHumidity\t57 percent\nWindspeed\t7.2 kph");
		        		    break;
		            case 10:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t28 Degrees");
		        	        	         printf("\n7  AM\t29 Degrees");
		        	        	         printf("\n8  AM\t30 Degrees");
		        	        	         printf("\n9  AM\t30 Degrees");
		        	        	         printf("\n10 AM\t32 Degrees");
		        	        	         printf("\n11 AM\t33 Degrees");
		        	        	         printf("\n12 PM\t35 Degrees");
		        	        	         printf("\n1  PM\t36 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t37 Degrees");
		        	        	         printf("\n3  PM\t37 Degrees");
		        	        	         printf("\n4  PM\t35 Degrees");
		        	        	         printf("\n5  PM\t35 Degrees");
		        	        	         printf("\n6  PM\t34 Degrees");
		        	        	         printf("\n7  PM\t33 Degrees");
		        	        	         printf("\n8  PM\t33 Degrees");
		        	        	         printf("\n9  PM\t32 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t32 Degrees");
		        	        	         printf("\n11 PM\t31 Degrees");
		        	        	         printf("\n12 AM\t31 Degrees");
		        	        	         printf("\n1  AM\t30 Degrees");
		        	        	         printf("\n2  AM\t30 Degrees");
		        	        	         printf("\n3  AM\t29 Degrees");
		        	        	         printf("\n4  AM\t29 Degrees");
		        	        	         printf("\n5  AM\t28 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.9 Celsius\nHumidity\t57 percent\nWindspeed\t7.2 kph");
		        		    break;
		        	case 11:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t22 Degrees");
		        	        	         printf("\n7  AM\t24 Degrees");
		        	        	         printf("\n8  AM\t25 Degrees");
		        	        	         printf("\n9  AM\t28 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t31 Degrees");
		        	        	         printf("\n12 PM\t33 Degrees");
		        	        	         printf("\n1  PM\t34 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t36 Degrees");
		        	        	         printf("\n3  PM\t37 Degrees");
		        	        	         printf("\n4  PM\t35 Degrees");
		        	        	         printf("\n5  PM\t34 Degrees");
		        	        	         printf("\n6  PM\t33 Degrees");
		        	        	         printf("\n7  PM\t31 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t29 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t27 Degrees");
		        	        	         printf("\n11 PM\t25 Degrees");
		        	        	         printf("\n12 AM\t25 Degrees");
		        	        	         printf("\n1  AM\t24 Degrees");
		        	        	         printf("\n2  AM\t23 Degrees");
		        	        	         printf("\n3  AM\t23 Degrees");
		        	        	         printf("\n4  AM\t21 Degrees");
		        	        	         printf("\n5  AM\t19 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.9 Celsius\nHumidity\t57 percent\nWindspeed\t7.2 kph");
		        		    break;
					case 12:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t23 Degrees");
		        	        	         printf("\n7  AM\t24 Degrees");
		        	        	         printf("\n8  AM\t26 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t31 Degrees");
		        	        	         printf("\n12 PM\t33 Degrees");
		        	        	         printf("\n1  PM\t34 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t36 Degrees");
		        	        	         printf("\n3  PM\t37 Degrees");
		        	        	         printf("\n4  PM\t35 Degrees");
		        	        	         printf("\n5  PM\t34 Degrees");
		        	        	         printf("\n6  PM\t33 Degrees");
		        	        	         printf("\n7  PM\t33 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t29 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t28 Degrees");
		        	        	         printf("\n1  AM\t27 Degrees");
		        	        	         printf("\n2  AM\t26 Degrees");
		        	        	         printf("\n3  AM\t24 Degrees");
		        	        	         printf("\n4  AM\t23 Degrees");
		        	        	         printf("\n5  AM\t21 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.9 Celsius\nHumidity\t57 percent\nWindspeed\t7.2 kph");
		        		    break;
					case 13:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t23 Degrees");
		        	        	         printf("\n7  AM\t25 Degrees");
		        	        	         printf("\n8  AM\t27 Degrees");
		        	        	         printf("\n9  AM\t28 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t31 Degrees");
		        	        	         printf("\n12 PM\t33 Degrees");
		        	        	         printf("\n1  PM\t35 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t36 Degrees");
		        	        	         printf("\n3  PM\t36 Degrees");
		        	        	         printf("\n4  PM\t34 Degrees");
		        	        	         printf("\n5  PM\t33 Degrees");
		        	        	         printf("\n6  PM\t31 Degrees");
		        	        	         printf("\n7  PM\t31 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t29 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t28 Degrees");
		        	        	         printf("\n11 PM\t28 Degrees");
		        	        	         printf("\n12 AM\t27 Degrees");
		        	        	         printf("\n1  AM\t26 Degrees");
		        	        	         printf("\n2  AM\t24 Degrees");
		        	        	         printf("\n3  AM\t23 Degrees");
		        	        	         printf("\n4  AM\t22 Degrees");
		        	        	         printf("\n5  AM\t20 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.9 Celsius\nHumidity\t57 percent\nWindspeed\t7.2 kph");
		        		    break;
		        	case 14:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t22 Degrees");
		        	        	         printf("\n7  AM\t24 Degrees");
		        	        	         printf("\n8  AM\t25 Degrees");
		        	        	         printf("\n9  AM\t28 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t31 Degrees");
		        	        	         printf("\n12 PM\t33 Degrees");
		        	        	         printf("\n1  PM\t34 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t36 Degrees");
		        	        	         printf("\n3  PM\t37 Degrees");
		        	        	         printf("\n4  PM\t35 Degrees");
		        	        	         printf("\n5  PM\t34 Degrees");
		        	        	         printf("\n6  PM\t33 Degrees");
		        	        	         printf("\n7  PM\t31 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t29 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t27 Degrees");
		        	        	         printf("\n11 PM\t25 Degrees");
		        	        	         printf("\n12 AM\t25 Degrees");
		        	        	         printf("\n1  AM\t24 Degrees");
		        	        	         printf("\n2  AM\t23 Degrees");
		        	        	         printf("\n3  AM\t23 Degrees");
		        	        	         printf("\n4  AM\t22 Degrees");
		        	        	         printf("\n5  AM\t20 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.9 Celsius\nHumidity\t57 percent\nWindspeed\t7.2 kph");
		        		    break;
					case 15:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t20 Degrees");
		        	        	         printf("\n7  AM\t23 Degrees");
		        	        	         printf("\n8  AM\t25 Degrees");
		        	        	         printf("\n9  AM\t26 Degrees");
		        	        	         printf("\n10 AM\t28 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t32 Degrees");
		        	        	         printf("\n1  PM\t33 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t36 Degrees");
		        	        	         printf("\n3  PM\t38 Degrees");
		        	        	         printf("\n4  PM\t37 Degrees");
		        	        	         printf("\n5  PM\t35 Degrees");
		        	        	         printf("\n6  PM\t34 Degrees");
		        	        	         printf("\n7  PM\t32 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t28 Degrees");
		        	        	         printf("\n12 AM\t27 Degrees");
		        	        	         printf("\n1  AM\t25 Degrees");
		        	        	         printf("\n2  AM\t24 Degrees");
		        	        	         printf("\n3  AM\t21 Degrees");
		        	        	         printf("\n4  AM\t20 Degrees");
		        	        	         printf("\n5  AM\t18 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t27.9 Celsius\nHumidity\t57 percent\nWindspeed\t7.2 kph");
		        		    break;
		            case 16:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t22 Degrees");
		        	        	         printf("\n7  AM\t23 Degrees");
		        	        	         printf("\n8  AM\t25 Degrees");
		        	        	         printf("\n9  AM\t26 Degrees");
		        	        	         printf("\n10 AM\t28 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t32 Degrees");
		        	        	         printf("\n1  PM\t33 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t36 Degrees");
		        	        	         printf("\n3  PM\t38 Degrees");
		        	        	         printf("\n4  PM\t37 Degrees");
		        	        	         printf("\n5  PM\t35 Degrees");
		        	        	         printf("\n6  PM\t34 Degrees");
		        	        	         printf("\n7  PM\t32 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t28 Degrees");
		        	        	         printf("\n12 AM\t27 Degrees");
		        	        	         printf("\n1  AM\t25 Degrees");
		        	        	         printf("\n2  AM\t24 Degrees");
		        	        	         printf("\n3  AM\t23 Degrees");
		        	        	         printf("\n4  AM\t21 Degrees");
		        	        	         printf("\n5  AM\t20 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.9 Celsius\nHumidity\t57 percent\nWindspeed\t7.2 kph");
		        		    break;
		        	case 17:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t20 Degrees");
		        	        	         printf("\n7  AM\t23 Degrees");
		        	        	         printf("\n8  AM\t25 Degrees");
		        	        	         printf("\n9  AM\t26 Degrees");
		        	        	         printf("\n10 AM\t28 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t32 Degrees");
		        	        	         printf("\n1  PM\t33 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t36 Degrees");
		        	        	         printf("\n3  PM\t38 Degrees");
		        	        	         printf("\n4  PM\t37 Degrees");
		        	        	         printf("\n5  PM\t35 Degrees");
		        	        	         printf("\n6  PM\t34 Degrees");
		        	        	         printf("\n7  PM\t32 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t28 Degrees");
		        	        	         printf("\n12 AM\t27 Degrees");
		        	        	         printf("\n1  AM\t25 Degrees");
		        	        	         printf("\n2  AM\t24 Degrees");
		        	        	         printf("\n3  AM\t21 Degrees");
		        	        	         printf("\n4  AM\t20 Degrees");
		        	        	         printf("\n5  AM\t19 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.9 Celsius\nHumidity\t57 percent\nWindspeed\t7.2 kph");
		        		    break;
					case 18:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t25 Degrees");
		        	        	         printf("\n7  AM\t26 Degrees");
		        	        	         printf("\n8  AM\t28 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t31 Degrees");
		        	        	         printf("\n1  PM\t33 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t36 Degrees");
		        	        	         printf("\n3  PM\t36 Degrees");
		        	        	         printf("\n4  PM\t35 Degrees");
		        	        	         printf("\n5  PM\t34 Degrees");
		        	        	         printf("\n6  PM\t34 Degrees");
		        	        	         printf("\n7  PM\t33 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t31 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t27 Degrees");
		        	        	         printf("\n3  AM\t27 Degrees");
		        	        	         printf("\n4  AM\t26 Degrees");
		        	        	         printf("\n5  AM\t25 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.9 Celsius\nHumidity\t57 percent\nWindspeed\t7.2 kph");
		        		    break;
					case 19:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t25 Degrees");
		        	        	         printf("\n7  AM\t27 Degrees");
		        	        	         printf("\n8  AM\t27 Degrees");
		        	        	         printf("\n9  AM\t28 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t32 Degrees");
		        	        	         printf("\n3  PM\t34 Degrees");
		        	        	         printf("\n4  PM\t33 Degrees");
		        	        	         printf("\n5  PM\t32 Degrees");
		        	        	         printf("\n6  PM\t32 Degrees");
		        	        	         printf("\n7  PM\t31 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t27 Degrees");
		        	        	         printf("\n3  AM\t27 Degrees");
		        	        	         printf("\n4  AM\t25 Degrees");
		        	        	         printf("\n5  AM\t24 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t27.9 Celsius\nHumidity\t57 percent\nWindspeed\t7.2 kph");
		        		    break;
		        	case 20:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t25 Degrees");
		        	        	         printf("\n7  AM\t27 Degrees");
		        	        	         printf("\n8  AM\t27 Degrees");
		        	        	         printf("\n9  AM\t28 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t32 Degrees");
		        	        	         printf("\n3  PM\t34 Degrees");
		        	        	         printf("\n4  PM\t33 Degrees");
		        	        	         printf("\n5  PM\t32 Degrees");
		        	        	         printf("\n6  PM\t32 Degrees");
		        	        	         printf("\n7  PM\t31 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t27 Degrees");
		        	        	         printf("\n3  AM\t27 Degrees");
		        	        	         printf("\n4  AM\t25 Degrees");
		        	        	         printf("\n5  AM\t23 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.9 Celsius\nHumidity\t57 percent\nWindspeed\t7.2 kph");
		        		    break;
					case 21:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t23 Degrees");
		        	        	         printf("\n7  AM\t24 Degrees");
		        	        	         printf("\n8  AM\t26 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t31 Degrees");
		        	        	         printf("\n12 PM\t33 Degrees");
		        	        	         printf("\n1  PM\t34 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t36 Degrees");
		        	        	         printf("\n3  PM\t37 Degrees");
		        	        	         printf("\n4  PM\t35 Degrees");
		        	        	         printf("\n5  PM\t34 Degrees");
		        	        	         printf("\n6  PM\t33 Degrees");
		        	        	         printf("\n7  PM\t33 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t29 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t28 Degrees");
		        	        	         printf("\n1  AM\t27 Degrees");
		        	        	         printf("\n2  AM\t26 Degrees");
		        	        	         printf("\n3  AM\t26 Degrees");
		        	        	         printf("\n4  AM\t24 Degrees");
		        	        	         printf("\n5  AM\t23 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.9 Celsius\nHumidity\t57 percent\nWindspeed\t7.2 kph");
		        		    break;
		            case 22:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t23 Degrees");
		        	        	         printf("\n7  AM\t25 Degrees");
		        	        	         printf("\n8  AM\t26 Degrees");
		        	        	         printf("\n9  AM\t27 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t32 Degrees");
		        	        	         printf("\n1  PM\t33 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t35 Degrees");
		        	        	         printf("\n3  PM\t36 Degrees");
		        	        	         printf("\n4  PM\t34 Degrees");
		        	        	         printf("\n5  PM\t33 Degrees");
		        	        	         printf("\n6  PM\t32 Degrees");
		        	        	         printf("\n7  PM\t32 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t27 Degrees");
		        	        	         printf("\n2  AM\t25 Degrees");
		        	        	         printf("\n3  AM\t25 Degrees");
		        	        	         printf("\n4  AM\t24 Degrees");
		        	        	         printf("\n5  AM\t22 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.9 Celsius\nHumidity\t57 percent\nWindspeed\t7.2 kph");
		        		    break;
		        	case 23:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t23 Degrees");
		        	        	         printf("\n7  AM\t25 Degrees");
		        	        	         printf("\n8  AM\t27 Degrees");
		        	        	         printf("\n9  AM\t28 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t31 Degrees");
		        	        	         printf("\n12 PM\t33 Degrees");
		        	        	         printf("\n1  PM\t35 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t36 Degrees");
		        	        	         printf("\n3  PM\t36 Degrees");
		        	        	         printf("\n4  PM\t34 Degrees");
		        	        	         printf("\n5  PM\t33 Degrees");
		        	        	         printf("\n6  PM\t31 Degrees");
		        	        	         printf("\n7  PM\t31 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t29 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t28 Degrees");
		        	        	         printf("\n11 PM\t28 Degrees");
		        	        	         printf("\n12 AM\t27 Degrees");
		        	        	         printf("\n1  AM\t26 Degrees");
		        	        	         printf("\n2  AM\t24 Degrees");
		        	        	         printf("\n3  AM\t23 Degrees");
		        	        	         printf("\n4  AM\t22 Degrees");
		        	        	         printf("\n5  AM\t20 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.9 Celsius\nHumidity\t57 percent\nWindspeed\t7.2 kph");
		        		    break;
					case 24:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t22 Degrees");
		        	        	         printf("\n7  AM\t25 Degrees");
		        	        	         printf("\n8  AM\t27 Degrees");
		        	        	         printf("\n9  AM\t28 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t32 Degrees");
		        	        	         printf("\n12 PM\t33 Degrees");
		        	        	         printf("\n1  PM\t34 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t34 Degrees");
		        	        	         printf("\n3  PM\t35 Degrees");
		        	        	         printf("\n4  PM\t34 Degrees");
		        	        	         printf("\n5  PM\t33 Degrees");
		        	        	         printf("\n6  PM\t31 Degrees");
		        	        	         printf("\n7  PM\t31 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t29 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t28 Degrees");
		        	        	         printf("\n11 PM\t27 Degrees");
		        	        	         printf("\n12 AM\t26 Degrees");
		        	        	         printf("\n1  AM\t25 Degrees");
		        	        	         printf("\n2  AM\t25 Degrees");
		        	        	         printf("\n3  AM\t24 Degrees");
		        	        	         printf("\n4  AM\t23 Degrees");
		        	        	         printf("\n5  AM\t20 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t27.9 Celsius\nHumidity\t57 percent\nWindspeed\t7.2 kph");
		        		    break;
					case 25:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t25 Degrees");
		        	        	         printf("\n7  AM\t27 Degrees");
		        	        	         printf("\n8  AM\t27 Degrees");
		        	        	         printf("\n9  AM\t28 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t32 Degrees");
		        	        	         printf("\n3  PM\t34 Degrees");
		        	        	         printf("\n4  PM\t33 Degrees");
		        	        	         printf("\n5  PM\t32 Degrees");
		        	        	         printf("\n6  PM\t32 Degrees");
		        	        	         printf("\n7  PM\t31 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t27 Degrees");
		        	        	         printf("\n3  AM\t27 Degrees");
		        	        	         printf("\n4  AM\t25 Degrees");
		        	        	         printf("\n5  AM\t24 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.9 Celsius\nHumidity\t57 percent\nWindspeed\t7.2 kph");
		        		    break;
		        	case 26:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t27 Degrees");
		        	        	         printf("\n7  AM\t27 Degrees");
		        	        	         printf("\n8  AM\t28 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t31 Degrees");
		        	        	         printf("\n12 PM\t31 Degrees");
		        	        	         printf("\n1  PM\t33 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t34 Degrees");
		        	        	         printf("\n3  PM\t35 Degrees");
		        	        	         printf("\n4  PM\t35 Degrees");
		        	        	         printf("\n5  PM\t33 Degrees");
		        	        	         printf("\n6  PM\t32 Degrees");
		        	        	         printf("\n7  PM\t32 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t28 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t27 Degrees");
		        	        	         printf("\n3  AM\t26 Degrees");
		        	        	         printf("\n4  AM\t25 Degrees");
		        	        	         printf("\n5  AM\t25 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.9 Celsius\nHumidity\t57 percent\nWindspeed\t7.2 kph");
		        		    break;
					case 27:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t25 Degrees");
		        	        	         printf("\n7  AM\t26 Degrees");
		        	        	         printf("\n8  AM\t27 Degrees");
		        	        	         printf("\n9  AM\t27 Degrees");
		        	        	         printf("\n10 AM\t28 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t32 Degrees");
		        	        	         printf("\n3  PM\t32 Degrees");
		        	        	         printf("\n4  PM\t32 Degrees");
		        	        	         printf("\n5  PM\t31 Degrees");
		        	        	         printf("\n6  PM\t31 Degrees");
		        	        	         printf("\n7  PM\t31 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t29 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t28 Degrees");
		        	        	         printf("\n1  AM\t27 Degrees");
		        	        	         printf("\n2  AM\t26 Degrees");
		        	        	         printf("\n3  AM\t26 Degrees");
		        	        	         printf("\n4  AM\t25 Degrees");
		        	        	         printf("\n5  AM\t24 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.9 Celsius\nHumidity\t57 percent\nWindspeed\t7.2 kph");
		        		    break;
		            case 28:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t24 Degrees");
		        	        	         printf("\n7  AM\t26 Degrees");
		        	        	         printf("\n8  AM\t26 Degrees");
		        	        	         printf("\n9  AM\t27 Degrees");
		        	        	         printf("\n10 AM\t28 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t33 Degrees");
		        	        	         printf("\n3  PM\t34 Degrees");
		        	        	         printf("\n4  PM\t33 Degrees");
		        	        	         printf("\n5  PM\t32 Degrees");
		        	        	         printf("\n6  PM\t31 Degrees");
		        	        	         printf("\n7  PM\t31 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t29 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t28 Degrees");
		        	        	         printf("\n11 PM\t28 Degrees");
		        	        	         printf("\n12 AM\t27 Degrees");
		        	        	         printf("\n1  AM\t26 Degrees");
		        	        	         printf("\n2  AM\t26 Degrees");
		        	        	         printf("\n3  AM\t25 Degrees");
		        	        	         printf("\n4  AM\t23 Degrees");
		        	        	         printf("\n5  AM\t22 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.9 Celsius\nHumidity\t57 percent\nWindspeed\t7.2 kph");
		        		    break;
		        	case 29:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t27 Degrees");
		        	        	         printf("\n7  AM\t27 Degrees");
		        	        	         printf("\n8  AM\t28 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t31 Degrees");
		        	        	         printf("\n12 PM\t31 Degrees");
		        	        	         printf("\n1  PM\t33 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t34 Degrees");
		        	        	         printf("\n3  PM\t35 Degrees");
		        	        	         printf("\n4  PM\t35 Degrees");
		        	        	         printf("\n5  PM\t33 Degrees");
		        	        	         printf("\n6  PM\t32 Degrees");
		        	        	         printf("\n7  PM\t32 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t28 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t27 Degrees");
		        	        	         printf("\n3  AM\t26 Degrees");
		        	        	         printf("\n4  AM\t25 Degrees");
		        	        	         printf("\n5  AM\t25 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27.9 Celsius\nHumidity\t57 percent\nWindspeed\t7.2 kph");
		        		    break;
					case 30:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t23 Degrees");
		        	        	         printf("\n7  AM\t25 Degrees");
		        	        	         printf("\n8  AM\t27 Degrees");
		        	        	         printf("\n9  AM\t28 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t31 Degrees");
		        	        	         printf("\n12 PM\t33 Degrees");
		        	        	         printf("\n1  PM\t35 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t36 Degrees");
		        	        	         printf("\n3  PM\t36 Degrees");
		        	        	         printf("\n4  PM\t34 Degrees");
		        	        	         printf("\n5  PM\t33 Degrees");
		        	        	         printf("\n6  PM\t31 Degrees");
		        	        	         printf("\n7  PM\t31 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t29 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t28 Degrees");
		        	        	         printf("\n11 PM\t28 Degrees");
		        	        	         printf("\n12 AM\t27 Degrees");
		        	        	         printf("\n1  AM\t26 Degrees");
		        	        	         printf("\n2  AM\t24 Degrees");
		        	        	         printf("\n3  AM\t23 Degrees");
		        	        	         printf("\n4  AM\t22 Degrees");
		        	        	         printf("\n5  AM\t20 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t27.9 Celsius\nHumidity\t57 percent\nWindspeed\t7.2 kph");
		        		    break;
		        	case 31:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t22 Degrees");
		        	        	         printf("\n7  AM\t24 Degrees");
		        	        	         printf("\n8  AM\t25 Degrees");
		        	        	         printf("\n9  AM\t27 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t32 Degrees");
		        	        	         printf("\n1  PM\t33 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t34 Degrees");
		        	        	         printf("\n3  PM\t35 Degrees");
		        	        	         printf("\n4  PM\t35 Degrees");
		        	        	         printf("\n5  PM\t33 Degrees");
		        	        	         printf("\n6  PM\t31 Degrees");
		        	        	         printf("\n7  PM\t31 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t29 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t28 Degrees");
		        	        	         printf("\n11 PM\t28 Degrees");
		        	        	         printf("\n12 AM\t27 Degrees");
		        	        	         printf("\n1  AM\t26 Degrees");
		        	        	         printf("\n2  AM\t24 Degrees");
		        	        	         printf("\n3  AM\t23 Degrees");
		        	        	         printf("\n4  AM\t22 Degrees");
		        	        	         printf("\n5  AM\t21 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t27.9 Celsius\nHumidity\t57 percent\nWindspeed\t7.2 kph");
		        		    break;
			    }
			    break;
		case 11:printf("\nEnter the day of the month.\n(enter the number that coincides with the day)");
		        printf("\nSun\tMon\tTue\tWed\tThu\tFri\tSat");
		        printf("\n   \t   \t1  \t2  \t3  \t4  \t5\n6  \t7  \t8  \t9  \t10 \t11 \t12\n13 \t14 \t15 \t16 \t17 \t18 \t19\n20 \t21 \t22 \t23 \t24 \t25 \t26\n27 \t28 \t29 \t30");
		        printf("\nEnter here:");   scanf("\n%d",&day);
		        switch(day)
		        {
		        	case 1: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t22 Degrees");
		        	        	         printf("\n7  AM\t24 Degrees");
		        	        	         printf("\n8  AM\t25 Degrees");
		        	        	         printf("\n9  AM\t27 Degrees");
		        	        	         printf("\n10 AM\t29 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t32 Degrees");
		        	        	         printf("\n1  PM\t33 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t34 Degrees");
		        	        	         printf("\n3  PM\t35 Degrees");
		        	        	         printf("\n4  PM\t35 Degrees");
		        	        	         printf("\n5  PM\t33 Degrees");
		        	        	         printf("\n6  PM\t31 Degrees");
		        	        	         printf("\n7  PM\t31 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t29 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t28 Degrees");
		        	        	         printf("\n11 PM\t28 Degrees");
		        	        	         printf("\n12 AM\t27 Degrees");
		        	        	         printf("\n1  AM\t26 Degrees");
		        	        	         printf("\n2  AM\t24 Degrees");
		        	        	         printf("\n3  AM\t23 Degrees");
		        	        	         printf("\n4  AM\t22 Degrees");
		        	        	         printf("\n5  AM\t21 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t27 Celsius\nHumidity\t49 percent\nWindspeed\t6.5 kph");
		        		    break;
					case 2: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t26 Degrees");
		        	        	         printf("\n7  AM\t28 Degrees");
		        	        	         printf("\n8  AM\t29 Degrees");
		        	        	         printf("\n9  AM\t30 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t31 Degrees");
		        	        	         printf("\n12 PM\t32 Degrees");
		        	        	         printf("\n1  PM\t33 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t35 Degrees");
		        	        	         printf("\n3  PM\t35 Degrees");
		        	        	         printf("\n4  PM\t34 Degrees");
		        	        	         printf("\n5  PM\t34 Degrees");
		        	        	         printf("\n6  PM\t33 Degrees");
		        	        	         printf("\n7  PM\t33 Degrees");
		        	        	         printf("\n8  PM\t32 Degrees");
		        	        	         printf("\n9  PM\t31 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t31 Degrees");
		        	        	         printf("\n11 PM\t30 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t29 Degrees");
		        	        	         printf("\n2  AM\t28 Degrees");
		        	        	         printf("\n3  AM\t28 Degrees");
		        	        	         printf("\n4  AM\t27 Degrees");
		        	        	         printf("\n5  AM\t26 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t27 Celsius\nHumidity\t49 percent\nWindspeed\t6.5 kph");
		        		    break;
					case 3: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t23 Degrees");
		        	        	         printf("\n7  AM\t26 Degrees");
		        	        	         printf("\n8  AM\t26 Degrees");
		        	        	         printf("\n9  AM\t27 Degrees");
		        	        	         printf("\n10 AM\t28 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t33 Degrees");
		        	        	         printf("\n3  PM\t34 Degrees");
		        	        	         printf("\n4  PM\t33 Degrees");
		        	        	         printf("\n5  PM\t32 Degrees");
		        	        	         printf("\n6  PM\t31 Degrees");
		        	        	         printf("\n7  PM\t31 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t29 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t28 Degrees");
		        	        	         printf("\n11 PM\t28 Degrees");
		        	        	         printf("\n12 AM\t27 Degrees");
		        	        	         printf("\n1  AM\t25 Degrees");
		        	        	         printf("\n2  AM\t23 Degrees");
		        	        	         printf("\n3  AM\t23 Degrees");
		        	        	         printf("\n4  AM\t22 Degrees");
		        	        	         printf("\n5  AM\t21 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t27 Celsius\nHumidity\t49 percent\nWindspeed\t6.5 kph");
		        		    break;
		            case 4: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t25 Degrees");
		        	        	         printf("\n7  AM\t27 Degrees");
		        	        	         printf("\n8  AM\t28 Degrees");
		        	        	         printf("\n9  AM\t29 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t31 Degrees");
		        	        	         printf("\n12 PM\t31 Degrees");
		        	        	         printf("\n1  PM\t33 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t34 Degrees");
		        	        	         printf("\n3  PM\t35 Degrees");
		        	        	         printf("\n4  PM\t35 Degrees");
		        	        	         printf("\n5  PM\t33 Degrees");
		        	        	         printf("\n6  PM\t32 Degrees");
		        	        	         printf("\n7  PM\t32 Degrees");
		        	        	         printf("\n8  PM\t31 Degrees");
		        	        	         printf("\n9  PM\t30 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t30 Degrees");
		        	        	         printf("\n11 PM\t29 Degrees");
		        	        	         printf("\n12 AM\t28 Degrees");
		        	        	         printf("\n1  AM\t28 Degrees");
		        	        	         printf("\n2  AM\t27 Degrees");
		        	        	         printf("\n3  AM\t26 Degrees");
		        	        	         printf("\n4  AM\t26 Degrees");
		        	        	         printf("\n5  AM\t24 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t27 Celsius\nHumidity\t49 percent\nWindspeed\t6.5 kph");
		        		    break;
		        	case 5: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t23 Degrees");
		        	        	         printf("\n7  AM\t25 Degrees");
		        	        	         printf("\n8  AM\t27 Degrees");
		        	        	         printf("\n9  AM\t28 Degrees");
		        	        	         printf("\n10 AM\t30 Degrees");
		        	        	         printf("\n11 AM\t31 Degrees");
		        	        	         printf("\n12 PM\t33 Degrees");
		        	        	         printf("\n1  PM\t35 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t36 Degrees");
		        	        	         printf("\n3  PM\t36 Degrees");
		        	        	         printf("\n4  PM\t34 Degrees");
		        	        	         printf("\n5  PM\t33 Degrees");
		        	        	         printf("\n6  PM\t31 Degrees");
		        	        	         printf("\n7  PM\t31 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t29 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t28 Degrees");
		        	        	         printf("\n11 PM\t28 Degrees");
		        	        	         printf("\n12 AM\t27 Degrees");
		        	        	         printf("\n1  AM\t26 Degrees");
		        	        	         printf("\n2  AM\t24 Degrees");
		        	        	         printf("\n3  AM\t23 Degrees");
		        	        	         printf("\n4  AM\t21 Degrees");
		        	        	         printf("\n5  AM\t19 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t27 Celsius\nHumidity\t49 percent\nWindspeed\t6.5 kph");
		        		    break;
					case 6: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t23 Degrees");
		        	        	         printf("\n7  AM\t26 Degrees");
		        	        	         printf("\n8  AM\t26 Degrees");
		        	        	         printf("\n9  AM\t27 Degrees");
		        	        	         printf("\n10 AM\t28 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t33 Degrees");
		        	        	         printf("\n3  PM\t34 Degrees");
		        	        	         printf("\n4  PM\t33 Degrees");
		        	        	         printf("\n5  PM\t32 Degrees");
		        	        	         printf("\n6  PM\t31 Degrees");
		        	        	         printf("\n7  PM\t31 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t29 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t28 Degrees");
		        	        	         printf("\n11 PM\t28 Degrees");
		        	        	         printf("\n12 AM\t27 Degrees");
		        	        	         printf("\n1  AM\t25 Degrees");
		        	        	         printf("\n2  AM\t23 Degrees");
		        	        	         printf("\n3  AM\t23 Degrees");
		        	        	         printf("\n4  AM\t22 Degrees");
		        	        	         printf("\n5  AM\t21 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t27 Celsius\nHumidity\t49 percent\nWindspeed\t6.5 kph");
		        		    break;
					case 7: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t25 Degrees");
		        	        	         printf("\n7  AM\t26 Degrees");
		        	        	         printf("\n8  AM\t27 Degrees");
		        	        	         printf("\n9  AM\t27 Degrees");
		        	        	         printf("\n10 AM\t28 Degrees");
		        	        	         printf("\n11 AM\t29 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t30 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t31 Degrees");
		        	        	         printf("\n3  PM\t31 Degrees");
		        	        	         printf("\n4  PM\t31 Degrees");
		        	        	         printf("\n5  PM\t31 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t30 Degrees");
		        	        	         printf("\n8  PM\t29 Degrees");
		        	        	         printf("\n9  PM\t29 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t28 Degrees");
		        	        	         printf("\n11 PM\t28 Degrees");
		        	        	         printf("\n12 AM\t27 Degrees");
		        	        	         printf("\n1  AM\t26 Degrees");
		        	        	         printf("\n2  AM\t26 Degrees");
		        	        	         printf("\n3  AM\t25 Degrees");
		        	        	         printf("\n4  AM\t24 Degrees");
		        	        	         printf("\n5  AM\t24 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27 Celsius\nHumidity\t49 percent\nWindspeed\t6.5 kph");
		        		    break;
		        	case 8: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t21 Degrees");
		        	        	         printf("\n7  AM\t23 Degrees");
		        	        	         printf("\n8  AM\t24 Degrees");
		        	        	         printf("\n9  AM\t26 Degrees");
		        	        	         printf("\n10 AM\t27 Degrees");
		        	        	         printf("\n11 AM\t28 Degrees");
		        	        	         printf("\n12 PM\t28 Degrees");
		        	        	         printf("\n1  PM\t29 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t30 Degrees");
		        	        	         printf("\n3  PM\t31 Degrees");
		        	        	         printf("\n4  PM\t31 Degrees");
		        	        	         printf("\n5  PM\t30 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t29 Degrees");
		        	        	         printf("\n8  PM\t28 Degrees");
		        	        	         printf("\n9  PM\t27 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t27 Degrees");
		        	        	         printf("\n11 PM\t26 Degrees");
		        	        	         printf("\n12 AM\t25 Degrees");
		        	        	         printf("\n1  AM\t24 Degrees");
		        	        	         printf("\n2  AM\t24 Degrees");
		        	        	         printf("\n3  AM\t23 Degrees");
		        	        	         printf("\n4  AM\t22 Degrees");
		        	        	         printf("\n5  AM\t20 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27 Celsius\nHumidity\t49 percent\nWindspeed\t6.5 kph");
		        		    break;
					case 9: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t22 Degrees");
		        	        	         printf("\n7  AM\t24 Degrees");
		        	        	         printf("\n8  AM\t25 Degrees");
		        	        	         printf("\n9  AM\t27 Degrees");
		        	        	         printf("\n10 AM\t27 Degrees");
		        	        	         printf("\n11 AM\t28 Degrees");
		        	        	         printf("\n12 PM\t29 Degrees");
		        	        	         printf("\n1  PM\t30 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t30 Degrees");
		        	        	         printf("\n3  PM\t32 Degrees");
		        	        	         printf("\n4  PM\t32 Degrees");
		        	        	         printf("\n5  PM\t31 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t30 Degrees");
		        	        	         printf("\n8  PM\t29 Degrees");
		        	        	         printf("\n9  PM\t28 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t27 Degrees");
		        	        	         printf("\n11 PM\t26 Degrees");
		        	        	         printf("\n12 AM\t25 Degrees");
		        	        	         printf("\n1  AM\t24 Degrees");
		        	        	         printf("\n2  AM\t23 Degrees");
		        	        	         printf("\n3  AM\t23 Degrees");
		        	        	         printf("\n4  AM\t22 Degrees");
		        	        	         printf("\n5  AM\t21 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27 Celsius\nHumidity\t49 percent\nWindspeed\t6.5 kph");
		        		    break;
		            case 10:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t23 Degrees");
		        	        	         printf("\n7  AM\t26 Degrees");
		        	        	         printf("\n8  AM\t26 Degrees");
		        	        	         printf("\n9  AM\t27 Degrees");
		        	        	         printf("\n10 AM\t28 Degrees");
		        	        	         printf("\n11 AM\t30 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t33 Degrees");
		        	        	         printf("\n3  PM\t34 Degrees");
		        	        	         printf("\n4  PM\t33 Degrees");
		        	        	         printf("\n5  PM\t32 Degrees");
		        	        	         printf("\n6  PM\t31 Degrees");
		        	        	         printf("\n7  PM\t31 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t29 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t28 Degrees");
		        	        	         printf("\n11 PM\t28 Degrees");
		        	        	         printf("\n12 AM\t27 Degrees");
		        	        	         printf("\n1  AM\t25 Degrees");
		        	        	         printf("\n2  AM\t23 Degrees");
		        	        	         printf("\n3  AM\t23 Degrees");
		        	        	         printf("\n4  AM\t22 Degrees");
		        	        	         printf("\n5  AM\t21 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27 Celsius\nHumidity\t49 percent\nWindspeed\t6.5 kph");
		        		    break;
		        	case 11:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t21 Degrees");
		        	        	         printf("\n7  AM\t23 Degrees");
		        	        	         printf("\n8  AM\t24 Degrees");
		        	        	         printf("\n9  AM\t26 Degrees");
		        	        	         printf("\n10 AM\t27 Degrees");
		        	        	         printf("\n11 AM\t28 Degrees");
		        	        	         printf("\n12 PM\t29 Degrees");
		        	        	         printf("\n1  PM\t30 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t32 Degrees");
		        	        	         printf("\n3  PM\t33 Degrees");
		        	        	         printf("\n4  PM\t31 Degrees");
		        	        	         printf("\n5  PM\t30 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t29 Degrees");
		        	        	         printf("\n8  PM\t28 Degrees");
		        	        	         printf("\n9  PM\t27 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t27 Degrees");
		        	        	         printf("\n11 PM\t26 Degrees");
		        	        	         printf("\n12 AM\t25 Degrees");
		        	        	         printf("\n1  AM\t24 Degrees");
		        	        	         printf("\n2  AM\t24 Degrees");
		        	        	         printf("\n3  AM\t23 Degrees");
		        	        	         printf("\n4  AM\t22 Degrees");
		        	        	         printf("\n5  AM\t20 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27 Celsius\nHumidity\t49 percent\nWindspeed\t6.5 kph");
		        		    break;
					case 12:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t21 Degrees");
		        	        	         printf("\n7  AM\t23 Degrees");
		        	        	         printf("\n8  AM\t25 Degrees");
		        	        	         printf("\n9  AM\t26 Degrees");
		        	        	         printf("\n10 AM\t27 Degrees");
		        	        	         printf("\n11 AM\t29 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t31 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t33 Degrees");
		        	        	         printf("\n3  PM\t34 Degrees");
		        	        	         printf("\n4  PM\t33 Degrees");
		        	        	         printf("\n5  PM\t32 Degrees");
		        	        	         printf("\n6  PM\t31 Degrees");
		        	        	         printf("\n7  PM\t31 Degrees");
		        	        	         printf("\n8  PM\t30 Degrees");
		        	        	         printf("\n9  PM\t29 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t28 Degrees");
		        	        	         printf("\n11 PM\t28 Degrees");
		        	        	         printf("\n12 AM\t27 Degrees");
		        	        	         printf("\n1  AM\t25 Degrees");
		        	        	         printf("\n2  AM\t23 Degrees");
		        	        	         printf("\n3  AM\t23 Degrees");
		        	        	         printf("\n4  AM\t22 Degrees");
		        	        	         printf("\n5  AM\t20 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27 Celsius\nHumidity\t49 percent\nWindspeed\t6.5 kph");
		        		    break;
					case 13:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t21 Degrees");
		        	        	         printf("\n7  AM\t23 Degrees");
		        	        	         printf("\n8  AM\t24 Degrees");
		        	        	         printf("\n9  AM\t26 Degrees");
		        	        	         printf("\n10 AM\t27 Degrees");
		        	        	         printf("\n11 AM\t28 Degrees");
		        	        	         printf("\n12 PM\t29 Degrees");
		        	        	         printf("\n1  PM\t30 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t32 Degrees");
		        	        	         printf("\n3  PM\t33 Degrees");
		        	        	         printf("\n4  PM\t31 Degrees");
		        	        	         printf("\n5  PM\t30 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t29 Degrees");
		        	        	         printf("\n8  PM\t28 Degrees");
		        	        	         printf("\n9  PM\t27 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t27 Degrees");
		        	        	         printf("\n11 PM\t26 Degrees");
		        	        	         printf("\n12 AM\t25 Degrees");
		        	        	         printf("\n1  AM\t24 Degrees");
		        	        	         printf("\n2  AM\t24 Degrees");
		        	        	         printf("\n3  AM\t23 Degrees");
		        	        	         printf("\n4  AM\t22 Degrees");
		        	        	         printf("\n5  AM\t20 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27 Celsius\nHumidity\t49 percent\nWindspeed\t6.5 kph");
		        		    break;
		        	case 14:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t24 Degrees");
		        	        	         printf("\n7  AM\t25 Degrees");
		        	        	         printf("\n8  AM\t26 Degrees");
		        	        	         printf("\n9  AM\t27 Degrees");
		        	        	         printf("\n10 AM\t28 Degrees");
		        	        	         printf("\n11 AM\t29 Degrees");
		        	        	         printf("\n12 PM\t30 Degrees");
		        	        	         printf("\n1  PM\t30 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t31 Degrees");
		        	        	         printf("\n3  PM\t31 Degrees");
		        	        	         printf("\n4  PM\t31 Degrees");
		        	        	         printf("\n5  PM\t31 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t30 Degrees");
		        	        	         printf("\n8  PM\t29 Degrees");
		        	        	         printf("\n9  PM\t29 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t28 Degrees");
		        	        	         printf("\n11 PM\t28 Degrees");
		        	        	         printf("\n12 AM\t27 Degrees");
		        	        	         printf("\n1  AM\t26 Degrees");
		        	        	         printf("\n2  AM\t26 Degrees");
		        	        	         printf("\n3  AM\t25 Degrees");
		        	        	         printf("\n4  AM\t24 Degrees");
		        	        	         printf("\n5  AM\t23 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27 Celsius\nHumidity\t49 percent\nWindspeed\t6.5 kph");
		        		    break;
					case 15:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t23 Degrees");
		        	        	         printf("\n7  AM\t24 Degrees");
		        	        	         printf("\n8  AM\t25 Degrees");
		        	        	         printf("\n9  AM\t26 Degrees");
		        	        	         printf("\n10 AM\t27 Degrees");
		        	        	         printf("\n11 AM\t28 Degrees");
		        	        	         printf("\n12 PM\t29 Degrees");
		        	        	         printf("\n1  PM\t30 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t30 Degrees");
		        	        	         printf("\n3  PM\t31 Degrees");
		        	        	         printf("\n4  PM\t31 Degrees");
		        	        	         printf("\n5  PM\t30 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t29 Degrees");
		        	        	         printf("\n8  PM\t29 Degrees");
		        	        	         printf("\n9  PM\t28 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t28 Degrees");
		        	        	         printf("\n11 PM\t27 Degrees");
		        	        	         printf("\n12 AM\t26 Degrees");
		        	        	         printf("\n1  AM\t26 Degrees");
		        	        	         printf("\n2  AM\t25 Degrees");
		        	        	         printf("\n3  AM\t24 Degrees");
		        	        	         printf("\n4  AM\t23 Degrees");
		        	        	         printf("\n5  AM\t22 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t27 Celsius\nHumidity\t49 percent\nWindspeed\t6.5 kph");
		        		    break;
		            case 16:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t20 Degrees");
		        	        	         printf("\n7  AM\t21 Degrees");
		        	        	         printf("\n8  AM\t23 Degrees");
		        	        	         printf("\n9  AM\t24 Degrees");
		        	        	         printf("\n10 AM\t26 Degrees");
		        	        	         printf("\n11 AM\t27 Degrees");
		        	        	         printf("\n12 PM\t28 Degrees");
		        	        	         printf("\n1  PM\t29 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t30 Degrees");
		        	        	         printf("\n3  PM\t31 Degrees");
		        	        	         printf("\n4  PM\t31 Degrees");
		        	        	         printf("\n5  PM\t30 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t29 Degrees");
		        	        	         printf("\n8  PM\t28 Degrees");
		        	        	         printf("\n9  PM\t28 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t27 Degrees");
		        	        	         printf("\n11 PM\t26 Degrees");
		        	        	         printf("\n12 AM\t25 Degrees");
		        	        	         printf("\n1  AM\t24 Degrees");
		        	        	         printf("\n2  AM\t23 Degrees");
		        	        	         printf("\n3  AM\t21 Degrees");
		        	        	         printf("\n4  AM\t20 Degrees");
		        	        	         printf("\n5  AM\t18 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27 Celsius\nHumidity\t49 percent\nWindspeed\t6.5 kph");
		        		    break;
		        	case 17:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t21 Degrees");
		        	        	         printf("\n7  AM\t23 Degrees");
		        	        	         printf("\n8  AM\t24 Degrees");
		        	        	         printf("\n9  AM\t26 Degrees");
		        	        	         printf("\n10 AM\t27 Degrees");
		        	        	         printf("\n11 AM\t28 Degrees");
		        	        	         printf("\n12 PM\t29 Degrees");
		        	        	         printf("\n1  PM\t30 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t32 Degrees");
		        	        	         printf("\n3  PM\t33 Degrees");
		        	        	         printf("\n4  PM\t31 Degrees");
		        	        	         printf("\n5  PM\t30 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t29 Degrees");
		        	        	         printf("\n8  PM\t28 Degrees");
		        	        	         printf("\n9  PM\t27 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t27 Degrees");
		        	        	         printf("\n11 PM\t26 Degrees");
		        	        	         printf("\n12 AM\t25 Degrees");
		        	        	         printf("\n1  AM\t24 Degrees");
		        	        	         printf("\n2  AM\t24 Degrees");
		        	        	         printf("\n3  AM\t23 Degrees");
		        	        	         printf("\n4  AM\t22 Degrees");
		        	        	         printf("\n5  AM\t20 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27 Celsius\nHumidity\t49 percent\nWindspeed\t6.5 kph");
		        		    break;
					case 18:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t20 Degrees");
		        	        	         printf("\n7  AM\t21 Degrees");
		        	        	         printf("\n8  AM\t23 Degrees");
		        	        	         printf("\n9  AM\t24 Degrees");
		        	        	         printf("\n10 AM\t26 Degrees");
		        	        	         printf("\n11 AM\t27 Degrees");
		        	        	         printf("\n12 PM\t28 Degrees");
		        	        	         printf("\n1  PM\t29 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t30 Degrees");
		        	        	         printf("\n3  PM\t32 Degrees");
		        	        	         printf("\n4  PM\t31 Degrees");
		        	        	         printf("\n5  PM\t31 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t29 Degrees");
		        	        	         printf("\n8  PM\t28 Degrees");
		        	        	         printf("\n9  PM\t28 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t27 Degrees");
		        	        	         printf("\n11 PM\t26 Degrees");
		        	        	         printf("\n12 AM\t25 Degrees");
		        	        	         printf("\n1  AM\t24 Degrees");
		        	        	         printf("\n2  AM\t23 Degrees");
		        	        	         printf("\n3  AM\t21 Degrees");
		        	        	         printf("\n4  AM\t20 Degrees");
		        	        	         printf("\n5  AM\t19 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27 Celsius\nHumidity\t49 percent\nWindspeed\t6.5 kph");
		        		    break;
					case 19:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t21 Degrees");
		        	        	         printf("\n7  AM\t23 Degrees");
		        	        	         printf("\n8  AM\t24 Degrees");
		        	        	         printf("\n9  AM\t26 Degrees");
		        	        	         printf("\n10 AM\t27 Degrees");
		        	        	         printf("\n11 AM\t28 Degrees");
		        	        	         printf("\n12 PM\t29 Degrees");
		        	        	         printf("\n1  PM\t30 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t32 Degrees");
		        	        	         printf("\n3  PM\t32 Degrees");
		        	        	         printf("\n4  PM\t31 Degrees");
		        	        	         printf("\n5  PM\t30 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t29 Degrees");
		        	        	         printf("\n8  PM\t28 Degrees");
		        	        	         printf("\n9  PM\t27 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t27 Degrees");
		        	        	         printf("\n11 PM\t26 Degrees");
		        	        	         printf("\n12 AM\t25 Degrees");
		        	        	         printf("\n1  AM\t24 Degrees");
		        	        	         printf("\n2  AM\t24 Degrees");
		        	        	         printf("\n3  AM\t23 Degrees");
		        	        	         printf("\n4  AM\t22 Degrees");
		        	        	         printf("\n5  AM\t20 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t27 Celsius\nHumidity\t49 percent\nWindspeed\t6.5 kph");
		        		    break;
		        	case 20:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t21 Degrees");
		        	        	         printf("\n7  AM\t23 Degrees");
		        	        	         printf("\n8  AM\t24 Degrees");
		        	        	         printf("\n9  AM\t26 Degrees");
		        	        	         printf("\n10 AM\t27 Degrees");
		        	        	         printf("\n11 AM\t28 Degrees");
		        	        	         printf("\n12 PM\t29 Degrees");
		        	        	         printf("\n1  PM\t30 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t32 Degrees");
		        	        	         printf("\n3  PM\t33 Degrees");
		        	        	         printf("\n4  PM\t31 Degrees");
		        	        	         printf("\n5  PM\t30 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t29 Degrees");
		        	        	         printf("\n8  PM\t28 Degrees");
		        	        	         printf("\n9  PM\t27 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t27 Degrees");
		        	        	         printf("\n11 PM\t26 Degrees");
		        	        	         printf("\n12 AM\t25 Degrees");
		        	        	         printf("\n1  AM\t24 Degrees");
		        	        	         printf("\n2  AM\t24 Degrees");
		        	        	         printf("\n3  AM\t23 Degrees");
		        	        	         printf("\n4  AM\t22 Degrees");
		        	        	         printf("\n5  AM\t21 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27 Celsius\nHumidity\t49 percent\nWindspeed\t6.5 kph");
		        		    break;
					case 21:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t18 Degrees");
		        	        	         printf("\n7  AM\t20 Degrees");
		        	        	         printf("\n8  AM\t22 Degrees");
		        	        	         printf("\n9  AM\t23 Degrees");
		        	        	         printf("\n10 AM\t25 Degrees");
		        	        	         printf("\n11 AM\t26 Degrees");
		        	        	         printf("\n12 PM\t28 Degrees");
		        	        	         printf("\n1  PM\t29 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t30 Degrees");
		        	        	         printf("\n3  PM\t31 Degrees");
		        	        	         printf("\n4  PM\t31 Degrees");
		        	        	         printf("\n5  PM\t30 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t29 Degrees");
		        	        	         printf("\n8  PM\t28 Degrees");
		        	        	         printf("\n9  PM\t28 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t27 Degrees");
		        	        	         printf("\n11 PM\t26 Degrees");
		        	        	         printf("\n12 AM\t25 Degrees");
		        	        	         printf("\n1  AM\t23 Degrees");
		        	        	         printf("\n2  AM\t22 Degrees");
		        	        	         printf("\n3  AM\t20 Degrees");
		        	        	         printf("\n4  AM\t19 Degrees");
		        	        	         printf("\n5  AM\t17 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27 Celsius\nHumidity\t49 percent\nWindspeed\t6.5 kph");
		        		    break;
		            case 22:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t21 Degrees");
		        	        	         printf("\n7  AM\t23 Degrees");
		        	        	         printf("\n8  AM\t24 Degrees");
		        	        	         printf("\n9  AM\t26 Degrees");
		        	        	         printf("\n10 AM\t27 Degrees");
		        	        	         printf("\n11 AM\t28 Degrees");
		        	        	         printf("\n12 PM\t29 Degrees");
		        	        	         printf("\n1  PM\t30 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t32 Degrees");
		        	        	         printf("\n3  PM\t32 Degrees");
		        	        	         printf("\n4  PM\t31 Degrees");
		        	        	         printf("\n5  PM\t30 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t29 Degrees");
		        	        	         printf("\n8  PM\t28 Degrees");
		        	        	         printf("\n9  PM\t27 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t27 Degrees");
		        	        	         printf("\n11 PM\t26 Degrees");
		        	        	         printf("\n12 AM\t25 Degrees");
		        	        	         printf("\n1  AM\t24 Degrees");
		        	        	         printf("\n2  AM\t24 Degrees");
		        	        	         printf("\n3  AM\t23 Degrees");
		        	        	         printf("\n4  AM\t22 Degrees");
		        	        	         printf("\n5  AM\t20 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27 Celsius\nHumidity\t49 percent\nWindspeed\t6.5 kph");
		        		    break;
		        	case 23:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t18 Degrees");
		        	        	         printf("\n7  AM\t20 Degrees");
		        	        	         printf("\n8  AM\t22 Degrees");
		        	        	         printf("\n9  AM\t23 Degrees");
		        	        	         printf("\n10 AM\t25 Degrees");
		        	        	         printf("\n11 AM\t26 Degrees");
		        	        	         printf("\n12 PM\t28 Degrees");
		        	        	         printf("\n1  PM\t29 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t30 Degrees");
		        	        	         printf("\n3  PM\t31 Degrees");
		        	        	         printf("\n4  PM\t31 Degrees");
		        	        	         printf("\n5  PM\t30 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t29 Degrees");
		        	        	         printf("\n8  PM\t28 Degrees");
		        	        	         printf("\n9  PM\t28 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t27 Degrees");
		        	        	         printf("\n11 PM\t26 Degrees");
		        	        	         printf("\n12 AM\t25 Degrees");
		        	        	         printf("\n1  AM\t23 Degrees");
		        	        	         printf("\n2  AM\t21 Degrees");
		        	        	         printf("\n3  AM\t19 Degrees");
		        	        	         printf("\n4  AM\t17 Degrees");
		        	        	         printf("\n5  AM\t16 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27 Celsius\nHumidity\t49 percent\nWindspeed\t6.5 kph");
		        		    break;
					case 24:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t18 Degrees");
		        	        	         printf("\n7  AM\t20 Degrees");
		        	        	         printf("\n8  AM\t22 Degrees");
		        	        	         printf("\n9  AM\t23 Degrees");
		        	        	         printf("\n10 AM\t25 Degrees");
		        	        	         printf("\n11 AM\t26 Degrees");
		        	        	         printf("\n12 PM\t28 Degrees");
		        	        	         printf("\n1  PM\t30 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t31 Degrees");
		        	        	         printf("\n3  PM\t32 Degrees");
		        	        	         printf("\n4  PM\t31 Degrees");
		        	        	         printf("\n5  PM\t30 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t29 Degrees");
		        	        	         printf("\n8  PM\t28 Degrees");
		        	        	         printf("\n9  PM\t28 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t27 Degrees");
		        	        	         printf("\n11 PM\t26 Degrees");
		        	        	         printf("\n12 AM\t25 Degrees");
		        	        	         printf("\n1  AM\t23 Degrees");
		        	        	         printf("\n2  AM\t21 Degrees");
		        	        	         printf("\n3  AM\t19 Degrees");
		        	        	         printf("\n4  AM\t17 Degrees");
		        	        	         printf("\n5  AM\t16 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t27 Celsius\nHumidity\t49 percent\nWindspeed\t6.5 kph");
		        		    break;
					case 25:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t16 Degrees");
		        	        	         printf("\n7  AM\t18 Degrees");
		        	        	         printf("\n8  AM\t20 Degrees");
		        	        	         printf("\n9  AM\t22 Degrees");
		        	        	         printf("\n10 AM\t24 Degrees");
		        	        	         printf("\n11 AM\t26 Degrees");
		        	        	         printf("\n12 PM\t28 Degrees");
		        	        	         printf("\n1  PM\t29 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t30 Degrees");
		        	        	         printf("\n3  PM\t30 Degrees");
		        	        	         printf("\n4  PM\t30 Degrees");
		        	        	         printf("\n5  PM\t29 Degrees");
		        	        	         printf("\n6  PM\t28 Degrees");
		        	        	         printf("\n7  PM\t28 Degrees");
		        	        	         printf("\n8  PM\t27 Degrees");
		        	        	         printf("\n9  PM\t26 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t26 Degrees");
		        	        	         printf("\n11 PM\t24 Degrees");
		        	        	         printf("\n12 AM\t23 Degrees");
		        	        	         printf("\n1  AM\t21 Degrees");
		        	        	         printf("\n2  AM\t19 Degrees");
		        	        	         printf("\n3  AM\t18 Degrees");
		        	        	         printf("\n4  AM\t16 Degrees");
		        	        	         printf("\n5  AM\t15 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27 Celsius\nHumidity\t49 percent\nWindspeed\t6.5 kph");
		        		    break;
		        	case 26:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t16 Degrees");
		        	        	         printf("\n7  AM\t18 Degrees");
		        	        	         printf("\n8  AM\t20 Degrees");
		        	        	         printf("\n9  AM\t22 Degrees");
		        	        	         printf("\n10 AM\t24 Degrees");
		        	        	         printf("\n11 AM\t26 Degrees");
		        	        	         printf("\n12 PM\t28 Degrees");
		        	        	         printf("\n1  PM\t29 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t30 Degrees");
		        	        	         printf("\n3  PM\t30 Degrees");
		        	        	         printf("\n4  PM\t30 Degrees");
		        	        	         printf("\n5  PM\t29 Degrees");
		        	        	         printf("\n6  PM\t28 Degrees");
		        	        	         printf("\n7  PM\t28 Degrees");
		        	        	         printf("\n8  PM\t27 Degrees");
		        	        	         printf("\n9  PM\t26 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t26 Degrees");
		        	        	         printf("\n11 PM\t24 Degrees");
		        	        	         printf("\n12 AM\t23 Degrees");
		        	        	         printf("\n1  AM\t21 Degrees");
		        	        	         printf("\n2  AM\t19 Degrees");
		        	        	         printf("\n3  AM\t18 Degrees");
		        	        	         printf("\n4  AM\t16 Degrees");
		        	        	         printf("\n5  AM\t14 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27 Celsius\nHumidity\t49 percent\nWindspeed\t6.5 kph");
		        		    break;
					case 27:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t16 Degrees");
		        	        	         printf("\n7  AM\t18 Degrees");
		        	        	         printf("\n8  AM\t20 Degrees");
		        	        	         printf("\n9  AM\t22 Degrees");
		        	        	         printf("\n10 AM\t24 Degrees");
		        	        	         printf("\n11 AM\t26 Degrees");
		        	        	         printf("\n12 PM\t28 Degrees");
		        	        	         printf("\n1  PM\t29 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t30 Degrees");
		        	        	         printf("\n3  PM\t30 Degrees");
		        	        	         printf("\n4  PM\t30 Degrees");
		        	        	         printf("\n5  PM\t29 Degrees");
		        	        	         printf("\n6  PM\t28 Degrees");
		        	        	         printf("\n7  PM\t28 Degrees");
		        	        	         printf("\n8  PM\t27 Degrees");
		        	        	         printf("\n9  PM\t26 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t26 Degrees");
		        	        	         printf("\n11 PM\t24 Degrees");
		        	        	         printf("\n12 AM\t23 Degrees");
		        	        	         printf("\n1  AM\t21 Degrees");
		        	        	         printf("\n2  AM\t19 Degrees");
		        	        	         printf("\n3  AM\t18 Degrees");
		        	        	         printf("\n4  AM\t17 Degrees");
		        	        	         printf("\n5  AM\t16 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27 Celsius\nHumidity\t49 percent\nWindspeed\t6.5 kph");
		        		    break;
		            case 28:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t16 Degrees");
		        	        	         printf("\n7  AM\t18 Degrees");
		        	        	         printf("\n8  AM\t20 Degrees");
		        	        	         printf("\n9  AM\t22 Degrees");
		        	        	         printf("\n10 AM\t24 Degrees");
		        	        	         printf("\n11 AM\t26 Degrees");
		        	        	         printf("\n12 PM\t28 Degrees");
		        	        	         printf("\n1  PM\t29 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t30 Degrees");
		        	        	         printf("\n3  PM\t30 Degrees");
		        	        	         printf("\n4  PM\t30 Degrees");
		        	        	         printf("\n5  PM\t29 Degrees");
		        	        	         printf("\n6  PM\t28 Degrees");
		        	        	         printf("\n7  PM\t28 Degrees");
		        	        	         printf("\n8  PM\t27 Degrees");
		        	        	         printf("\n9  PM\t26 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t26 Degrees");
		        	        	         printf("\n11 PM\t24 Degrees");
		        	        	         printf("\n12 AM\t23 Degrees");
		        	        	         printf("\n1  AM\t21 Degrees");
		        	        	         printf("\n2  AM\t19 Degrees");
		        	        	         printf("\n3  AM\t18 Degrees");
		        	        	         printf("\n4  AM\t17 Degrees");
		        	        	         printf("\n5  AM\t16 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27 Celsius\nHumidity\t49 percent\nWindspeed\t6.5 kph");
		        		    break;
		        	case 29:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t16 Degrees");
		        	        	         printf("\n7  AM\t18 Degrees");
		        	        	         printf("\n8  AM\t20 Degrees");
		        	        	         printf("\n9  AM\t22 Degrees");
		        	        	         printf("\n10 AM\t24 Degrees");
		        	        	         printf("\n11 AM\t26 Degrees");
		        	        	         printf("\n12 PM\t28 Degrees");
		        	        	         printf("\n1  PM\t29 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t30 Degrees");
		        	        	         printf("\n3  PM\t31 Degrees");
		        	        	         printf("\n4  PM\t30 Degrees");
		        	        	         printf("\n5  PM\t29 Degrees");
		        	        	         printf("\n6  PM\t28 Degrees");
		        	        	         printf("\n7  PM\t28 Degrees");
		        	        	         printf("\n8  PM\t27 Degrees");
		        	        	         printf("\n9  PM\t26 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t26 Degrees");
		        	        	         printf("\n11 PM\t24 Degrees");
		        	        	         printf("\n12 AM\t23 Degrees");
		        	        	         printf("\n1  AM\t21 Degrees");
		        	        	         printf("\n2  AM\t19 Degrees");
		        	        	         printf("\n3  AM\t18 Degrees");
		        	        	         printf("\n4  AM\t16 Degrees");
		        	        	         printf("\n5  AM\t15 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t27 Celsius\nHumidity\t49 percent\nWindspeed\t6.5 kph");
		        		    break;
					case 30:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t13 Degrees");
		        	        	         printf("\n7  AM\t15 Degrees");
		        	        	         printf("\n8  AM\t18 Degrees");
		        	        	         printf("\n9  AM\t21 Degrees");
		        	        	         printf("\n10 AM\t24 Degrees");
		        	        	         printf("\n11 AM\t26 Degrees");
		        	        	         printf("\n12 PM\t27 Degrees");
		        	        	         printf("\n1  PM\t28 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t30 Degrees");
		        	        	         printf("\n3  PM\t31 Degrees");
		        	        	         printf("\n4  PM\t30 Degrees");
		        	        	         printf("\n5  PM\t29 Degrees");
		        	        	         printf("\n6  PM\t28 Degrees");
		        	        	         printf("\n7  PM\t28 Degrees");
		        	        	         printf("\n8  PM\t27 Degrees");
		        	        	         printf("\n9  PM\t26 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t24 Degrees");
		        	        	         printf("\n11 PM\t23 Degrees");
		        	        	         printf("\n12 AM\t21 Degrees");
		        	        	         printf("\n1  AM\t19 Degrees");
		        	        	         printf("\n2  AM\t17 Degrees");
		        	        	         printf("\n3  AM\t15 Degrees");
		        	        	         printf("\n4  AM\t14 Degrees");
		        	        	         printf("\n5  AM\t12 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t27 Celsius\nHumidity\t49 percent\nWindspeed\t6.5 kph");
		        		    break;
		        }
			    break;
		case 12:printf("\nEnter the day of the month.\n(enter the number that coincides with the day)");
		        printf("\nSun\tMon\tTue\tWed\tThu\tFri\tSat");
		        printf("\n   \t   \t   \t   \t1  \t2  \t3\n4  \t5  \t6  \t7  \t8  \t9  \t10\n11 \t12 \t13 \t14 \t15 \t16 \t17\n18 \t19 \t20 \t21 \t22 \t23 \t24\n25 \t26 \t27 \t28 \t29 \t30 \t31");
		        printf("\nEnter here:");   scanf("\n%d",&day);
		        switch(day)
		        {
		        	case 1: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t19 Degrees");
		        	        	         printf("\n7  AM\t20 Degrees");
		        	        	         printf("\n8  AM\t22 Degrees");
		        	        	         printf("\n9  AM\t23 Degrees");
		        	        	         printf("\n10 AM\t25 Degrees");
		        	        	         printf("\n11 AM\t26 Degrees");
		        	        	         printf("\n12 PM\t28 Degrees");
		        	        	         printf("\n1  PM\t30 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t31 Degrees");
		        	        	         printf("\n3  PM\t32 Degrees");
		        	        	         printf("\n4  PM\t32 Degrees");
		        	        	         printf("\n5  PM\t30 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t29 Degrees");
		        	        	         printf("\n8  PM\t28 Degrees");
		        	        	         printf("\n9  PM\t28 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t27 Degrees");
		        	        	         printf("\n11 PM\t26 Degrees");
		        	        	         printf("\n12 AM\t25 Degrees");
		        	        	         printf("\n1  AM\t25 Degrees");
		        	        	         printf("\n2  AM\t23 Degrees");
		        	        	         printf("\n3  AM\t21 Degrees");
		        	        	         printf("\n4  AM\t20 Degrees");
		        	        	         printf("\n5  AM\t18 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t25.1 Celsius\nHumidity\t48 percent\nWindspeed\t7.2 kph");
		        		    break;
					case 2: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t13 Degrees");
		        	        	         printf("\n7  AM\t15 Degrees");
		        	        	         printf("\n8  AM\t18 Degrees");
		        	        	         printf("\n9  AM\t21 Degrees");
		        	        	         printf("\n10 AM\t24 Degrees");
		        	        	         printf("\n11 AM\t26 Degrees");
		        	        	         printf("\n12 PM\t27 Degrees");
		        	        	         printf("\n1  PM\t28 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t29 Degrees");
		        	        	         printf("\n3  PM\t29 Degrees");
		        	        	         printf("\n4  PM\t29 Degrees");
		        	        	         printf("\n5  PM\t29 Degrees");
		        	        	         printf("\n6  PM\t28 Degrees");
		        	        	         printf("\n7  PM\t28 Degrees");
		        	        	         printf("\n8  PM\t27 Degrees");
		        	        	         printf("\n9  PM\t26 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t24 Degrees");
		        	        	         printf("\n11 PM\t23 Degrees");
		        	        	         printf("\n12 AM\t21 Degrees");
		        	        	         printf("\n1  AM\t19 Degrees");
		        	        	         printf("\n2  AM\t17 Degrees");
		        	        	         printf("\n3  AM\t15 Degrees");
		        	        	         printf("\n4  AM\t14 Degrees");
		        	        	         printf("\n5  AM\t12 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t25.1 Celsius\nHumidity\t48 percent\nWindspeed\t7.2 kph");
		        		    break;
					case 3: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t15 Degrees");
		        	        	         printf("\n7  AM\t17 Degrees");
		        	        	         printf("\n8  AM\t18 Degrees");
		        	        	         printf("\n9  AM\t21 Degrees");
		        	        	         printf("\n10 AM\t24 Degrees");
		        	        	         printf("\n11 AM\t26 Degrees");
		        	        	         printf("\n12 PM\t27 Degrees");
		        	        	         printf("\n1  PM\t28 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t29 Degrees");
		        	        	         printf("\n3  PM\t29 Degrees");
		        	        	         printf("\n4  PM\t29 Degrees");
		        	        	         printf("\n5  PM\t29 Degrees");
		        	        	         printf("\n6  PM\t28 Degrees");
		        	        	         printf("\n7  PM\t28 Degrees");
		        	        	         printf("\n8  PM\t27 Degrees");
		        	        	         printf("\n9  PM\t26 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t24 Degrees");
		        	        	         printf("\n11 PM\t23 Degrees");
		        	        	         printf("\n12 AM\t22 Degrees");
		        	        	         printf("\n1  AM\t21 Degrees");
		        	        	         printf("\n2  AM\t20 Degrees");
		        	        	         printf("\n3  AM\t18 Degrees");
		        	        	         printf("\n4  AM\t16 Degrees");
		        	        	         printf("\n5  AM\t15 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t25.1 Celsius\nHumidity\t48 percent\nWindspeed\t7.2 kph");
		        		    break;
		            case 4: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t13 Degrees");
		        	        	         printf("\n7  AM\t15 Degrees");
		        	        	         printf("\n8  AM\t18 Degrees");
		        	        	         printf("\n9  AM\t21 Degrees");
		        	        	         printf("\n10 AM\t24 Degrees");
		        	        	         printf("\n11 AM\t26 Degrees");
		        	        	         printf("\n12 PM\t27 Degrees");
		        	        	         printf("\n1  PM\t28 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t29 Degrees");
		        	        	         printf("\n3  PM\t30 Degrees");
		        	        	         printf("\n4  PM\t30 Degrees");
		        	        	         printf("\n5  PM\t29 Degrees");
		        	        	         printf("\n6  PM\t28 Degrees");
		        	        	         printf("\n7  PM\t28 Degrees");
		        	        	         printf("\n8  PM\t27 Degrees");
		        	        	         printf("\n9  PM\t26 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t24 Degrees");
		        	        	         printf("\n11 PM\t23 Degrees");
		        	        	         printf("\n12 AM\t21 Degrees");
		        	        	         printf("\n1  AM\t19 Degrees");
		        	        	         printf("\n2  AM\t17 Degrees");
		        	        	         printf("\n3  AM\t15 Degrees");
		        	        	         printf("\n4  AM\t14 Degrees");
		        	        	         printf("\n5  AM\t13 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t25.1 Celsius\nHumidity\t48 percent\nWindspeed\t7.2 kph");
		        		    break;
		        	case 5: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t21 Degrees");
		        	        	         printf("\n7  AM\t23 Degrees");
		        	        	         printf("\n8  AM\t24 Degrees");
		        	        	         printf("\n9  AM\t26 Degrees");
		        	        	         printf("\n10 AM\t27 Degrees");
		        	        	         printf("\n11 AM\t27 Degrees");
		        	        	         printf("\n12 PM\t28 Degrees");
		        	        	         printf("\n1  PM\t29 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t29 Degrees");
		        	        	         printf("\n3  PM\t30 Degrees");
		        	        	         printf("\n4  PM\t30 Degrees");
		        	        	         printf("\n5  PM\t29 Degrees");
		        	        	         printf("\n6  PM\t29 Degrees");
		        	        	         printf("\n7  PM\t28 Degrees");
		        	        	         printf("\n8  PM\t27 Degrees");
		        	        	         printf("\n9  PM\t27 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t26 Degrees");
		        	        	         printf("\n11 PM\t25 Degrees");
		        	        	         printf("\n12 AM\t25 Degrees");
		        	        	         printf("\n1  AM\t24 Degrees");
		        	        	         printf("\n2  AM\t24 Degrees");
		        	        	         printf("\n3  AM\t23 Degrees");
		        	        	         printf("\n4  AM\t22 Degrees");
		        	        	         printf("\n5  AM\t20 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t25.1 Celsius\nHumidity\t48 percent\nWindspeed\t7.2 kph");
		        		    break;
					case 6: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t15 Degrees");
		        	        	         printf("\n7  AM\t16 Degrees");
		        	        	         printf("\n8  AM\t18 Degrees");
		        	        	         printf("\n9  AM\t21 Degrees");
		        	        	         printf("\n10 AM\t24 Degrees");
		        	        	         printf("\n11 AM\t26 Degrees");
		        	        	         printf("\n12 PM\t27 Degrees");
		        	        	         printf("\n1  PM\t28 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t29 Degrees");
		        	        	         printf("\n3  PM\t30 Degrees");
		        	        	         printf("\n4  PM\t30 Degrees");
		        	        	         printf("\n5  PM\t29 Degrees");
		        	        	         printf("\n6  PM\t28 Degrees");
		        	        	         printf("\n7  PM\t28 Degrees");
		        	        	         printf("\n8  PM\t27 Degrees");
		        	        	         printf("\n9  PM\t26 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t24 Degrees");
		        	        	         printf("\n11 PM\t23 Degrees");
		        	        	         printf("\n12 AM\t21 Degrees");
		        	        	         printf("\n1  AM\t19 Degrees");
		        	        	         printf("\n2  AM\t17 Degrees");
		        	        	         printf("\n3  AM\t15 Degrees");
		        	        	         printf("\n4  AM\t14 Degrees");
		        	        	         printf("\n5  AM\t14 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t25.1 Celsius\nHumidity\t48 percent\nWindspeed\t7.2 kph");
		        		    break;
					case 7: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t15 Degrees");
		        	        	         printf("\n7  AM\t16 Degrees");
		        	        	         printf("\n8  AM\t18 Degrees");
		        	        	         printf("\n9  AM\t21 Degrees");
		        	        	         printf("\n10 AM\t24 Degrees");
		        	        	         printf("\n11 AM\t26 Degrees");
		        	        	         printf("\n12 PM\t27 Degrees");
		        	        	         printf("\n1  PM\t28 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t29 Degrees");
		        	        	         printf("\n3  PM\t30 Degrees");
		        	        	         printf("\n4  PM\t30 Degrees");
		        	        	         printf("\n5  PM\t29 Degrees");
		        	        	         printf("\n6  PM\t28 Degrees");
		        	        	         printf("\n7  PM\t28 Degrees");
		        	        	         printf("\n8  PM\t27 Degrees");
		        	        	         printf("\n9  PM\t26 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t24 Degrees");
		        	        	         printf("\n11 PM\t23 Degrees");
		        	        	         printf("\n12 AM\t21 Degrees");
		        	        	         printf("\n1  AM\t19 Degrees");
		        	        	         printf("\n2  AM\t17 Degrees");
		        	        	         printf("\n3  AM\t17 Degrees");
		        	        	         printf("\n4  AM\t16 Degrees");
		        	        	         printf("\n5  AM\t15 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t25.1 Celsius\nHumidity\t48 percent\nWindspeed\t7.2 kph");
		        		    break;
		        	case 8: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t16 Degrees");
		        	        	         printf("\n7  AM\t18 Degrees");
		        	        	         printf("\n8  AM\t20 Degrees");
		        	        	         printf("\n9  AM\t22 Degrees");
		        	        	         printf("\n10 AM\t24 Degrees");
		        	        	         printf("\n11 AM\t26 Degrees");
		        	        	         printf("\n12 PM\t28 Degrees");
		        	        	         printf("\n1  PM\t29 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t30 Degrees");
		        	        	         printf("\n3  PM\t30 Degrees");
		        	        	         printf("\n4  PM\t30 Degrees");
		        	        	         printf("\n5  PM\t29 Degrees");
		        	        	         printf("\n6  PM\t28 Degrees");
		        	        	         printf("\n7  PM\t28 Degrees");
		        	        	         printf("\n8  PM\t27 Degrees");
		        	        	         printf("\n9  PM\t26 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t26 Degrees");
		        	        	         printf("\n11 PM\t24 Degrees");
		        	        	         printf("\n12 AM\t23 Degrees");
		        	        	         printf("\n1  AM\t21 Degrees");
		        	        	         printf("\n2  AM\t19 Degrees");
		        	        	         printf("\n3  AM\t18 Degrees");
		        	        	         printf("\n4  AM\t17 Degrees");
		        	        	         printf("\n5  AM\t16 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t25.1 Celsius\nHumidity\t48 percent\nWindspeed\t7.2 kph");
		        		    break;
					case 9: printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t20 Degrees");
		        	        	         printf("\n7  AM\t21 Degrees");
		        	        	         printf("\n8  AM\t23 Degrees");
		        	        	         printf("\n9  AM\t24 Degrees");
		        	        	         printf("\n10 AM\t26 Degrees");
		        	        	         printf("\n11 AM\t27 Degrees");
		        	        	         printf("\n12 PM\t28 Degrees");
		        	        	         printf("\n1  PM\t29 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t30 Degrees");
		        	        	         printf("\n3  PM\t30 Degrees");
		        	        	         printf("\n4  PM\t30 Degrees");
		        	        	         printf("\n5  PM\t30 Degrees");
		        	        	         printf("\n6  PM\t29 Degrees");
		        	        	         printf("\n7  PM\t29 Degrees");
		        	        	         printf("\n8  PM\t28 Degrees");
		        	        	         printf("\n9  PM\t28 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t27 Degrees");
		        	        	         printf("\n11 PM\t26 Degrees");
		        	        	         printf("\n12 AM\t25 Degrees");
		        	        	         printf("\n1  AM\t24 Degrees");
		        	        	         printf("\n2  AM\t23 Degrees");
		        	        	         printf("\n3  AM\t21 Degrees");
		        	        	         printf("\n4  AM\t20 Degrees");
		        	        	         printf("\n5  AM\t18 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t25.1 Celsius\nHumidity\t48 percent\nWindspeed\t7.2 kph");
		        		    break;
		            case 10:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t18 Degrees");
		        	        	         printf("\n7  AM\t20 Degrees");
		        	        	         printf("\n8  AM\t22 Degrees");
		        	        	         printf("\n9  AM\t23 Degrees");
		        	        	         printf("\n10 AM\t25 Degrees");
		        	        	         printf("\n11 AM\t26 Degrees");
		        	        	         printf("\n12 PM\t28 Degrees");
		        	        	         printf("\n1  PM\t29 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t30 Degrees");
		        	        	         printf("\n3  PM\t31 Degrees");
		        	        	         printf("\n4  PM\t31 Degrees");
		        	        	         printf("\n5  PM\t30 Degrees");
		        	        	         printf("\n6  PM\t30 Degrees");
		        	        	         printf("\n7  PM\t29 Degrees");
		        	        	         printf("\n8  PM\t28 Degrees");
		        	        	         printf("\n9  PM\t28 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t27 Degrees");
		        	        	         printf("\n11 PM\t26 Degrees");
		        	        	         printf("\n12 AM\t25 Degrees");
		        	        	         printf("\n1  AM\t23 Degrees");
		        	        	         printf("\n2  AM\t22 Degrees");
		        	        	         printf("\n3  AM\t20 Degrees");
		        	        	         printf("\n4  AM\t19 Degrees");
		        	        	         printf("\n5  AM\t17 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t25.1 Celsius\nHumidity\t48 percent\nWindspeed\t7.2 kph");
		        		    break;
		        	case 11:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t16 Degrees");
		        	        	         printf("\n7  AM\t18 Degrees");
		        	        	         printf("\n8  AM\t20 Degrees");
		        	        	         printf("\n9  AM\t22 Degrees");
		        	        	         printf("\n10 AM\t24 Degrees");
		        	        	         printf("\n11 AM\t26 Degrees");
		        	        	         printf("\n12 PM\t28 Degrees");
		        	        	         printf("\n1  PM\t29 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t30 Degrees");
		        	        	         printf("\n3  PM\t30 Degrees");
		        	        	         printf("\n4  PM\t30 Degrees");
		        	        	         printf("\n5  PM\t29 Degrees");
		        	        	         printf("\n6  PM\t28 Degrees");
		        	        	         printf("\n7  PM\t28 Degrees");
		        	        	         printf("\n8  PM\t27 Degrees");
		        	        	         printf("\n9  PM\t26 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t26 Degrees");
		        	        	         printf("\n11 PM\t24 Degrees");
		        	        	         printf("\n12 AM\t23 Degrees");
		        	        	         printf("\n1  AM\t21 Degrees");
		        	        	         printf("\n2  AM\t19 Degrees");
		        	        	         printf("\n3  AM\t18 Degrees");
		        	        	         printf("\n4  AM\t17 Degrees");
		        	        	         printf("\n5  AM\t16 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t25.1 Celsius\nHumidity\t48 percent\nWindspeed\t7.2 kph");
		        		    break;
					case 12:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t16 Degrees");
		        	        	         printf("\n7  AM\t17 Degrees");
		        	        	         printf("\n8  AM\t18 Degrees");
		        	        	         printf("\n9  AM\t21 Degrees");
		        	        	         printf("\n10 AM\t24 Degrees");
		        	        	         printf("\n11 AM\t26 Degrees");
		        	        	         printf("\n12 PM\t27 Degrees");
		        	        	         printf("\n1  PM\t28 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t29 Degrees");
		        	        	         printf("\n3  PM\t29 Degrees");
		        	        	         printf("\n4  PM\t29 Degrees");
		        	        	         printf("\n5  PM\t29 Degrees");
		        	        	         printf("\n6  PM\t28 Degrees");
		        	        	         printf("\n7  PM\t28 Degrees");
		        	        	         printf("\n8  PM\t27 Degrees");
		        	        	         printf("\n9  PM\t26 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t24 Degrees");
		        	        	         printf("\n11 PM\t23 Degrees");
		        	        	         printf("\n12 AM\t22 Degrees");
		        	        	         printf("\n1  AM\t21 Degrees");
		        	        	         printf("\n2  AM\t20 Degrees");
		        	        	         printf("\n3  AM\t18 Degrees");
		        	        	         printf("\n4  AM\t16 Degrees");
		        	        	         printf("\n5  AM\t16 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t25.1 Celsius\nHumidity\t48 percent\nWindspeed\t7.2 kph");
		        		    break;
					case 13:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t13 Degrees");
		        	        	         printf("\n7  AM\t15 Degrees");
		        	        	         printf("\n8  AM\t18 Degrees");
		        	        	         printf("\n9  AM\t21 Degrees");
		        	        	         printf("\n10 AM\t24 Degrees");
		        	        	         printf("\n11 AM\t26 Degrees");
		        	        	         printf("\n12 PM\t27 Degrees");
		        	        	         printf("\n1  PM\t28 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t29 Degrees");
		        	        	         printf("\n3  PM\t30 Degrees");
		        	        	         printf("\n4  PM\t30 Degrees");
		        	        	         printf("\n5  PM\t29 Degrees");
		        	        	         printf("\n6  PM\t28 Degrees");
		        	        	         printf("\n7  PM\t28 Degrees");
		        	        	         printf("\n8  PM\t27 Degrees");
		        	        	         printf("\n9  PM\t26 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t24 Degrees");
		        	        	         printf("\n11 PM\t23 Degrees");
		        	        	         printf("\n12 AM\t21 Degrees");
		        	        	         printf("\n1  AM\t19 Degrees");
		        	        	         printf("\n2  AM\t17 Degrees");
		        	        	         printf("\n3  AM\t15 Degrees");
		        	        	         printf("\n4  AM\t14 Degrees");
		        	        	         printf("\n5  AM\t13 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t25.1 Celsius\nHumidity\t48 percent\nWindspeed\t7.2 kph");
		        		    break;
		        	case 14:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t13 Degrees");
		        	        	         printf("\n7  AM\t15 Degrees");
		        	        	         printf("\n8  AM\t18 Degrees");
		        	        	         printf("\n9  AM\t21 Degrees");
		        	        	         printf("\n10 AM\t24 Degrees");
		        	        	         printf("\n11 AM\t26 Degrees");
		        	        	         printf("\n12 PM\t27 Degrees");
		        	        	         printf("\n1  PM\t28 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t29 Degrees");
		        	        	         printf("\n3  PM\t29 Degrees");
		        	        	         printf("\n4  PM\t29 Degrees");
		        	        	         printf("\n5  PM\t29 Degrees");
		        	        	         printf("\n6  PM\t28 Degrees");
		        	        	         printf("\n7  PM\t28 Degrees");
		        	        	         printf("\n8  PM\t27 Degrees");
		        	        	         printf("\n9  PM\t26 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t24 Degrees");
		        	        	         printf("\n11 PM\t23 Degrees");
		        	        	         printf("\n12 AM\t21 Degrees");
		        	        	         printf("\n1  AM\t19 Degrees");
		        	        	         printf("\n2  AM\t17 Degrees");
		        	        	         printf("\n3  AM\t15 Degrees");
		        	        	         printf("\n4  AM\t14 Degrees");
		        	        	         printf("\n5  AM\t13 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t25.1 Celsius\nHumidity\t48 percent\nWindspeed\t7.2 kph");
		        		    break;
					case 15:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t14 Degrees");
		        	        	         printf("\n7  AM\t15 Degrees");
		        	        	         printf("\n8  AM\t16 Degrees");
		        	        	         printf("\n9  AM\t18 Degrees");
		        	        	         printf("\n10 AM\t20 Degrees");
		        	        	         printf("\n11 AM\t21 Degrees");
		        	        	         printf("\n12 PM\t23 Degrees");
		        	        	         printf("\n1  PM\t25 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t27 Degrees");
		        	        	         printf("\n3  PM\t28 Degrees");
		        	        	         printf("\n4  PM\t28 Degrees");
		        	        	         printf("\n5  PM\t28 Degrees");
		        	        	         printf("\n6  PM\t27 Degrees");
		        	        	         printf("\n7  PM\t26 Degrees");
		        	        	         printf("\n8  PM\t26 Degrees");
		        	        	         printf("\n9  PM\t25 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t24 Degrees");
		        	        	         printf("\n11 PM\t23 Degrees");
		        	        	         printf("\n12 AM\t21 Degrees");
		        	        	         printf("\n1  AM\t19 Degrees");
		        	        	         printf("\n2  AM\t17 Degrees");
		        	        	         printf("\n3  AM\t16 Degrees");
		        	        	         printf("\n4  AM\t15 Degrees");
		        	        	         printf("\n5  AM\t14 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t25.1 Celsius\nHumidity\t48 percent\nWindspeed\t7.2 kph");
		        		    break;
		            case 16:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t14 Degrees");
		        	        	         printf("\n7  AM\t15 Degrees");
		        	        	         printf("\n8  AM\t16 Degrees");
		        	        	         printf("\n9  AM\t18 Degrees");
		        	        	         printf("\n10 AM\t20 Degrees");
		        	        	         printf("\n11 AM\t21 Degrees");
		        	        	         printf("\n12 PM\t23 Degrees");
		        	        	         printf("\n1  PM\t25 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t26 Degrees");
		        	        	         printf("\n3  PM\t26 Degrees");
		        	        	         printf("\n4  PM\t26 Degrees");
		        	        	         printf("\n5  PM\t25 Degrees");
		        	        	         printf("\n6  PM\t25 Degrees");
		        	        	         printf("\n7  PM\t24 Degrees");
		        	        	         printf("\n8  PM\t23 Degrees");
		        	        	         printf("\n9  PM\t23 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t22 Degrees");
		        	        	         printf("\n11 PM\t21 Degrees");
		        	        	         printf("\n12 AM\t20 Degrees");
		        	        	         printf("\n1  AM\t19 Degrees");
		        	        	         printf("\n2  AM\t17 Degrees");
		        	        	         printf("\n3  AM\t16 Degrees");
		        	        	         printf("\n4  AM\t15 Degrees");
		        	        	         printf("\n5  AM\t14 Degrees");
		        	        		     break; 	     
							}
							printf("\nSea temperature\t25.1 Celsius\nHumidity\t48 percent\nWindspeed\t7.2 kph");
		        		    break;
		        	case 17:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t14 Degrees");
		        	        	         printf("\n7  AM\t15 Degrees");
		        	        	         printf("\n8  AM\t16 Degrees");
		        	        	         printf("\n9  AM\t18 Degrees");
		        	        	         printf("\n10 AM\t20 Degrees");
		        	        	         printf("\n11 AM\t21 Degrees");
		        	        	         printf("\n12 PM\t23 Degrees");
		        	        	         printf("\n1  PM\t25 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t27 Degrees");
		        	        	         printf("\n3  PM\t27 Degrees");
		        	        	         printf("\n4  PM\t27 Degrees");
		        	        	         printf("\n5  PM\t26 Degrees");
		        	        	         printf("\n6  PM\t26 Degrees");
		        	        	         printf("\n7  PM\t25 Degrees");
		        	        	         printf("\n8  PM\t24 Degrees");
		        	        	         printf("\n9  PM\t24 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t23 Degrees");
		        	        	         printf("\n11 PM\t22 Degrees");
		        	        	         printf("\n12 AM\t20 Degrees");
		        	        	         printf("\n1  AM\t19 Degrees");
		        	        	         printf("\n2  AM\t17 Degrees");
		        	        	         printf("\n3  AM\t16 Degrees");
		        	        	         printf("\n4  AM\t15 Degrees");
		        	        	         printf("\n5  AM\t15 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t25.1 Celsius\nHumidity\t48 percent\nWindspeed\t7.2 kph");
		        		    break;
					case 18:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t16 Degrees");
		        	        	         printf("\n7  AM\t17 Degrees");
		        	        	         printf("\n8  AM\t18 Degrees");
		        	        	         printf("\n9  AM\t19 Degrees");
		        	        	         printf("\n10 AM\t20 Degrees");
		        	        	         printf("\n11 AM\t21 Degrees");
		        	        	         printf("\n12 PM\t23 Degrees");
		        	        	         printf("\n1  PM\t25 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t27 Degrees");
		        	        	         printf("\n3  PM\t27 Degrees");
		        	        	         printf("\n4  PM\t27 Degrees");
		        	        	         printf("\n5  PM\t26 Degrees");
		        	        	         printf("\n6  PM\t26 Degrees");
		        	        	         printf("\n7  PM\t25 Degrees");
		        	        	         printf("\n8  PM\t24 Degrees");
		        	        	         printf("\n9  PM\t24 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t23 Degrees");
		        	        	         printf("\n11 PM\t22 Degrees");
		        	        	         printf("\n12 AM\t20 Degrees");
		        	        	         printf("\n1  AM\t19 Degrees");
		        	        	         printf("\n2  AM\t18 Degrees");
		        	        	         printf("\n3  AM\t17 Degrees");
		        	        	         printf("\n4  AM\t16 Degrees");
		        	        	         printf("\n5  AM\t16 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t25.1 Celsius\nHumidity\t48 percent\nWindspeed\t7.2 kph");
		        		    break;
					case 19:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t14 Degrees");
		        	        	         printf("\n7  AM\t15 Degrees");
		        	        	         printf("\n8  AM\t16 Degrees");
		        	        	         printf("\n9  AM\t18 Degrees");
		        	        	         printf("\n10 AM\t20 Degrees");
		        	        	         printf("\n11 AM\t21 Degrees");
		        	        	         printf("\n12 PM\t23 Degrees");
		        	        	         printf("\n1  PM\t25 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t27 Degrees");
		        	        	         printf("\n3  PM\t28 Degrees");
		        	        	         printf("\n4  PM\t28 Degrees");
		        	        	         printf("\n5  PM\t28 Degrees");
		        	        	         printf("\n6  PM\t27 Degrees");
		        	        	         printf("\n7  PM\t26 Degrees");
		        	        	         printf("\n8  PM\t26 Degrees");
		        	        	         printf("\n9  PM\t25 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t24 Degrees");
		        	        	         printf("\n11 PM\t23 Degrees");
		        	        	         printf("\n12 AM\t21 Degrees");
		        	        	         printf("\n1  AM\t19 Degrees");
		        	        	         printf("\n2  AM\t17 Degrees");
		        	        	         printf("\n3  AM\t16 Degrees");
		        	        	         printf("\n4  AM\t15 Degrees");
		        	        	         printf("\n5  AM\t14 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t25.1 Celsius\nHumidity\t48 percent\nWindspeed\t7.2 kph");
		        		    break;
		        	case 20:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t14 Degrees");
		        	        	         printf("\n7  AM\t15 Degrees");
		        	        	         printf("\n8  AM\t16 Degrees");
		        	        	         printf("\n9  AM\t18 Degrees");
		        	        	         printf("\n10 AM\t20 Degrees");
		        	        	         printf("\n11 AM\t21 Degrees");
		        	        	         printf("\n12 PM\t23 Degrees");
		        	        	         printf("\n1  PM\t25 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t27 Degrees");
		        	        	         printf("\n3  PM\t28 Degrees");
		        	        	         printf("\n4  PM\t28 Degrees");
		        	        	         printf("\n5  PM\t28 Degrees");
		        	        	         printf("\n6  PM\t27 Degrees");
		        	        	         printf("\n7  PM\t26 Degrees");
		        	        	         printf("\n8  PM\t26 Degrees");
		        	        	         printf("\n9  PM\t25 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t24 Degrees");
		        	        	         printf("\n11 PM\t23 Degrees");
		        	        	         printf("\n12 AM\t21 Degrees");
		        	        	         printf("\n1  AM\t19 Degrees");
		        	        	         printf("\n2  AM\t17 Degrees");
		        	        	         printf("\n3  AM\t16 Degrees");
		        	        	         printf("\n4  AM\t15 Degrees");
		        	        	         printf("\n5  AM\t14 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t25.1 Celsius\nHumidity\t48 percent\nWindspeed\t7.2 kph");
		        		    break;
					case 21:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t15 Degrees");
		        	        	         printf("\n7  AM\t17 Degrees");
		        	        	         printf("\n8  AM\t18 Degrees");
		        	        	         printf("\n9  AM\t19 Degrees");
		        	        	         printf("\n10 AM\t20 Degrees");
		        	        	         printf("\n11 AM\t21 Degrees");
		        	        	         printf("\n12 PM\t23 Degrees");
		        	        	         printf("\n1  PM\t25 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t27 Degrees");
		        	        	         printf("\n3  PM\t27 Degrees");
		        	        	         printf("\n4  PM\t27 Degrees");
		        	        	         printf("\n5  PM\t26 Degrees");
		        	        	         printf("\n6  PM\t26 Degrees");
		        	        	         printf("\n7  PM\t25 Degrees");
		        	        	         printf("\n8  PM\t24 Degrees");
		        	        	         printf("\n9  PM\t24 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t23 Degrees");
		        	        	         printf("\n11 PM\t22 Degrees");
		        	        	         printf("\n12 AM\t20 Degrees");
		        	        	         printf("\n1  AM\t19 Degrees");
		        	        	         printf("\n2  AM\t18 Degrees");
		        	        	         printf("\n3  AM\t17 Degrees");
		        	        	         printf("\n4  AM\t15 Degrees");
		        	        	         printf("\n5  AM\t13 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t25.1 Celsius\nHumidity\t48 percent\nWindspeed\t7.2 kph");
		        		    break;
		            case 22:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t15 Degrees");
		        	        	         printf("\n7  AM\t17 Degrees");
		        	        	         printf("\n8  AM\t18 Degrees");
		        	        	         printf("\n9  AM\t19 Degrees");
		        	        	         printf("\n10 AM\t20 Degrees");
		        	        	         printf("\n11 AM\t21 Degrees");
		        	        	         printf("\n12 PM\t23 Degrees");
		        	        	         printf("\n1  PM\t25 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t27 Degrees");
		        	        	         printf("\n3  PM\t27 Degrees");
		        	        	         printf("\n4  PM\t27 Degrees");
		        	        	         printf("\n5  PM\t26 Degrees");
		        	        	         printf("\n6  PM\t26 Degrees");
		        	        	         printf("\n7  PM\t25 Degrees");
		        	        	         printf("\n8  PM\t24 Degrees");
		        	        	         printf("\n9  PM\t24 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t23 Degrees");
		        	        	         printf("\n11 PM\t22 Degrees");
		        	        	         printf("\n12 AM\t20 Degrees");
		        	        	         printf("\n1  AM\t19 Degrees");
		        	        	         printf("\n2  AM\t18 Degrees");
		        	        	         printf("\n3  AM\t17 Degrees");
		        	        	         printf("\n4  AM\t16 Degrees");
		        	        	         printf("\n5  AM\t14 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t25.1 Celsius\nHumidity\t48 percent\nWindspeed\t7.2 kph");
		        		    break;
		        	case 23:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t15 Degrees");
		        	        	         printf("\n7  AM\t17 Degrees");
		        	        	         printf("\n8  AM\t18 Degrees");
		        	        	         printf("\n9  AM\t19 Degrees");
		        	        	         printf("\n10 AM\t20 Degrees");
		        	        	         printf("\n11 AM\t21 Degrees");
		        	        	         printf("\n12 PM\t23 Degrees");
		        	        	         printf("\n1  PM\t25 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t25 Degrees");
		        	        	         printf("\n3  PM\t26 Degrees");
		        	        	         printf("\n4  PM\t26 Degrees");
		        	        	         printf("\n5  PM\t26 Degrees");
		        	        	         printf("\n6  PM\t25 Degrees");
		        	        	         printf("\n7  PM\t25 Degrees");
		        	        	         printf("\n8  PM\t24 Degrees");
		        	        	         printf("\n9  PM\t24 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t23 Degrees");
		        	        	         printf("\n11 PM\t22 Degrees");
		        	        	         printf("\n12 AM\t20 Degrees");
		        	        	         printf("\n1  AM\t19 Degrees");
		        	        	         printf("\n2  AM\t18 Degrees");
		        	        	         printf("\n3  AM\t17 Degrees");
		        	        	         printf("\n4  AM\t16 Degrees");
		        	        	         printf("\n5  AM\t14 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t25.1 Celsius\nHumidity\t48 percent\nWindspeed\t7.2 kph");
		        		    break;
					case 24:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t15 Degrees");
		        	        	         printf("\n7  AM\t17 Degrees");
		        	        	         printf("\n8  AM\t18 Degrees");
		        	        	         printf("\n9  AM\t19 Degrees");
		        	        	         printf("\n10 AM\t20 Degrees");
		        	        	         printf("\n11 AM\t21 Degrees");
		        	        	         printf("\n12 PM\t23 Degrees");
		        	        	         printf("\n1  PM\t25 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t27 Degrees");
		        	        	         printf("\n3  PM\t27 Degrees");
		        	        	         printf("\n4  PM\t27 Degrees");
		        	        	         printf("\n5  PM\t26 Degrees");
		        	        	         printf("\n6  PM\t26 Degrees");
		        	        	         printf("\n7  PM\t25 Degrees");
		        	        	         printf("\n8  PM\t24 Degrees");
		        	        	         printf("\n9  PM\t24 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t23 Degrees");
		        	        	         printf("\n11 PM\t22 Degrees");
		        	        	         printf("\n12 AM\t20 Degrees");
		        	        	         printf("\n1  AM\t19 Degrees");
		        	        	         printf("\n2  AM\t18 Degrees");
		        	        	         printf("\n3  AM\t17 Degrees");
		        	        	         printf("\n4  AM\t16 Degrees");
		        	        	         printf("\n5  AM\t14 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t25.1 Celsius\nHumidity\t48 percent\nWindspeed\t7.2 kph");
		        		    break;
					case 25:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t15 Degrees");
		        	        	         printf("\n7  AM\t17 Degrees");
		        	        	         printf("\n8  AM\t18 Degrees");
		        	        	         printf("\n9  AM\t19 Degrees");
		        	        	         printf("\n10 AM\t20 Degrees");
		        	        	         printf("\n11 AM\t21 Degrees");
		        	        	         printf("\n12 PM\t23 Degrees");
		        	        	         printf("\n1  PM\t25 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t27 Degrees");
		        	        	         printf("\n3  PM\t28 Degrees");
		        	        	         printf("\n4  PM\t28 Degrees");
		        	        	         printf("\n5  PM\t26 Degrees");
		        	        	         printf("\n6  PM\t26 Degrees");
		        	        	         printf("\n7  PM\t25 Degrees");
		        	        	         printf("\n8  PM\t24 Degrees");
		        	        	         printf("\n9  PM\t24 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t23 Degrees");
		        	        	         printf("\n11 PM\t22 Degrees");
		        	        	         printf("\n12 AM\t20 Degrees");
		        	        	         printf("\n1  AM\t19 Degrees");
		        	        	         printf("\n2  AM\t18 Degrees");
		        	        	         printf("\n3  AM\t17 Degrees");
		        	        	         printf("\n4  AM\t16 Degrees");
		        	        	         printf("\n5  AM\t14 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t25.1 Celsius\nHumidity\t48 percent\nWindspeed\t7.2 kph");
		        		    break;
		        	case 26:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	            case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t15 Degrees");
		        	        	         printf("\n7  AM\t17 Degrees");
		        	        	         printf("\n8  AM\t18 Degrees");
		        	        	         printf("\n9  AM\t19 Degrees");
		        	        	         printf("\n10 AM\t20 Degrees");
		        	        	         printf("\n11 AM\t21 Degrees");
		        	        	         printf("\n12 PM\t23 Degrees");
		        	        	         printf("\n1  PM\t25 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t27 Degrees");
		        	        	         printf("\n3  PM\t27 Degrees");
		        	        	         printf("\n4  PM\t27 Degrees");
		        	        	         printf("\n5  PM\t26 Degrees");
		        	        	         printf("\n6  PM\t26 Degrees");
		        	        	         printf("\n7  PM\t25 Degrees");
		        	        	         printf("\n8  PM\t24 Degrees");
		        	        	         printf("\n9  PM\t24 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t22 Degrees");
		        	        	         printf("\n11 PM\t20 Degrees");
		        	        	         printf("\n12 AM\t19 Degrees");
		        	        	         printf("\n1  AM\t18 Degrees");
		        	        	         printf("\n2  AM\t17 Degrees");
		        	        	         printf("\n3  AM\t16 Degrees");
		        	        	         printf("\n4  AM\t14 Degrees");
		        	        	         printf("\n5  AM\t13 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t25.1 Celsius\nHumidity\t48 percent\nWindspeed\t7.2 kph");
		        		    break;
					case 27:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t15 Degrees");
		        	        	         printf("\n7  AM\t17 Degrees");
		        	        	         printf("\n8  AM\t18 Degrees");
		        	        	         printf("\n9  AM\t19 Degrees");
		        	        	         printf("\n10 AM\t20 Degrees");
		        	        	         printf("\n11 AM\t21 Degrees");
		        	        	         printf("\n12 PM\t23 Degrees");
		        	        	         printf("\n1  PM\t25 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t26 Degrees");
		        	        	         printf("\n3  PM\t26 Degrees");
		        	        	         printf("\n4  PM\t26 Degrees");
		        	        	         printf("\n5  PM\t25 Degrees");
		        	        	         printf("\n6  PM\t25 Degrees");
		        	        	         printf("\n7  PM\t24 Degrees");
		        	        	         printf("\n8  PM\t23 Degrees");
		        	        	         printf("\n9  PM\t23 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t21 Degrees");
		        	        	         printf("\n11 PM\t20 Degrees");
		        	        	         printf("\n12 AM\t29 Degrees");
		        	        	         printf("\n1  AM\t18 Degrees");
		        	        	         printf("\n2  AM\t17 Degrees");
		        	        	         printf("\n3  AM\t16 Degrees");
		        	        	         printf("\n4  AM\t14 Degrees");
		        	        	         printf("\n5  AM\t13 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t25.1 Celsius\nHumidity\t48 percent\nWindspeed\t7.2 kph");
		        		    break;
		            case 28:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t13 Degrees");
		        	        	         printf("\n7  AM\t14 Degrees");
		        	        	         printf("\n8  AM\t16 Degrees");
		        	        	         printf("\n9  AM\t17 Degrees");
		        	        	         printf("\n10 AM\t19 Degrees");
		        	        	         printf("\n11 AM\t20 Degrees");
		        	        	         printf("\n12 PM\t22 Degrees");
		        	        	         printf("\n1  PM\t23 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t24 Degrees");
		        	        	         printf("\n3  PM\t25 Degrees");
		        	        	         printf("\n4  PM\t25 Degrees");
		        	        	         printf("\n5  PM\t24 Degrees");
		        	        	         printf("\n6  PM\t23 Degrees");
		        	        	         printf("\n7  PM\t23 Degrees");
		        	        	         printf("\n8  PM\t22 Degrees");
		        	        	         printf("\n9  PM\t22 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t21 Degrees");
		        	        	         printf("\n11 PM\t20 Degrees");
		        	        	         printf("\n12 AM\t19 Degrees");
		        	        	         printf("\n1  AM\t18 Degrees");
		        	        	         printf("\n2  AM\t16 Degrees");
		        	        	         printf("\n3  AM\t14 Degrees");
		        	        	         printf("\n4  AM\t13 Degrees");
		        	        	         printf("\n5  AM\t12 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t25.1 Celsius\nHumidity\t48 percent\nWindspeed\t7.2 kph");
		        		    break;
		        	case 29:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t12 Degrees");
		        	        	         printf("\n7  AM\t13 Degrees");
		        	        	         printf("\n8  AM\t14 Degrees");
		        	        	         printf("\n9  AM\t15 Degrees");
		        	        	         printf("\n10 AM\t17 Degrees");
		        	        	         printf("\n11 AM\t18 Degrees");
		        	        	         printf("\n12 PM\t19 Degrees");
		        	        	         printf("\n1  PM\t21 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t23 Degrees");
		        	        	         printf("\n3  PM\t24 Degrees");
		        	        	         printf("\n4  PM\t24 Degrees");
		        	        	         printf("\n5  PM\t23 Degrees");
		        	        	         printf("\n6  PM\t23 Degrees");
		        	        	         printf("\n7  PM\t22 Degrees");
		        	        	         printf("\n8  PM\t20 Degrees");
		        	        	         printf("\n9  PM\t20 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t19 Degrees");
		        	        	         printf("\n11 PM\t18 Degrees");
		        	        	         printf("\n12 AM\t17 Degrees");
		        	        	         printf("\n1  AM\t16 Degrees");
		        	        	         printf("\n2  AM\t15 Degrees");
		        	        	         printf("\n3  AM\t13 Degrees");
		        	        	         printf("\n4  AM\t12 Degrees");
		        	        	         printf("\n5  AM\t10 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t25.1 Celsius\nHumidity\t48 percent\nWindspeed\t7.2 kph");
		        		    break;
					case 30:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t12 Degrees");
		        	        	         printf("\n7  AM\t13 Degrees");
		        	        	         printf("\n8  AM\t14 Degrees");
		        	        	         printf("\n9  AM\t15 Degrees");
		        	        	         printf("\n10 AM\t17 Degrees");
		        	        	         printf("\n11 AM\t18 Degrees");
		        	        	         printf("\n12 PM\t19 Degrees");
		        	        	         printf("\n1  PM\t21 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t23 Degrees");
		        	        	         printf("\n3  PM\t24 Degrees");
		        	        	         printf("\n4  PM\t24 Degrees");
		        	        	         printf("\n5  PM\t23 Degrees");
		        	        	         printf("\n6  PM\t23 Degrees");
		        	        	         printf("\n7  PM\t22 Degrees");
		        	        	         printf("\n8  PM\t20 Degrees");
		        	        	         printf("\n9  PM\t20 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t19 Degrees");
		        	        	         printf("\n11 PM\t18 Degrees");
		        	        	         printf("\n12 AM\t17 Degrees");
		        	        	         printf("\n1  AM\t16 Degrees");
		        	        	         printf("\n2  AM\t15 Degrees");
		        	        	         printf("\n3  AM\t13 Degrees");
		        	        	         printf("\n4  AM\t12 Degrees");
		        	        	         printf("\n5  AM\t11 Degrees");
		        	        		     break;		 	     
							}
							printf("\nSea temperature\t25.1 Celsius\nHumidity\t48 percent\nWindspeed\t7.2 kph");
		        		    break;
		        	case 31:printf("\nEnter the moment of day(M for morning/E for evening/N for night):");
		        	        scanf("\n%c",&moment);
		        	        switch(moment)
		        	        {
		        	        	case 'M':printf("\nTime\tTemperature");
		        	        	         printf("\n6  AM\t14 Degrees");
		        	        	         printf("\n7  AM\t14 Degrees");
		        	        	         printf("\n8  AM\t15 Degrees");
		        	        	         printf("\n9  AM\t16 Degrees");
		        	        	         printf("\n10 AM\t17 Degrees");
		        	        	         printf("\n11 AM\t18 Degrees");
		        	        	         printf("\n12 PM\t19 Degrees");
		        	        	         printf("\n1  PM\t21 Degrees");
		        	        		     break;
		        	        	case 'E':printf("\nTime\tTemperature");
		        	        	         printf("\n2  PM\t23 Degrees");
		        	        	         printf("\n3  PM\t24 Degrees");
		        	        	         printf("\n4  PM\t24 Degrees");
		        	        	         printf("\n5  PM\t23 Degrees");
		        	        	         printf("\n6  PM\t23 Degrees");
		        	        	         printf("\n7  PM\t22 Degrees");
		        	        	         printf("\n8  PM\t20 Degrees");
		        	        	         printf("\n9  PM\t20 Degrees");
		        	        		     break;
								case 'N':printf("\nTime\tTemperature");
		        	        	         printf("\n10 PM\t19 Degrees");
		        	        	         printf("\n11 PM\t18 Degrees");
		        	        	         printf("\n12 AM\t17 Degrees");
		        	        	         printf("\n1  AM\t16 Degrees");
		        	        	         printf("\n2  AM\t15 Degrees");
		        	        	         printf("\n3  AM\t14 Degrees");
		        	        	         printf("\n4  AM\t13 Degrees");
		        	        	         printf("\n5  AM\t13 Degrees");
		        	        		     break;	 	     
							}
							printf("\nSea temperature\t25.1 Celsius\nHumidity\t48 percent\nWindspeed\t7.2 kph");
		        		    break;
			    }
			    break;	   	   	   	   	   	   	   	   	   		 	   	   
    }
}
