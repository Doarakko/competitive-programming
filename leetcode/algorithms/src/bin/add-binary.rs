use std::cmp::max;

fn main() {
    println!("{}", solve("11".to_string(), "1".to_string()));
    println!("{}", solve_a("11".to_string(), "1".to_string()));

    println!("{}", solve("1010".to_string(), "1011".to_string()));
    println!("{}", solve_a("1010".to_string(), "1011".to_string()));
}

fn solve_a(a: String, b: String) -> String {
    println!("{}", u128::from_str_radix(&a, 2).unwrap());
    println!("{}", u128::from_str_radix(&b, 2).unwrap());
    println!(
        "{}",
        u128::from_str_radix(&a, 2).unwrap() + u128::from_str_radix(&b, 2).unwrap()
    );

    format!(
        "{:b}",
        u128::from_str_radix(&a, 2).unwrap() + u128::from_str_radix(&b, 2).unwrap()
    )
}

fn solve(a: String, b: String) -> String {
    let a_r: String = a.chars().rev().collect();
    let b_r: String = b.chars().rev().collect();

    let mut s: String = String::new();
    let mut sum: usize = 0;
    for i in 0..max(a_r.len(), b_r.len()) {
        if i < a_r.len() {
            sum += a_r.chars().nth(i).unwrap_or('0').to_digit(10).unwrap() as usize;
        }

        if i < b_r.len() {
            sum += b_r.chars().nth(i).unwrap_or('0').to_digit(10).unwrap() as usize;
        }

        match sum {
            0 => s.push('0'),
            1 => {
                s.push('1');
                sum = 0;
            }
            2 => {
                s.push('0');
                sum = 1;
            }
            3 => {
                s.push('1');
                sum = 1;
            }
            _ => panic!(),
        }
    }

    if sum == 1 {
        s.push('1');
    }

    s.chars().rev().collect::<String>()
}
