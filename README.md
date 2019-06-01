# Competitive programming
- 各型の最大, 最小
    - `INT_MAX`
    - `INT_MIN`
    - `LLONG_MAX`
    - `LLONG_MIN`
    - `DBL_MIN`
    - `DBL_MAX`
    - `LDBL_MIN`
    - `LDBL_MAX`

- 切り上げ
```
double x = 3.2;
cout << ceil(x) << endl;

[Output]
4
```

- 切り捨て
    - `floor(x)`

- 出力の桁数指定
```
double ans = 1.322;
cout << setprecision(2) << ans << endl;

[Output]
1.32
```
- |a-z| = 26

- 2進数変換
    - `<>` 内は桁数を指定
```
string s = bitset<20>(x).to_string();
```

- [いもす法](https://imoz.jp/algorithms/imos_method.html)
    - [AtCoder Beginner Contest 014 C](https://atcoder.jp/contests/abc014/tasks/abc014_3)


## Reference
- [AOJ](http://judge.u-aizu.ac.jp/onlinejudge/)  
- [AtCoder](http://www.atcoder.jp/)  
- [Google Code Jam](https://codingcompetitions.withgoogle.com/codejam)
- [ICPC](http://icpc.iisf.or.jp/)  
- [JOI](https://www.ioi-jp.org/)
- [LeetCode](https://leetcode.com/)
