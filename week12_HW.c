#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    char map[12][12];
    int i,j;
    for(i=0;i<12;i++){
        for(j=0;j<12;j++) map[i][j]='/';;
    }
    for(i=1;i<11;i++){
        for(j=1;j<11;j++) map[i][j]='.';
    }
    map[1][1]='A';
    int x=1,y=1,dir;
    srand(time(NULL));
    for(i=66;i<91;i++){
        if(map[x+1][y]!='.' && map[x-1][y]!='.' && map[x][y+1]!='.' && map[x][y-1]!='.') break;
        dir=rand()%4;
        while(1){
            int temp_x=x,temp_y=y;
            if(dir==0) temp_y=y-1;
            else if(dir==1) temp_x=x+1;
            else if(dir==2) temp_y=y+1;
            else temp_x=x-1;
            if(temp_x<1 || temp_x>10 ||temp_y<1 || temp_y>10 || map[temp_x][temp_y]!='.'){
                dir=(dir+1)%4;
                continue;
            }
            else{
                printf("x:%d\ny:%d\n",temp_x,temp_y);
                x=temp_x;
                y=temp_y;
                break;
            }
        }
        map[x][y]=(char)i;
    }
    
    for(i=1;i<11;i++){
        for(j=1;j<11;j++){ 
            printf("%c ",map[i][j]);
        }
        printf("\n");
    }
}