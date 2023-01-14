use proconio::input;

fn main() {
    input! {
        k: usize,
    }

    for (i, c) in "ABCDEFGHIJKLMNOPQRSTUVWXYZ".char_indices() {
        if i >= k {
            break;
        }
        print!("{}", c);
    }
    println!();
}
