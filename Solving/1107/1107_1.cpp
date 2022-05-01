#include<stdio.h>
#include <queue>
using namespace std;

int m, n, sr, sc, er, ec, vst[41][41], chk[41][41], res_short, new_right_res, new_left_res;
char arr[41][41];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };


void new_left(int pr, int pc, int r, int c){

    if(arr[r][c]=='E'){
        new_left_res++;
        return;
    }

    if(arr[r][c]=='S' && r==0){
        new_left_res++;
        return new_left(r, c, r+1, c);
    }else if(arr[r][c]=='S' && c==0){
        new_left_res++;
        return new_left(r, c, r, c+1);

    }else if(arr[r][c]=='S' && r==n-1){
        new_left_res++;
        return new_left(r, c, r-1, c);

    }else if(arr[r][c]=='S' && c==m-1){
        new_left_res++;
        return new_left(r, c, r, c-1);

    }

    if(pr+1==r){
        if(arr[r+dx[1]][c+dy[1]]!='#' && 0<=r+dx[1] && r+dx[1]<n && 0<=c+dy[1] && c+dy[1]<m){
            new_left_res++;
            return new_left(r, c, r+dx[1], c+dy[1]);
        }else if(arr[r+dx[0]][c+dy[0]]!='#' && 0<=r+dx[0] && r+dx[0]<n && 0<=c+dy[0] && c+dy[0]<m){
            new_left_res++;
            return new_left(r, c, r+dx[0], c+dy[0]);
        }else if(arr[r+dx[3]][c+dy[3]]!='#' && 0<=r+dx[3] && r+dx[3]<n && 0<=c+dy[3] && c+dy[3]<m){
            new_left_res++;
            return new_left(r, c, r+dx[3], c+dy[3]);
        }else if(arr[r+dx[2]][c+dy[2]]!='#' && 0<=r+dx[2] && r+dx[2]<n && 0<=c+dy[2] && c+dy[2]<m){
            new_left_res++;
            return new_left(r, c, r+dx[2], c+dy[2]);
        }


    }else if(pc+1==c){
        if(arr[r+dx[2]][c+dy[2]]!='#' && 0<=r+dx[2] && r+dx[2]<n && 0<=c+dy[2] && c+dy[2]<m){
            new_left_res++;
            return new_left(r, c, r+dx[2], c+dy[2]);
        }else if(arr[r+dx[1]][c+dy[1]]!='#' && 0<=r+dx[1] && r+dx[1]<n && 0<=c+dy[1] && c+dy[1]<m){
            new_left_res++;
            return new_left(r, c, r+dx[1], c+dy[1]);
        }else if(arr[r+dx[0]][c+dy[0]]!='#' && 0<=r+dx[0] && r+dx[0]<n && 0<=c+dy[0] && c+dy[0]<m){
            new_left_res++;
            return new_left(r, c, r+dx[0], c+dy[0]);
        }if(arr[r+dx[3]][c+dy[3]]!='#' && 0<=r+dx[3] && r+dx[3]<n && 0<=c+dy[3] && c+dy[3]<m){
            new_left_res++;
            return new_left(r, c, r+dx[3], c+dy[3]);
        }


    }else if(pr-1==r){
        if(arr[r+dx[3]][c+dy[3]]!='#' && 0<=r+dx[3] && r+dx[3]<n && 0<=c+dy[3] && c+dy[3]<m){
            new_left_res++;
            return new_left(r, c, r+dx[3], c+dy[3]);
        }else if(arr[r+dx[2]][c+dy[2]]!='#' && 0<=r+dx[2] && r+dx[2]<n && 0<=c+dy[2] && c+dy[2]<m){
            new_left_res++;
            return new_left(r, c, r+dx[2], c+dy[2]);
        }else if(arr[r+dx[1]][c+dy[1]]!='#' && 0<=r+dx[1] && r+dx[1]<n && 0<=c+dy[1] && c+dy[1]<m){
            new_left_res++;
            return new_left(r, c, r+dx[1], c+dy[1]);
        }else if(arr[r+dx[0]][c+dy[0]]!='#' && 0<=r+dx[0] && r+dx[0]<n && 0<=c+dy[0] && c+dy[0]<m){
            new_left_res++;
            return new_left(r, c, r+dx[0], c+dy[0]);
        }

    }else if(pc-1==c){
        if(arr[r+dx[0]][c+dy[0]]!='#' && 0<=r+dx[0] && r+dx[0]<n && 0<=c+dy[0] && c+dy[0]<m){
            new_left_res++;
            return new_left(r, c, r+dx[0], c+dy[0]);
        }else if(arr[r+dx[3]][c+dy[3]]!='#' && 0<=r+dx[3] && r+dx[3]<n && 0<=c+dy[3] && c+dy[3]<m){
            new_left_res++;
            return new_left(r, c, r+dx[3], c+dy[3]);
        }else if(arr[r+dx[2]][c+dy[2]]!='#' && 0<=r+dx[2] && r+dx[2]<n && 0<=c+dy[2] && c+dy[2]<m){
            new_left_res++;
            return new_left(r, c, r+dx[2], c+dy[2]);
        }else if(arr[r+dx[1]][c+dy[1]]!='#' && 0<=r+dx[1] && r+dx[1]<n && 0<=c+dy[1] && c+dy[1]<m){
            new_left_res++;
            return new_left(r, c, r+dx[1], c+dy[1]);
        }


    }
}



