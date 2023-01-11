use proconio::input;

fn main() {
    input! {
        n: usize,
        s: [String; n]
    }

    for i in 0..s.len() {
        println!("{}", s[n - i - 1]);
    }
}
