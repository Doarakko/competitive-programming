#include <iostream>
#include <vector>
using namespace std;

int main() {
    int M, N, K;
    string s;
    vector<string> map;
    int a, b, c, d;
    int j_ans, o_ans, i_ans;
    
    cin >> M >> N;
    int jungle[M][N+1], osean[M][N+1], ice[M][N+1];
    
    cin >> K;
    for (int i = 0; i < M; i++) {
        cin >> s;
        map.push_back(s);
    }
    
    //初期化
    for (int i = 0; i < M; i++) {
        for (int j = 0; j <= N; j++) {
            jungle[i][j] = osean[i][j] = ice[i][j] = 0;
        }
    }
    
    //累積和
    for (int i = 0; i < M; i++) {
        for (int j = 1; j <= N; j++) {
            if (map[i][j-1] == 'J') {                       //ジャングル
                jungle[i][j] = jungle[i][j-1] + 1;
                osean[i][j] = osean[i][j-1];
                ice[i][j] = ice[i][j-1];
            }else if(map[i][j-1] == 'O'){                   //海
                jungle[i][j] = jungle[i][j-1];
                osean[i][j] = osean[i][j-1] + 1;
                ice[i][j] = ice[i][j-1];
            }else if(map[i][j-1] == 'I'){                   //氷
                jungle[i][j] = jungle[i][j-1];
                osean[i][j] = osean[i][j-1];
                ice[i][j] = ice[i][j-1] + 1;
            }
        }
    }
     
    for (int i = 0; i < K; i++) {
        //初期化
        j_ans = o_ans = i_ans = 0;
        
        //入力
        cin >> a >> b >> c >> d;
        
        //1行ごとに足していく
        for (int j = a - 1; j < c; j++) {
            j_ans += (jungle[j][d] - jungle[j][b-1]);
            o_ans += (osean[j][d] - osean[j][b-1]);
            i_ans += (ice[j][d] - ice[j][b-1]);
        }
        //出力
        cout << j_ans << ' ' << o_ans << ' ' << i_ans << endl;
    }
    
    return 0;
}