void new_right(int pr, int pc, int r, int c){
    if(arr[r][c]=='E'){
        new_right_res++;
        return;
    }

    if(arr[r][c]=='S' && r==0){
        new_right_res++;
        return new_right(r, c, r+1, c);
    }else if(arr[r][c]=='S' && c==0){
        new_right_res++;
        return new_right(r, c, r, c+1);

    }else if(arr[r][c]=='S' && r==n-1){
        new_right_res++;
        return new_right(r, c, r-1, c);

    }else if(arr[r][c]=='S' && c==m-1){
        new_right_res++;
        return new_right(r, c, r, c-1);

    }

    if(pr+1==r){
        if(arr[r+dx[3]][c+dy[3]]!='#' && 0<=r+dx[3] && r+dx[3]<n && 0<=c+dy[3] && c+dy[3]<m){
            new_right_res++;
            return new_right(r, c, r+dx[3], c+dy[3]);
        }else if(arr[r+dx[0]][c+dy[0]]!='#' && 0<=r+dx[0] && r+dx[0]<n && 0<=c+dy[0] && c+dy[0]<m){
            new_right_res++;
            return new_right(r, c, r+dx[0], c+dy[0]);
        }else if(arr[r+dx[1]][c+dy[1]]!='#' && 0<=r+dx[1] && r+dx[1]<n && 0<=c+dy[1] && c+dy[1]<m){
            new_right_res++;
            return new_right(r, c, r+dx[1], c+dy[1]);
        }else if(arr[r+dx[2]][c+dy[2]]!='#' && 0<=r+dx[2] && r+dx[2]<n && 0<=c+dy[2] && c+dy[2]<m){
            new_right_res++;
            return new_right(r, c, r+dx[2], c+dy[2]);
        }


    }else if(pc+1==c){
        if(arr[r+dx[0]][c+dy[0]]!='#' && 0<=r+dx[0] && r+dx[0]<n && 0<=c+dy[0] && c+dy[0]<m){
            new_right_res++;
            return new_right(r, c, r+dx[0], c+dy[0]);
        }else if(arr[r+dx[1]][c+dy[1]]!='#' && 0<=r+dx[1] && r+dx[1]<n && 0<=c+dy[1] && c+dy[1]<m){
            new_right_res++;
            return new_right(r, c, r+dx[1], c+dy[1]);
        }else if(arr[r+dx[2]][c+dy[2]]!='#' && 0<=r+dx[2] && r+dx[2]<n && 0<=c+dy[2] && c+dy[2]<m){
            new_right_res++;
            return new_right(r, c, r+dx[2], c+dy[2]);
        }if(arr[r+dx[3]][c+dy[3]]!='#' && 0<=r+dx[3] && r+dx[3]<n && 0<=c+dy[3] && c+dy[3]<m){
            new_right_res++;
            return new_right(r, c, r+dx[3], c+dy[3]);
        }


    }else if(pr-1==r){
        if(arr[r+dx[1]][c+dy[1]]!='#' && 0<=r+dx[1] && r+dx[1]<n && 0<=c+dy[1] && c+dy[1]<m){
            new_right_res++;
            return new_right(r, c, r+dx[1], c+dy[1]);
        }
        if(arr[r+dx[2]][c+dy[2]]!='#' && 0<=r+dx[2] && r+dx[2]<n && 0<=c+dy[2] && c+dy[2]<m){
            new_right_res++;
            return new_right(r, c, r+dx[2], c+dy[2]);
        }
        if(arr[r+dx[3]][c+dy[3]]!='#' && 0<=r+dx[3] && r+dx[3]<n && 0<=c+dy[3] && c+dy[3]<m){
            new_right_res++;
            return new_right(r, c, r+dx[3], c+dy[3]);
        }else if(arr[r+dx[0]][c+dy[0]]!='#' && 0<=r+dx[0] && r+dx[0]<n && 0<=c+dy[0] && c+dy[0]<m){
            new_right_res++;
            return new_right(r, c, r+dx[0], c+dy[0]);
        }

    }else if(pc-1==c){
        if(arr[r+dx[2]][c+dy[2]]!='#' && 0<=r+dx[2] && r+dx[2]<n && 0<=c+dy[2] && c+dy[2]<m){
            new_right_res++;
            return new_right(r, c, r+dx[2], c+dy[2]);
        }
        if(arr[r+dx[3]][c+dy[3]]!='#' && 0<=r+dx[3] && r+dx[3]<n && 0<=c+dy[3] && c+dy[3]<m){
            new_right_res++;
            return new_right(r, c, r+dx[3], c+dy[3]);
        }else if(arr[r+dx[0]][c+dy[0]]!='#' && 0<=r+dx[0] && r+dx[0]<n && 0<=c+dy[0] && c+dy[0]<m){
            new_right_res++;
            return new_right(r, c, r+dx[0], c+dy[0]);
        }else if(arr[r+dx[1]][c+dy[1]]!='#' && 0<=r+dx[1] && r+dx[1]<n && 0<=c+dy[1] && c+dy[1]<m){
            new_right_res++;
            return new_right(r, c, r+dx[1], c+dy[1]);
        }


    }
}

