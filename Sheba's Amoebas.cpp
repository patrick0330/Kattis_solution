#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    char arr[a][b];
    int visited[a][b];
    for(int i = 0;i < a;i++){
        for(int j = 0;j < b;j++){
            cin >> arr[i][j];
            visited[i][j] = 0;
        }
    }
//    for(int i = 0;i < a;i++){
//        for(int j = 0;j < b;j++){
//            cout << arr[i][j] << " ";
//            //cout << visited[i][j] << " ";
//        }
//        cout << endl;
//    }
    int loop_count = 0;
    for(int i = 0;i < a;i++){
        for(int j = 0;j < b;j++){
            if(arr[i][j] == '.'){
                visited[i][j] == 1;
                continue;
            }
            else{
                if(visited[i][j] == 1){
                    continue;
                }
                loop_count ++;
                //cout << "loop count is " << loop_count << endl;
                visited[i][j] = 1;
                int row = i,col = j;
                while(1){
                    //cout << "row is " << row << " // col is " << col << endl;
                    if(row - 1 >= 0 && col - 1 >= 0 && arr[row - 1][col - 1] == '#' && visited[row - 1][col - 1] == 0){//up left
                        visited[row - 1][col - 1] = 1;
                        row --;
                        col --;
                    }
                    else if(row - 1 >= 0 && col + 1 < b && arr[row - 1][col + 1] == '#' && visited[row - 1][col + 1] == 0){//up right
                        visited[row - 1][col + 1] = 1;
                        row --;
                        col ++;
                    }
                    else if(row - 1 >= 0 && arr[row - 1][col] == '#' && visited[row - 1][col] == 0){//up
                        visited[row - 1][col] = 1;
                        row --;
                    }
                    else if(col - 1 >= 0 && arr[row][col - 1] == '#' && visited[row][col - 1] == 0){//left
                        visited[row][col - 1] = 1;
                        col --;
                    }
                    else if(col + 1 < b && arr[row][col + 1] == '#' && visited[row][col + 1] == 0){//right
                        visited[row][col + 1] = 1;
                        col ++;
                    }
                    else if(row + 1 < a && col - 1 >= 0 && arr[row + 1][col - 1] == '#' && visited[row + 1][col - 1] == 0){//down left
                        visited[row + 1][col - 1] = 1;
                        row ++;
                        col --;
                    }
                    else if(row + 1 < a && arr[row + 1][col] == '#' && visited[row + 1][col] == 0){//down
                        visited[row + 1][col] = 1;
                        row ++;
                    }
                    else if(row + 1 < a && col + 1 < b && arr[row + 1][col + 1] == '#' && visited[row + 1][col + 1] == 0){//down right
                        visited[row + 1][col + 1] = 1;
                        row ++;
                        col ++;
                    }
                    else{
                        break;
                    }

                }
            }
        }
    }
    cout << loop_count << endl;
    return 0;
}
