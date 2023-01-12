use proconio::input;

fn main() {
    input! {
        a: usize,
        b:usize,
    }

    let mut ans: usize = 1;
    for _ in 0..b {
        ans *= a;
    }

    println!("{}", ans);
}
