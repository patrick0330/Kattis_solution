#include <bits/stdc++.h>

using namespace std;

int main()
{
    int bsize;
    cin >> bsize;
    vector<string> board(bsize);
    bool correct = true;
    for(int i = 0;i < bsize;i++){
        cin >> board[i];
    }
    for(int i = 0;i < bsize;i++){
        int totalb = 0,totalw = 0,rowcount = 1;
        int c = 'p';
        for(int j = 0; j < bsize; j++){
    		if(board[i][j] == 'W'){
    			totalw++;
    		}
    		else{
    			totalb++;
    		}

    		if(c != board[i][j]){
    			c = board[i][j];
                rowcount = 1;
    		}
    		else{
    			rowcount++;
    			if(rowcount >= 3)
    			{
    				correct = false;
    			}
    		}
        }
        if(totalw != totalb){
            correct = false;
        }
    }

    for(int i = 0;i < bsize;i++){
        int totalb = 0,totalw = 0,rowcount = 1;
        int c = 'p';
        for(int j = 0; j < bsize; j++){
    		if(board[j][i] == 'W'){
    			totalw++;
    		}
    		else{
    			totalb++;
    		}

    		if(c != board[j][i]){
    			c = board[j][i];
                rowcount = 1;
    		}
    		else{
    			rowcount++;
    			if(rowcount >= 3)
    			{
    				correct = false;
    			}
    		}
        }
        if(totalw != totalb){
            correct = false;
        }
    }
    cout << correct << endl;
    return 0;
}
