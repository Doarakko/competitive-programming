use proconio::input;

fn main() {
    input! {
        _n: usize,
        s: String
    }

    let mut v: Vec<usize> = Vec::new();
    for (i, c) in s.chars().enumerate() {
        if c == '"' {
            v.push(i);
        }
    }

    let mut vi = 0;
    for (i, c) in s.chars().enumerate() {
        if vi + 1 < v.len() && i > v[vi + 1] {
            vi += 2;
        };

        if c == ',' {
            if vi + 1 < v.len() && i >= v[vi] && i <= v[vi + 1] {
                print!(",");
            } else {
                print!(".");
            }
        } else {
            print!("{}", c);
        }
    }
    println!();
}
