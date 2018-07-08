#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    int a;
    
    bool c[8];
    int top_cnt, bottom_cnt;
    
    int min, max;
    
    //初期化
    for (int i = 0; i < 8; i++) {
        c[i] = false;
    }
    top_cnt = bottom_cnt = 0;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        
        if (a >= 1 && a < 400) {                //灰色
            //この色の人がまだいない場合
            if (c[0] == false) {
                bottom_cnt++;
                c[0] = true;
            }
        }else if(a >= 400 && a < 800){          //茶色
            //この色の人がまだいない場合
            if (c[1] == false) {
                bottom_cnt++;
                c[1] = true;
            }
        }else if(a >= 800 && a < 1200){         //緑色
            //この色の人がまだいない場合
            if (c[2] == false) {
                bottom_cnt++;
                c[2] = true;
            }
        }else if(a >= 1200 && a < 1600){        //水色
            //この色の人がまだいない場合
            if (c[3] == false) {
                bottom_cnt++;
                c[3] = true;
            }
        }else if(a >= 1600 && a < 2000){        //青色
            //この色の人がまだいない場合
            if (c[4] == false) {
                bottom_cnt++;
                c[4] = true;
            }
        }else if(a >= 2000 && a < 2400){        //黄色
            //この色の人がまだいない場合
            if (c[5] == false) {
                bottom_cnt++;
                c[5] = true;
            }
        }else if(a >= 2400 && a < 2800){        //橙色
            //この色の人がまだいない場合
            if (c[6] == false) {
                bottom_cnt++;
                c[6] = true;
            }
        }else if(a >= 2800 && a < 3200){        //赤色
            //この色の人がまだいない場合
            if (c[7] == false) {
                bottom_cnt++;
                c[7] = true;
            }
        }else{                                  //上記の色以外の場合
            top_cnt++;
        }
    }
    

    min = bottom_cnt;
    max = bottom_cnt + top_cnt;
    if (bottom_cnt == 0 && top_cnt > 0) {
        min = 1;
    }
    //syuturyoku
    cout << min << ' ' << max << endl;
    
    return 0;
}
