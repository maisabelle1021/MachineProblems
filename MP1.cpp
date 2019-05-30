#include <iostream>
#include <conio.h>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
	int numStudent=50;
	int i, j;
	string temp1, name[50];
	double temp2, EXP[numStudent], SKILLST[numStudent],MACHP[numStudent], PREL[numStudent], FIN[numStudent];
	double totalSK, totalMP, totalPREL, totalEXP, totalFIN, finGrade[numStudent], GPA[numStudent];
	
	for (i==0; i <numStudent; i++)
	{
		//all values equated to zero so that when the program loops, the values don't add to each other
		totalSK=0;
		totalMP=0;
		totalPREL=0;
		totalEXP=0;
		totalFIN=0;
		
		//input name of the students
		cout << "STUDENT NAME: "; cin >> name[i];
		
		//inputs 4 experiment scores
		//multiplies each score by 5% and adds all values together to get total Experiments score
		cout << "4 Experiments: ";
		for (j=1; j<=4; j++)
		{
			cin >> EXP[j];
			totalEXP += EXP[j]*0.05;
		}
		
		//input 4 skills tests scores
		//multiplies each score by 5% and adds all values together to get total Skills Test score
		cout << "4 Skills Tests: ";
		for (j=1; j<=4; j++)
		{
			cin >> SKILLST[j];	
			totalSK += SKILLST[j]*0.05;
		}
		
		//input 2 machine problems scores
		//multiplies each score entered by 10% and adds all values together to get total score for Machine Problems
		cout << "2 Machine Problems: ";
		for (j=1; j<=2; j++)
		{
			cin >> MACHP[j];
			totalMP += MACHP[j]*0.10;
		}
		
		//input written and practical exam scores for prelims
		//multiplies each score entered by 20% and adds all values together to get total score for Prelims exam
		cout << "Written & Practical Preliminary exams: ";
		for (j=1; j<=2; j++)
		{
			cin >> PREL[j];
			totalPREL += PREL[j]*0.20;
		}
		
		//input written and practical scores for finals
		//multiplies each score entered by 20% and adds all values together to get total sore for Finals
		cout << "Written & Practical Final exams: ";
		for (j=1; j<=2; j++)
		{
			cin >> FIN[j];
			totalFIN += FIN[j]*0.20;
	
		}
		
		//calculates raw grade by adding together all final scores
		finGrade[i] = totalEXP + totalSK + totalMP + totalPREL + totalFIN;
		
		cout << "FINAL = " << finGrade[i] << endl;;
		cout << endl;
 	}
 	
 	//determines transmuted grade of the student
 	for (i=0; i <numStudent; i++)
 	{
 		if (finGrade[i]>=60.00 && finGrade[i]<=64.44)
 		{
 			GPA[i] = 3.00;
		}
		else if (finGrade[i]>=64.45 && finGrade[i]<=68.89)
		{
			GPA[i] = 2.75;
		}
		else if (finGrade[i]>=68.90 && finGrade[i]<=73.33)
		{
			GPA[i] = 2.50;
		}
		else if (finGrade[i]>=73.34 && finGrade[i]<=77.78)
		{
			GPA[i] = 2.25;
		}
		else if (finGrade[i]>=77.79 && finGrade[i]<=82.22)
		{
			GPA[i] = 2.00;
		}
		else if (finGrade[i]>=82.23 && finGrade[i]<=86.67)
		{
			GPA[i] = 1.75;
		}
		else if (finGrade[i]>=86.68 && finGrade[i]<=91.11)
		{
			GPA[i] = 1.50;
		}
		else if (finGrade[i]>=91.12 && finGrade[i]<=95.56)
		{
			GPA[i] = 1.25;
		}
		else if (finGrade[i]>=95.57 && finGrade[i]<=100)
		{
			GPA[i] = 1.00;
		}
		else
		{
			GPA[i] = 5.00;
		}
	 }
	 
	 //outputs the name, final grade (raw), transmutated grade, and whether or not the student passed based on the transmutated grade
	 //table format
	 cout << "NAME" << "\t\t\t" << "FINAL GRADE" << "\t\t" <<  "TRANSMUTATED" << "\t\t" << "PASS/FAIL" << endl;
	 
	 for (i=0; i<numStudent; i++)
	 {
	 	if (GPA[i] <= 3.00)
	 	{
	 		cout << name[i];
			cout << "\t\t\t" << finGrade[i] << "\t\t\t" << GPA[i] << "\t\t\t" << "Pass" << endl;
	 	}
	 	else
	 	{
	 		cout << name[i];
			cout << "\t\t\t" << finGrade[i] << "\t\t\t" << GPA[i] << "\t\t\t" << "Fail" << endl;
	 	}
	 }
	 
	 //code to arrange the scores by lowest to highest
	 //since transmutated grade will be the basis, 1 is highest and 5 is lowest
	 for (i=0; i<numStudent; i++)
	 {
	 	for (j=i+1; j<numStudent; j++)
	 	{
	 		//arranges string array inputs depending on the arrangement of scores
	 		if (finGrade[i]<finGrade[j])
	 		{
	 			temp1 = name[i];
	 			name[i] = name[j];
	 			name[j] = temp1;
	 			
	 			temp2 = finGrade[i];
	 			finGrade[i] = finGrade[j];
	 			finGrade[j] = temp2;
			}
		 }
	 }
	 
	 //outputs the top 10 students of the class
	 cout << endl << endl;
	 cout << "TOP 10" << endl;
	 for (i=0; i<2; i++)
	 {
	 	cout << i+1 << ": " << name[i] << endl;
	 }
	 
	 getch();
	 return 0;
}
	


