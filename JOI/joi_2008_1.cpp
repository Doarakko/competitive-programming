#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int h_s, m_s, s_s;
    int h_e, m_e, s_e;
    int h_ans, m_ans, s_ans;
    
    
    for (int i = 0; i < 3; i++) {
        //初期化
        h_ans = m_ans = s_ans = 0;
        //入力
        cin >> h_s >> m_s >> s_s;
        cin >> h_e >> m_e >> s_e;
        
        //秒
        if (s_e - s_s < 0) {
            if (m_e - 1 < 0) {
                h_e -= 1;
                m_e += 60;
                m_e -= 1;
                s_e += 60;
                s_ans = s_e - s_s;
                if (m_e - m_s < 0) {
                    h_e -= 1;
                    m_e += 60;
                    m_ans = m_e - m_s;
                    h_ans = h_e - h_s;
                }else{
                    m_ans = m_e - m_s;
                    h_ans = h_e - h_s;
                }
            }else{
                m_e -= 1;
                s_e += 60;
                s_ans = s_e - s_s;
                if (m_e - m_s < 0) {
                    h_e -= 1;
                    m_e += 60;
                    m_ans = m_e - m_s;
                    h_ans = h_e - h_s;
                }else{
                    m_ans = m_e - m_s;
                    h_ans = h_e - h_s;
                }
            }
        }else{
            s_ans = s_e - s_s;
            if (m_e - m_s < 0) {
                h_e -= 1;
                m_e += 60;
                m_ans = m_e - m_s;
                h_ans = h_e - h_s;
            }else{
                m_ans = m_e - m_s;
                h_ans = h_e - h_s;
            }
        }
        //出力
        cout << h_ans << ' ' << m_ans << ' ' <<  s_ans << endl;
    }
    
    
    return 0;
}
