use ::proconio::input;

fn main() {
    input! {
        s: String,
    }

    let mut cnt = 0;
    let mut i = 0;
    let s: Vec<char> = s.chars().collect();
    while i < s.len() {
        if i + 1 < s.len() && s[i] == '0' && s[i + 1] == '0' {
            i += 1;
        }

        cnt += 1;
        i += 1;

        // println!("i: {}, cnt: {}", i, cnt);
    }

    println!("{}", cnt);
}
