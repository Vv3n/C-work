#include <stdio.h>
int main(){
    int N, i;
    int studentId, score, totalClasses, absentClasses;
    float attendancePercent;
    int passCount = 0;
    int failCount = 0;

    printf("Please enter number of student:");
    if(scanf("%d", &N) != 1){
        return 1;
    }

    for(i = 0; i < N; i++){
        printf("Fills ID,Score,TotalClasses and absent\n");
        if(scanf("%d %d %d %d", &studentId, &score, &totalClasses, &absentClasses) != 4){
            break;
        }

        attendancePercent = (float)(totalClasses - absentClasses) / totalClasses * 100.0;

        if(score >= 50 && attendancePercent >= 75){
            passCount++;
            printf("Student %d: PASS\n", studentId);
        }
        else if(score >= 50){
            failCount++;
            printf("Student %d: FAIL-Low Attendance (70.00 Percent)\n", studentId);
        }
        else if(attendancePercent >= 75){
            failCount++;
            printf("Student %d: FAIL-Low Score\n", studentId);
        }
        else{
           failCount++;
           printf("Student %d: FAIL-Both Score and Attendance\n", studentId);
        }

    }

    printf("\n--- Summary ---\n");
    printf("Total PASS: %d\n", passCount);
    printf("Total FAIL: %d\n", failCount);
    return 0;
}