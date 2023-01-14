use proconio::input;

fn main() {
    input! {
        n: usize,
        m: usize,
    }

    let mut v: Vec<String> = Vec::new();
    for _ in 0..n {
        input! {
            s:String,
        }

        v.push(s);
    }

    let mut cnt = 0;
    for i in 0..n {
        for j in i + 1..n {
            let mut flag: bool = true;
            for k in 0..m {
                if v[i].chars().nth(k) == Some('x') && v[j].chars().nth(k) == Some('x') {
                    flag = false;
                }
            }

            if flag {
                cnt += 1;
            }
        }
    }

    println!("{}", cnt);
}
