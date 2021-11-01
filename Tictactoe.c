#include <stdio.h>

int main()
{
    int arr[10];
    int input, user1 = 1, user2 = 2, n, start = 1, thanks;
    while (start == 1)
    {
        printf("Do you want to play game ::->1 \nDo you want to quit the game ::-> 2\nDo you want to clear history --> 3\n ::>>>");
        scanf("%d", &input);
        if (input == 1 || input == 2 || input == 3)
        {
            break;
        }
        else
        {
            printf("You pressed wrong key\n");
        }
    }
    if (input == 3)
    {
        printf("Cleared history.txt\n");
    }
      FILE *ptr;
    ptr = fopen("History.txt", "w");
    if (input == 1)
    {
        for (int j = 0; j < 9; j++)
        {
            arr[j] = 0;
        }
        for (int i = 0; i < 6; i++)
        {
            if (i==5)
            {
                printf("No one wins match get tied \nplay again!\n");
                fprintf(ptr,"No one wins match get tied \nplay again!");
            }
            
            printf("%d|%d|%d\n%d|%d|%d\n%d|%d|%d\n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8]);
            if(i>0){fprintf(ptr, "This is result of tearm %d user 2*** \n%d|%d|%d\n%d|%d|%d\n%d|%d|%d\n",i, arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8]);}
            if (i < 5)
            {
                printf("Where do want 1 ::-user 1 ::->");
                scanf("%d", &n);
                if(arr[n-1]!=0){
                    int repeat =2;
                    while (repeat==2)
                    {n=0;
                    printf("Enter another number (This number is used before by you or another player)\n");
                    scanf("%d",&n);
                    if(arr[n-1]==0){break;}
                    else{continue;}
                    }
                }
                arr[n - 1] = user1;
                if (arr[0] * arr[1] * arr[2] == 1 || arr[0] * arr[3] * arr[6] == 1 || arr[0] * arr[4] * arr[8] == 1 || arr[2] * arr[5] * arr[8] == 1 || arr[2] * arr[4] * arr[6] == 1 || arr[6] * arr[7] * arr[8] == 1 || arr[1] * arr[4] * arr[7] == 1 || arr[3] * arr[4] * arr[5] == 1)
                {
                    printf("User 1 won the match");
                    break;
                }
                else if (arr[0]*arr[1]*arr[2] == 8|| arr[0]*arr[3]*arr[6] == 8 || arr[0]*arr[4]*arr[8] ==8|| arr[2]*arr[5]*arr[8] == 8 || arr[2]*arr[4]*arr[6] ==8 || arr[6]*arr[7]*arr[8] == 8||arr[1]+arr[5]+arr[7]==8||arr[3]+arr[4]+arr[5]==8)
                {
                    printf("User 1 won the match");
                    break;
                }
                printf("%d|%d|%d\n%d|%d|%d\n%d|%d|%d\n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8]);
                fprintf(ptr, "This is result of tearm  %d of user 1***\n%d|%d|%d\n%d|%d|%d\n%d|%d|%d\n",i+1, arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8]);
                printf("Where do want 2 ::-user 2 ::->");
                scanf("%d", &n);
                if(arr[n-1]!=0){
                    int repeat =0;
                    while (repeat==0)
                    {n=0;
                    printf("Enter another number (This number is used before by you or another player)\n");
                    scanf("%d",&n);
                    if(arr[n-1 ==0]){break;}
                    else{continue;}
                    }
                }
                arr[n - 1] = user2;
                if (arr[0] * arr[1] * arr[2] == 1 || arr[0] * arr[3] * arr[6] == 1 || arr[0] * arr[5] * arr[8] == 1 || arr[2] * arr[5] * arr[8] == 1 || arr[2] * arr[4] * arr[6] == 1 || arr[6] * arr[7] * arr[8] == 1)
                {
                    printf("User 2 won the match");
                    break;
                }
                else if (arr[0]*arr[1]*arr[2] == 8|| arr[0]*arr[3]*arr[6] == 8 || arr[0]*arr[5]*arr[8] ==8|| arr[2]*arr[5]*arr[8] == 8 || arr[2]*arr[4]*arr[6] ==8 || arr[6]*arr[7]*arr[8] == 8||arr[1]+arr[5]+arr[7]==8||arr[3]+arr[4]+arr[5]==8)
                {
                    printf("User 2 won the match");
                    break;
                }
            }
        }
    }
    else
    {
        printf(" \n ***Thanks for opning this amaizng game*** \n");
        thanks = 1;
    }
    if (thanks != 1)
    {
         printf("Cheak The history in history.txt\n");
        printf("***Thanks for opning this amaizng game*** \n");
        fprintf(ptr, "\n ***Thanks for opning this amaizng game*** \n");
    }
    fclose;
    return 0;
}
