void spiralPrint(int **input, int nRows, int nCols)
{
    //Write your code here
    int top, down, left, right;
    top=0;
    down=nRows-1;
    left=0;
    right=nCols-1;
    int dir=0;
    
    while(top<=down && left<=right){
        //printing left to right
        if(dir==0){
            for(int i=left; i<=right; i++){
                cout << input[top][i] << ' ';
            }
            top++;
        }
        //printing top to down
        else if(dir==1){
            for(int i=top; i<=down; i++){
                cout << input[i][right] << ' ';
            }
            right--;
        }
        //printing right to left
        else if(dir==2){
            for(int i=right; i>=left; i--){
                cout << input[down][i] << ' ';
            }
            down--;
        }
        //printing down to top
        else if(dir==3){
            for(int i=down; i>=top; i--){
                cout << input[i][left] << ' ';
            }
            left++;
        }
        dir=(dir+1)%4;
    }
    
}