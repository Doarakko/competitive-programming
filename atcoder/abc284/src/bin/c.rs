use proconio::input;

const MAX_N: usize = 100;
const GC: Vec<usize> = Vec::new();

fn main() {
    input! {
        n: usize,
        m: usize,
    }

    let mut visited: [bool; MAX_N] = [false; MAX_N];
    let mut g: [Vec<usize>; MAX_N] = [GC; MAX_N];

    for _ in 0..m {
        input! {
            mut u: usize,
            mut v: usize,
        }
        u -= 1;
        v -= 1;

        g[u].push(v);
        g[v].push(u);
    }

    let mut cnt: usize = 0;
    for i in 0..n {
        if !visited[i] {
            cnt += 1;
            dfs(&g, &mut visited, i);
        }
    }

    println!("{}", cnt);
}

fn dfs(g: &[Vec<usize>], visited: &mut [bool], x: usize) {
    visited[x] = true;

    for a in g[x].iter() {
        if !visited[*a] {
            dfs(g, visited, *a);
        }
    }
}
