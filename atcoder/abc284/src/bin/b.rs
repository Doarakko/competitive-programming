use proconio::input;

fn main() {
    input! {
        t: usize,
    }

    for _i in 0..t {
        input! {
            n: usize,
            a: [u64;n]
        }
        let mut c = 0;

        for x in a {
            if x % 2 == 1 {
                c += 1;
            }
        }

        println!("{}", c);
    }
}
