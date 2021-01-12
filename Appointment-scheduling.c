/* Name:Abdullah Saad
program Name: Assighnment 2.c
Date: 5,MAR ,2018 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#define size 6 // size
#define row 6  // row
int main(){
	//initializing days of week , 1=(avaliable),0=(unavalibale)
	int mondaySchedule    [size] =    {0,1,0,1,0,1}; //Monday Schedule
	int tuesdaySchedule   [size] =    {1,1,0,1,1,0}; //Tuesday Schedule 
	int wednesdaySchedule [size] =    {1,0,1,0,1,1}; //Wednesday Schedule
	int thursdaySchedule  [size] =    {0,0,1,0,0,0}; //Thursday Schdule
	int fridaySchedule    [size] =    {1,1,1,1,1,1}; // Friday Schdule
	char days[5][30] = {"Monday","Tuesday","Wednesday","Thursday","Friday"};// dyas of the weeks 
	char times[6][30] = {"10-11AM","11-12NOON","12-1PM","1-2PM","2-3PM","3-4PM"};// times of the days 
	int maxMonday,maxTuesday,maxWednesday,maxThursday,maxFriday; // max of avalibale slots avalibale 
	char ftime[30];
	char fdays[30];
	int j =0 , a = 0, i=0;
	int menu =0; // choose of the menu  
	int appointment =0; // apointment depand on the time or the day 
	int weekdays =0; // specify the day 
	int timedays =0; // specify the time 
	int found=0;  // found  for indicted to 0 
	int choice =0; // choice for the office 
	int maxSlots =0; // maximum numbers oif slots avalibale  
	int sum =0; // the sum of slots avaliable 

			
			
		// welcome message for patients 
		printf("******Welcome to Dr. E. Musk’s office******\n\n");
    	printf("Are you a\n\n");
    	printf("1. patient\n" );
    	printf("2. admin staff\n\n");
    	printf("Please enter your choice here (1 for patient, 2 for admin staff)?\n");
	     
		scanf("%d",&menu);

	    if(menu == 1) // if statment for seprate petaints from admin
	    {
	    	printf("Welcome. Here are your choices.\n\n");
	     	printf("Would you like to\n\n");
	     	printf("1. schedule an appointment based on day.\n");
	     	printf("2. schedule an appointment based on time slot\n\n");
	     	printf("Enter your choice here (1 or 2):\n");
	     	scanf("%d",& appointment);
	     	    if(appointment==1)
	     	    {
	     	    	printf("Enter the day (1 for Monday, 2 for Tuesday, 3 for Wednesday, 4 for Thursday, 5 for Friday):\n");
	     	    		
	     	    	scanf("%d",&weekdays);
	     	    		switch (weekdays){
	     	    			case 1:
 	      	   			        printf("Slots available for Monday are:\n");

 	      	   			        while (i <5 && !found)
 	      	   			        	{
 	      	   			        		if (mondaySchedule[i]== found)
 	      	   			        			{
 	      	   			        					printf("%s \n",times[i]);
 	      	   			        					
 	      	   			        			}
 	      	   			        		i++;	
 	      	   			        	}
 	      	   			        	 

	     	      	    		printf("Enter your preferred time:\n");
	     	    				scanf("%s",ftime);
	     	    				for(i=0;i<6; i++)
	     	    					{
	     	    						if(strcmp(ftime,times[i])==1)
	     	    							{

	     	    								mondaySchedule[i] = 0;
	     	    								printf("Great. Your appointment is booked for Monday: %s\n",times[i]);
                        			        }
                        			 }
	     	    				break;
	     	    			case 2:
 	      	   			        printf("Slots available for Tuesday are:\n");

 	      	   			        while (i <5 && !found)
 	      	   			        	{
 	      	   			        		if (tuesdaySchedule[i]== found)
 	      	   			        			{
 	      	   			        					printf("%s \n",times[i]);
 	      	   			        					
 	      	   			        			}
 	      	   			        		i++;	
 	      	   			        	}
 	      	   			        	 

	     	      	    		printf("Enter your preferred time:\n");
	     	    				scanf("%s",ftime);
	     	    				for(i=0;i<6; i++)
	     	    					{
	     	    						if(strcmp(ftime,times[i])==1)
	     	    							{

	     	    								tuesdaySchedule[i] = 0;
	     	    								printf("Great. Your appointment is booked for Tuesday: %s\n",times[i]);
                        			        }
                        			 }
	     	    				break;
	     	    				
	     	    			case 3:
 	      	   			        printf("Slots available for Wednesday are:\n");

 	      	   			        while (i <5 && !found)
 	      	   			        	{
 	      	   			        		if (wednesdaySchedule[i]== found)
 	      	   			        			{
 	      	   			        					printf("%s \n",times[i]);
 	      	   			        					
 	      	   			        			}
 	      	   			        		i++;	
 	      	   			        	}
 	      	   			        	 

	     	      	    		printf("Enter your preferred time:\n");
	     	    				scanf("%s",ftime);
	     	    				for(i=0;i<6; i++)
	     	    					{
	     	    						if(strcmp(ftime,times[i])==1)
	     	    							{

	     	    								wednesdaySchedule[i] = 0;
	     	    								printf("Great. Your appointment is booked for weekdays: %s\n",times[1]);
                        			        }
                        			 }
	     	    				break;
	     	    				
	     	    			case 4:
 	      	   			        printf("Slots available for thursday are:\n");

 	      	   			        while (i <5 && !found)
 	      	   			        	{
 	      	   			        		if (thursdaySchedule[i]== found)
 	      	   			        			{
 	      	   			        					printf("%s \n",times[i]);
 	      	   			        					
 	      	   			        			}
 	      	   			        		i++;	
 	      	   			        	}
 	      	   			        	 

	     	      	    		printf("Enter your preferred time:\n");
	     	    				scanf("%s",ftime);
	     	    				for(i=0;i<6; i++)
	     	    					{
	     	    						if(strcmp(ftime,times[i])==1)
	     	    							{

	     	    								thursdaySchedule[i] = 0;
	     	    								printf("Great. Your appointment is booked for Thursday: %s\n",times[1]);
                        			        }
                        			 }
	     	    				break;
	     	    			case 5:
 	      	   			        printf("Slots available for friday are:\n");

 	      	   			        while (i <5 && !found)
 	      	   			        	{
 	      	   			        		if (fridaySchedule[i]== found)
 	      	   			        			{
 	      	   			        					printf("%s \n",times[i]);
 	      	   			        					
 	      	   			        			}
 	      	   			        		i++;	
 	      	   			        	}
 	      	   			        	 

	     	      	    		printf("Enter your preferred time:\n");
	     	    				scanf("%s",ftime);
	     	    				for(i=0;i<6; i++)
	     	    					{
	     	    						if(strcmp(ftime,times[i])==1)
	     	    							{

	     	    								fridaySchedule[i] = 0;
	     	    								printf("Great. Your appointment is booked for Monday: %s\n",times[1]);
                        			        }
                        			 }
	     	    				break;
	     	    		}	
	     	    }
        
			    if(appointment==2)// if for specify the time 
			    {
	     			printf("Enter a time-slot (1 for 10-11AM ,2 for 11-12NOON, 3 for 12-1PM, 4 for 1-2PM, 5 for 2-3PM, 6 for 3-4PM):\n");
	     			scanf("%d",&timedays);
	     				switch(timedays)
	     				{
	     					case 1:
	     						printf("Days available for 10-11AM are:\n");
	  
	     	    					if (mondaySchedule[0]== 1)
	     	    						{ 	      	    
	     	      	    					printf("Monday\n");
	     	      	   					}
	     	      	    			if (tuesdaySchedule[0] == 1){
	     	      	   	    				printf("Tuesday\n");
	     	      	    				}
	     	      	    			if (wednesdaySchedule[0] == 1)
	     	      	    				{     	      	   	
	     	      	   	    				printf("Wednesday\n");
	     	      	   					}
	     	      	    			if (thursdaySchedule[0] == 1)
	     	      	    				{
	     	      	   	    				printf("Thursday\n");
	     	      	    				}
	     	      	    			 if (fridaySchedule[0] == 1)
	     	      	    			 	{
	     	      	    					printf("Friday\n");
	     	    						}

	     	    				printf("Enter your preferred day:\n");
	     						scanf("%s",fdays);

									if (strcmp(fdays, "Monday") == 1)
									{
                               			mondaySchedule[0] = 0;
                           				printf("Great. Your appointment is booked for Monday: 10-11AM\n ");
                           			}
                           			else if (strcmp(fdays, "Tuesday") == 1)
                           			{
                               			tuesdaySchedule[0] = 0;
                           				printf("Great. Your appointment is booked for Tuesday: 10-11AM\n ");
                           			}
                           			else if (strcmp(fdays, "Wednesday") == 1)
                           			{
                               			wednesdaySchedule[0] = 0;
                           				printf("Great. Your appointment is booked for wednesday: 10-11AM\n ");
                           			}	
                           			else if (strcmp(fdays, "Thursday") == 1)
                           			{

                              			 thursdaySchedule[0] = 0;
                           				printf("Great. Your appointment is booked for Thursday: 10-11AM\n ");
                           			}	
                           			else if (strcmp(fdays, "Friday") == 1)
                           			{
                           				  fridaySchedule[0] = 0;
                           				printf("Great. Your appointment is booked for Friday: 10-11AM\n ");
                           			}	    	     
                        			 

                        			    
                        		
                        		break;
                        	case 2:
                        		printf("Days available for 11-12NOON are:\n");
	     									if (mondaySchedule[1]== 1)
	     	    							{ 	      	    
	     	      	    						printf("Monday\n");
	     	      	   						}
	     	      	    					 if (tuesdaySchedule[1] == 1){
	     	      	   	    				printf("Tuesday\n");
	     	      	    					}
	     	      	    					if (wednesdaySchedule[1] == 1){     	      	   	
	     	      	   	    				printf("Wednesday\n");
	     	      	   						}
	     	      	    					 if (thursdaySchedule[1] == 1){
	     	      	   	    				printf("Thursday\n");
	     	      	    					}
	     	      	    					 if (fridaySchedule[1] == 1){
	     	      	    					printf("Friday\n");
	     	    							}
	     	    				printf("Enter your preferred day:\n");
	     						scanf("%s",fdays);

									if (strcmp(fdays, "Monday") == 1)
									{
                               			mondaySchedule[1] = 0;
                           				printf("Great. Your appointment is booked for Monday: 11-12NOON \n");
                           			}
                           			else if (strcmp(fdays, "Tuesday") == 1)
                           			{
                               			tuesdaySchedule[1] = 0;
                           				printf("Great. Your appointment is booked for Tuesday: 11-12NOON \n");
                           			}
                           			else if (strcmp(fdays, "Wednesday") == 1)
                           			{
                               			wednesdaySchedule[1] = 0;
                           				printf("Great. Your appointment is booked for wednesday: 11-12NOON \n ");
                           			}	
                           			else if (strcmp(fdays, "Thursday") == 1)
                           			{

                              			 thursdaySchedule[1] = 0;
                           				printf("Great. Your appointment is booked for Thursday: 11-12NOON \n ");
                           			}	
                           			else if (strcmp(fdays, "Friday") == 1)
                           			{
                           				  fridaySchedule[1] = 0;
                           				printf("Great. Your appointment is booked for Friday: 11-12NOON  \n");
                           			}			

         
                        		
                        		break;
                        	case 3:
                        		printf("Days available for 12-1PM are:\n");
	     									if (mondaySchedule[2]== 1)
	     	    							{ 	      	    
	     	      	    						printf("Monday\n");
	     	      	   						}
	     	      	    					 if (tuesdaySchedule[2] == 1){
	     	      	   	    				printf("Tuesday\n");
	     	      	    					}
	     	      	    					 if (wednesdaySchedule[2] == 1){     	      	   	
	     	      	   	    				printf("Wednesday\n");
	     	      	   						}
	     	      	    					if (thursdaySchedule[2] == 1){
	     	      	   	    				printf("Thursday\n");
	     	      	    					}
	     	      	    					 if (fridaySchedule[2] == 1){
	     	      	    					printf("Friday\n");
	     	    							}
	     	    				printf("Enter your preferred day:\n");
	     						scanf("%s",fdays);

									if (strcmp(fdays, "Monday") == 1)
									{
                               			mondaySchedule[2] = 0;
                           				printf("Great. Your appointment is booked for Monday: 12-1PM \n");
                           			}
                           			else if (strcmp(fdays, "Tuesday") == 1)
                           			{
                               			tuesdaySchedule[2] = 0;
                           				printf("Great. Your appointment is booked for Tuesday: 12-1PM \n");
                           			}
                           			else if (strcmp(fdays, "Wednesday") == 1)
                           			{
                               			wednesdaySchedule[2] = 0;
                           				printf("Great. Your appointment is booked for wednesday: 12-1PM \n ");
                           			}	
                           			else if (strcmp(fdays, "Thursday") == 1)
                           			{

                              			 thursdaySchedule[2] = 0;
                           				printf("Great. Your appointment is booked for Thursday: 12-1PM \n ");
                           			}	
                           			else if (strcmp(fdays, "Friday") == 1)
                           			{
                           				  fridaySchedule[2] = 0;
                           				printf("Great. Your appointment is booked for Friday: 12-1PM  \n");
                           			}			

                        			    
                        		
                        		break;
                        	case 4:
                        		printf("Days available for 1-2PM are:\n");
	     						

	     	    							if (mondaySchedule[3]== 1)
	     	    							{ 	      	    
	     	      	    						printf("Monday\n");
	     	      	   						}
	     	      	    					 if (tuesdaySchedule[3] == 1){
	     	      	   	    				printf("Tuesday\n");
	     	      	    					}
	     	      	    					 if (wednesdaySchedule[3] == 1){     	      	   	
	     	      	   	    				printf("Wednesday\n");
	     	      	   						}
	     	      	    					 if (thursdaySchedule[3] == 1){
	     	      	   	    				printf("Thursday\n");
	     	      	    					}
	     	      	    					 if (fridaySchedule[3] == 1){
	     	      	    					printf("Friday\n");
	     	    							}
	     	    				printf("Enter your preferred day:\n");
	     						scanf("%s",fdays);

									if (strcmp(fdays, "Monday") == 1)
									{
                               			mondaySchedule[3] = 0;
                           				printf("Great. Your appointment is booked for Monday: 1-2PM \n");
                           			}
                           			else if (strcmp(fdays, "Tuesday") == 1)
                           			{
                               			tuesdaySchedule[3] = 0;
                           				printf("Great. Your appointment is booked for Tuesday: 1-2PM \n");
                           			}
                           			else if (strcmp(fdays, "Wednesday") == 1)
                           			{
                               			wednesdaySchedule[3] = 0;
                           				printf("Great. Your appointment is booked for wednesday: 1-2PM \n ");
                           			}	
                           			else if (strcmp(fdays, "Thursday") == 1)
                           			{

                              			 thursdaySchedule[3] = 0;
                           				printf("Great. Your appointment is booked for Thursday: 1-2PM \n ");
                           			}	
                           			else if (strcmp(fdays, "Friday") == 1)
                           			{
                           				  fridaySchedule[3] = 0;
                           				printf("Great. Your appointment is booked for Friday: 1-2PM \n ");
                           			}			
                        			    
                        		
                        		break;
                        	case 5:
                        		printf("Days available for 2-3PM are:\n");
	     						
											if (mondaySchedule[4]== 1)
	     	    							{ 	      	    
	     	      	    						printf("Monday\n");
	     	      	   						}
	     	      	    					 if (tuesdaySchedule[4] == 1){
	     	      	   	    				printf("Tuesday\n");
	     	      	    					}
	     	      	    					 if (wednesdaySchedule[4] == 1){     	      	   	
	     	      	   	    				printf("Wednesday\n");
	     	      	   						}
	     	      	    					 if (thursdaySchedule[4] == 1){
	     	      	   	    				printf("Thursday\n");
	     	      	    					}
	     	      	    					 if (fridaySchedule[4] == 1){
	     	      	    					printf("Friday\n");
	     	    							}
	     	    				printf("Enter your preferred day:\n");
	     						scanf("%s",fdays);

									if (strcmp(fdays, "Monday") == 1)
									{
                               			mondaySchedule[4] = 0;
                           				printf("Great. Your appointment is booked for Monday: 2-3PM \n");
                           			}
                           			else if (strcmp(fdays, "Tuesday") == 1)
                           			{
                               			tuesdaySchedule[4] = 0;
                           				printf("Great. Your appointment is booked for Tuesday: 2-3PM \n ");
                           			}
                           			else if (strcmp(fdays, "Wednesday") == 1)
                           			{
                               			wednesdaySchedule[4] = 0;
                           				printf("Great. Your appointment is booked for wednesday: 2-3PM \n ");
                           			}	
                           			else if (strcmp(fdays, "Thursday") == 1)
                           			{

                              			 thursdaySchedule[4] = 0;
                           				printf("Great. Your appointment is booked for Thursday: 2-3PM \n");
                           			}	
                           			else if (strcmp(fdays, "Friday") == 1)
                           			{
                           				  fridaySchedule[4] = 0;
                           				printf("Great. Your appointment is booked for Friday: 2-3PM \n ");
                           			}			
                        			    
                        		
                        		break;
                        	case 6:
                        		printf("Days available for 3-4PM are:\n\n");
	     						

	     	    							if (mondaySchedule[5]== 1)
	     	    							{ 	      	    
	     	      	    						printf("Monday\n");
	     	      	   						}
	     	      	    					 if (tuesdaySchedule[5] == 1){
	     	      	   	    				printf("Tuesday\n");
	     	      	    					}
	     	      	    					 if (wednesdaySchedule[5] == 1){     	      	   	
	     	      	   	    				printf("Wednesday\n");
	     	      	   						}
	     	      	    					 if (thursdaySchedule[5] == 1){
	     	      	   	    				printf("Thursday\n");
	     	      	    					}
	     	      	    					 if (fridaySchedule[5] == 1){
	     	      	    					printf("Friday\n");
	     	    							}
	     	    				printf("Enter your preferred day:\n");
	     						scanf("%s",fdays);

									if (strcmp(fdays, "Monday") == 1)
									{
                               			mondaySchedule[5] = 0;
                           				printf("Great. Your appointment is booked for Monday: 3-4PM \n");
                           			}
                           			else if (strcmp(fdays, "Tuesday") == 1)
                           			{
                               			tuesdaySchedule[5] = 0;
                           				printf("Great. Your appointment is booked for Tuesday: 3-4PM\n ");
                           			}
                           			else if (strcmp(fdays, "Wednesday") == 1)
                           			{
                               			wednesdaySchedule[5] = 0;
                           				printf("Great. Your appointment is booked for wednesday: 3-4PM \n ");
                           			}	
                           			else if (strcmp(fdays, "Thursday") == 1)
                           			{

                              			 thursdaySchedule[5] = 0;
                           				printf("Great. Your appointment is booked for Thursday: 3-4PM \n");
                           			}	
                           			else if (strcmp(fdays, "Friday") == 1)
                           			{
                           				  fridaySchedule[5] = 0;
                           				printf("Great. Your appointment is booked for Friday: 3-4PM \n");
                           			}			
                        			    
                        		
                        		break;

	     						}}
	     			
	     	 			j = 1;  // message stars            	
             			while (j<=5)
             			{
                   		 i = 1;

                    	a = 1;

                		while (i<=j)
                		{
                    		printf("*");
                     		i = i + 1;
                		}  

                		if ( j<= 1)
                		{
                			printf("                                                     ");
                		}
                		else if ( j<= 2)
                		{
                			printf("                                                   ");
                		}
                		else if ( j<= 3)
                		{
                			printf("                                                 ");
                		}
               			else if ( j<= 4)
               			{
                			printf("                                               ");
                		}
               			 else 
               			 {
                			printf(" Thanks you for visiting Dr . E Musk's office");
               			 }
                		while (a<=j)
               			 {
                			printf("*");
                        a = a + 1;
                		}
                  		j = j + 1;
                		printf("\n");
                         }}
	    		 	  
        if( menu == 2) 
        {
        	printf("FOR OFFICE USE ONLY:\n\n"); // schedule 
            printf("CURRENT SCHEDULE Is:\n\n");
            printf("         10-11AM      11-12NOON    12-1PM        1-2PM        2-3PM        3-4PM\n");
			printf("Mon        ");

			for (i=0; i<row; i++)
			{
				printf("%d            ", mondaySchedule[i]);
			}
			printf("\n");
			printf("Tue        ");

			for (i=0; i<row; i++)
			{
				printf("%d            ", tuesdaySchedule[i]);
			}

			printf("\n");
			printf("wed        ");

			for (i=0; i<row; i++)
				{
					printf("%d            ", wednesdaySchedule[i]);
				}

			printf("\n");		    
			printf("Thu        ");

			for (i=0; i<row; i++)
				{
					printf("%d            ", thursdaySchedule[i]);
				}

			printf("\n");
			printf("Fri        ");

			for (i=0; i<row; i++)
				{
					printf("%d            ", fridaySchedule [i]);
				}
			printf("\n\n\n");

			printf("Please choose one of the following options:\n\n");
			printf("1. Display the day(s) with maximum number of available spots\n");
			printf("2. Display the time-slot(s) with maximum number of available spots\n");
			printf("3. Display how many days have more than 2 available spots.\n");
			printf("4. None of the above – Exit the program\n\n");
			printf("Enter your choice here:\n\n");
			scanf("%d",&choice);
				if(choice == 2) //Display the time-slot(s) with maximum number of available spots
				{
					maxSlots=0;
					for(i=0; i<6;i++)
					{
						if( mondaySchedule[i] == 0)
						{
							maxSlots= maxSlots + 1;
						}
                    }
                    for(i=0; i<6;i++)
					{
							
						if( tuesdaySchedule[i] == 0)
						{
							maxSlots= maxSlots +1;
					    }
					}	
					for(i=0; i<6;i++)
					{		
						if( wednesdaySchedule[i] == 0)
						{
							maxSlots= maxSlots +1;
						}	
					}
						
					for(i=0; i<6;i++)
					{		
						if( thursdaySchedule[i] == 0)
						{
							maxSlots= maxSlots +1;
						
						}
					}
					for(i=0; i<6;i++)
					{	
						if( fridaySchedule[i] == 0)
						{
							maxSlots= maxSlots +1;
						
						}
				 			
				 	}
				 		printf("Maximum number of available slots = %d\n", maxSlots);
				 	
                 }
                 if(choice ==1 ) //Display the day(s) with maximum number of available spots
                 {
                 	printf("Day(s) with maximum number of available spots are:\n");
                 	for(i=0; i<6;i++)
					{
						if( mondaySchedule[i] == 0)
						{
							monMax= maxMonday + 1;

						}
                    }
                    for(i=0; i<6;i++)
					{
							
						if( tuesdaySchedule[i] == 0)
						{
							tuesMax= tuesMax +1;
					    }
					}	
					for(i=0; i<6;i++)
					{		
						if( wednesdaySchedule[i] == 0)
						{
							wednesMax= wednesMax +1;
						}	
					}
						
					for(i=0; i<6;i++)
					{		
						if( thursdaySchedule[i] == 0)
						{
							ThursMax= ThursMax +1;
						
						}
					}
					for(i=0; i<6;i++)
					{	
						if( fridaySchedule[i] == 0)
						{
							maxFriday= maxFriday +1;
						
						}
				 	

				 	}

				 	  sum=(monMax+tuesMax+wednesMax+ThursMax+FriMax)/5;
				 	if( monMax > sum)
				 	{
				 		printf(" Monday\n ");
				 	}
				 	if( tuesMax > sum)
				 	{
				 		printf(" Tuesday\n ");
				 	}
				 	if( wednesMax > sum)
				 	{
				 		printf(" wednesday\n ");
				 	}
				 	if( ThursMax > sum)
				 	{
				 		printf("Thursday\n ");
				 	}
				 	if( FriMax > sum)
				 	{
				 		printf(" Friday\n ");
				 	}


                 }
                if(choice == 3 )// Display how many days have more than 2 available spots.
                 {  
                 	for(i=0; i<6;i++)
					{
						if( mondaySchedule[i] == 0)
						{
							maxMonday= maxMonday + 1;

						}
                    }

                    if( maxMonday > 2)
				 	{
				 		printf(" Monday\n ");
				 	}

                    for(i=0; i<6;i++)
					{
							
						if( tuesdaySchedule[i] == 0)
						{
							maxTuesday= maxTuesday +1;
					    }
					}

					if( maxTuesday > 2)
				 	{
				 		printf(" Tuesday\n ");
				 	}

					for(i=0; i<6;i++)
					{		
						if( wednesdaySchedule[i] == 0)
						{
							maxWednesday= maxWednesday +1;
						}	
					}
					if( maxWednesday > 2)
				 	{
				 		printf(" wednesday\n ");
				 	}	
						
					for(i=0; i<6;i++)
					{		
						if( thursdaySchedule[i] == 0)
						{
							maxThursday= maxThursday +1;
						
						}
					}

					if( maxThursday > 2)
				 	{
				 		printf(" Thursday\n ");
				 	}

					for(i=0; i<6;i++)
					{	
						if( fridaySchedule[i] == 0)
						{
							maxFriday= maxFriday +1;
						
						}
					}	
					if( maxFriday > 2)
				 	{
				 		printf(" Friday\n ");	
                 	
                 	}

                } 	

                 if( choice == 4)// Exit the program
                 {
                 	exit(0);
                 }              	
	        

return 0;
}
}	     		


 








	     	    				
