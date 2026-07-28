/*Selection of MPCS exams include a fitness test which is conducted on ground. There will be a batch of 3 trainees, appearing for running test in track for 3 rounds. You need to record their oxygen level after every round. After trainee are finished with all rounds, calculate for each trainee his average oxygen level over the 3 rounds and select one with highest oxygen level as the most fit trainee. If more than one trainee attains the same highest average level, they all need to be selected.
Display the most fit trainee (or trainees) and the highest average oxygen level.
Note:
•	The oxygen value entered should not be accepted if it is not in the range between 1 and 100.
•	If the calculated maximum average oxygen value of trainees is below 70 then declare the trainees as unfit with meaningful message as “All trainees are unfit.
•	Average Oxygen Values should be rounded.
Example 1:
INPUT VALUES
95
92
95
92
90
92
90
92
90
OUTPUT VALUES
Trainee Number : 1
Trainee Number : 3*/



#include<stdio.h>
int main()
{
    int oxy[3][3];
    int i, j;
    float avg[3];
    float max = 0;
    printf("Enter oxygen levels:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &oxy[i][j]);
            if(oxy[i][j] < 1 || oxy[i][j] > 100)
            {
                printf("INVALID INPUT");
                return 0;
            }
        }
    }
    for(j=0; j<3; j++)
    {
        avg[j] = (oxy[0][j] + oxy[1][j] + oxy[2][j]) / 3.0;
        //printf("avg %d=%f\n",i+1,avg[i]);
        if(avg[j] > max)
            max = avg[j];
    }
    if(max < 70)
    {
        printf("All trainees are unfit");
    }
    else
    {
        for(j=0; j<3; j++)
        {
            if((int)(avg[j]+0.5) == (int)(max+0.5))
            {
                printf("Trainee Number : %d\n", j+1);
            }
        }
    }
    return 0;
}
