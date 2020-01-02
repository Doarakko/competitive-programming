#include <iostream>
using namespace std;

int main() {
    int n;
    string s;
    int start, end;
    bool flag;
    
    //初期化
    start = -1;
    end = -1;
    flag = false;
    
    cin >> n >> s;
    int ans[n+1];
    
    //0:羊, 1:狼
    //0番目が羊の場合と, 狼の場合で2パターン
    for (int i = 0; i <= 1; i++) {
        //割り当てが存在する場合
        if(flag){
            break;
        }
        if(i == 0){         //羊の場合
            ans[0] = 0;
            start = 0;
        }else{              //狼の場合
            ans[0] = 1;
            start = 1;
        }
        //1番目が羊の場合と, 狼の場合で2パターン
        for (int j = 0; j <= 1; j++) {
            //割り当てが存在する場合
            if(flag){
                break;
            }
            if(ans[0] == 0){                //0番目が羊の場合
                if(s[0] == 'o'){            //両隣が同じ種類（ans[k-1] == ans[k+1]）
                    if(j == 0){
                        ans[1] = 0;         //1番目を羊へ
                        end = 0;            //最後を羊へ
                    }else{
                        ans[1] = 1;         //1番目を狼へ
                        end = 1;            //最後を狼へ
                    }
                }else{                      //両隣が異なる種類（ans[k-1] != ans[k+1]）
                    if(j == 0){
                        ans[1] = 0;         //1番目を羊へ
                        end = 1;            //最後を狼へ
                    }else{
                        ans[1] = 1;         //1番目を狼へ
                        end = 0;            //最後を羊へ
                    }
                }
            }else{                          //0番目が狼の場合
                if(s[0] == 'o'){            //両隣が同じ種類（ans[k-1] == ans[k+1]）
                    if(j == 0){
                        ans[1] = 0;         //1番目を羊へ
                        end = 1;            //最後を狼へ
                    }else{
                        ans[1] = 1;         //1番目を狼へ
                        end = 0;            //最後を羊へ
                    }
                }else{                      //両隣が異なる種類（ans[k-1] != ans[k+1]）
                    if(j==0){
                        ans[1] = 0;         //1番目を羊へ
                        end = 0;            //最後を羊へ
                    }else{
                        ans[1] = 1;         //1番目を狼へ
                        end = 1;            //最後を狼へ
                    }
                }
            }
            for (int k = 1; k < n; k++) {
                if(ans[k] == 0){                //k番目が羊の場合
                    if(s[k] == 'o'){            //両隣が同じ種類（ans[k-1] == ans[k+1]）
                        if(ans[k-1] == 0){      //k-1番目が羊の場合
                            ans[k+1] = 0;       //k+1番目を羊へ
                        }else{                  //k-1番目が狼の場合
                            ans[k+1] = 1;       //k+1番目を狼へ
                        }
                        
                    }else{                      //両隣が異なる種類（ans[k-1] != ans[k+1]）
                        if(ans[k-1] == 0){      //k-1番目が羊の場合
                            ans[k+1] = 1;       //k+1番目を狼へ
                        }else{                  //k-1番目が狼の場合
                            ans[k+1] = 0;       //k+1番目を羊へ
                        }
                    }
                }else{                          //k番目が狼の場合
                    if(s[k] == 'o'){            //両隣が同じ種類（ans[k-1] == ans[k+1]）
                        if(ans[k-1] == 0){      //k-1番目が羊の場合
                            ans[k+1] = 1;       //k+1番目を狼へ
                        }else{                  //k-1番目が狼の場合
                            ans[k+1] = 0;       //k+1番目を羊へ
                        }
                        
                    }else{                      //両隣が異なる種類（ans[k-1] != ans[k+1]）
                        if(ans[k-1] == 0){      //k-1番目が羊の場合
                            ans[k+1] = 0;       //k+1番目を羊へ
                        }else{                  //k-1番目が狼の場合
                            ans[k+1] = 1;       //k+1番目を狼へ
                        }
                    }
                }
                if(k == n - 2){
                    //割り当てが存在しない場合
                    if(end != ans[n-1]){
                        break;
                    }
                }else if(k == n - 1){
                    //割り当てが存在する場合
                    if(start == ans[n]){
                        flag = true;
                        break;
                    }
                }
            }
        }
    }
    
    //出力
    if(flag){                               //割り当てが存在する場合
        for (int i = 0; i < n; i++) {
            if(ans[i] == 0){                //羊
                cout << 'S';
            }else{                          //狼
                cout << 'W';
            }
        }
        cout << endl;
    }else{                                  //割り当てが存在しない場合
        cout << "-1" << endl;
    }
    

    return 0;
}
