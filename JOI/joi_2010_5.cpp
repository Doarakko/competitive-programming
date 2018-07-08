#include <iostream>
#include <vector>
#include <queue>
using namespace std;


void search_startPoint();
void d_initialization();
void bfs(int fctry);
void d_display();
void maze_display();

int H, W, N;

string s;
vector<string> maze;

//(first, second) = (x, y)
//s_p = スタート地点
//c_p = 現在地
//n_p = 移動予定地
pair<int, int> s_p, c_p, n_p;

//移動時間
int d[1000][1000];

int ans;

int main(int argc, const char * argv[]) {
    //初期化
    ans = 0;
    
    //入力
    cin >> H >> W >> N;
    for (int i = 0; i < H; i++) {
        cin >> s;
        maze.push_back(s);
    }
    //スタート地点探索
    search_startPoint();
    //d初期化
    d_initialization();
    //cout << s_p.first << ' ' << s_p.second << endl;
    
    //1~Nの工場巡り
    for (int i = 1; i <= N; i++) {
        //幅優先探索
        bfs(i);
        //cout << ans << endl;
    }
    cout << ans << endl;
    
    return 0;
}

//スタート地点探索
void search_startPoint(){
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (maze[i][j] == 'S') {
                s_p.first = j;
                s_p.second = i;
            }
        }
    }
}

//d初期化
void d_initialization(){
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            d[i][j] = - 1;
        }
    }
}

//幅優先探索
void bfs(int fctry){
    char goal, etc;
    bool flag;
    //上下左右
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};
    queue<pair<int, int>> q;
    
    //初期化
    while (q.size()) {
        q.pop();
    }
    flag = false;
    goal = fctry + '0';
    etc = fctry - 1 + '0';
    //d初期化
    d_initialization();

    
    //スタート地点をセット
    q.push(s_p);
    d[s_p.second][s_p.first] = 0;
    //cout << s_p.first << ' ' << s_p.second << endl;
    
    //幅優先探索
    while (!flag && q.size()) {
//        d_display();
//        maze_display();
        
        c_p = q.front();
        if (maze[c_p.second][c_p.first] == '.') {
            maze[c_p.second][c_p.first] = etc;
        }
        q.pop();
        
        for (int j = 0; j < 4; j++) {
            n_p.first = c_p.first + dx[j];
            n_p.second = c_p.second + dy[j];
            //範囲内
            //番兵に変更するべき
            if (n_p.second >= 0 && n_p.second < H && n_p.first >= 0 && n_p.first < W){
                if (maze[n_p.second][n_p.first] == goal) {           //工場iの場合
                    ans += d[c_p.second][c_p.first] + 1;
                    //次の工場へのスタート地点
                    s_p = n_p;
                    flag = true;
                }else if (maze[n_p.second][n_p.first] != 'X' && maze[n_p.second][n_p.first] != etc && d[n_p.second][n_p.first] == - 1) {         //移動可能
                    d[n_p.second][n_p.first] = d[c_p.second][c_p.first] + 1;
                    q.push(n_p);
                }
            }
        }
    }
}

void maze_display(){
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cout << maze[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

void d_display(){
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cout << d[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;
}