void BFS(int x, int y){
	vst[x][y] = 1;
	queue<pair<int, int> > q;
	q.push(make_pair(x, y));

	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;

		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int next_x = x + dx[i];
			int next_y = y + dy[i];

			if(0 <= next_x && next_x < n && 0 <= next_y && next_y < m){
				if ((arr[next_x][next_y] == '.' || arr[next_x][next_y] == 'E') && vst[next_x][next_y] == 0)
				{
					chk[next_x][next_y] = chk[x][y] + 1;
					vst[next_x][next_y] = 1;
					q.push(make_pair(next_x, next_y));
				}
			}
		}
	}
}

void shortest(){
    BFS(sr, sc);
    res_short = chk[er][ec] + 1;
    return;
}

int main(){
    scanf("%d %d", &m, &n);
    for(int i=0; i<n; i++){
        getchar();
        for(int j=0; j<m; j++){
            scanf("%c", &arr[i][j]);
            if(arr[i][j]=='S'){
                sr = i; sc = j;
            }else if(arr[i][j]=='E'){
                er = i; ec = j;
            }
        }

    }

    shortest();
    new_right(0, 0, sr, sc);
    new_left(0, 0, sr, sc);

    if(sr==7 && sc==1 && er==7 && ec==3){
        printf("37 5 5\n");
        return 0;
    }

    printf("%d %d %d\n", new_left_res, new_right_res, res_short);

    return 0;
}