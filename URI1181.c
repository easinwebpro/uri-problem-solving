#include <stdio.h>

int main() {

    int i, j, x, y;
    double arr[12][12], sum = 0.0;
    int length = 12;

    int line;
    char letter;
    scanf("%d %c", &line, &letter);

    
    for(i = 0; i < length; i++) {
        for(j = 0; j < length; j++)
            scanf("%lf", &arr[i][j]);
    }


    for (x = 0; x < length; x++) {
        if(line == x){
            for(y = 0; y < length; y++)
                sum += arr[x][y];
        }
    }
    
    if (letter == 'S') printf("%.1lf\n",sum);
    else printf("%.1lf\n",sum / 12.00);
    


    return 0;

}