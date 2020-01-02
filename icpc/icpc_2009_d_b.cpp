#include <iostream>
using namespace std;

int w, h;
int a[50][50]={};

void dfs(int x, int y);

int main(int argc, const char * argv[]) {
    int cnt;
    
    while (cin >> w >> h, w || h) {
        //初期化
        cnt = 0;
        
        //入力
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                cin >> a[i][j];
            }
        }
        //深さ優先探索
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (a[i][j] == 1) {
                    cnt++;
                    dfs(j, i);
                }
            }
        }
        //出力
        cout << cnt << endl;
    }
    
    return 0;
}

//深さ優先探索
//8方向
int dx[8] = {0,0,1,1,1,-1,-1,-1};
int dy[8] = {1,-1,0,1,-1,0,1,-1};
void dfs(int x, int y){
    int px, py;
    
    //書き換え
    a[y][x] = 0;
    
    for (int i = 0; i < 8; i++) {
        px = x + dx[i];
        py = y + dy[i];
        //番兵に変更するべき
        if ( (px >= 0 && px <= w) && (py >= 0 && py <= h) ) {
            if(a[py][px] == 1){
                dfs(px, py);
            }
        }
    }
}

