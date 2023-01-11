use proconio::input;

const DY: [i16; 4] = [1, -1, 0, 0];
const DX: [i16; 4] = [0, 0, -1, 1];

fn main() {
    input! {
        h: usize,
        w: usize,
    }

    let mut mp: Vec<Vec<char>> = Vec::new();
    for _i in 0..h {
        input! {
            s: String
        }
        mp.push(s.chars().collect());
    }
    // println!("{:?}", mp);

    let sp = search_start_point(&mut mp, h, w);
    // println!("{:?}", sp);

    let mut flag = false;
    dfs(&mut mp, w, h, &mut flag, sp.0, sp.1);
    if flag {
        println!("Yes");
    } else {
        println!("No");
    }
}

fn search_start_point(mp: &mut Vec<Vec<char>>, h: usize, w: usize) -> (usize, usize) {
    for i in 0..h {
        for j in 0..w {
            if mp[i][j] == 's' {
                return (i, j);
            }
        }
    }
    panic!("Can not find start point")
}

fn dfs(mp: &mut Vec<Vec<char>>, w: usize, h: usize, flag: &mut bool, y: usize, x: usize) {
    mp[y][x] = '#';
    // println!("{:?}", mp);

    for i in 0..DY.len() {
        let cy = y as i16 + DY[i];
        let cx = x as i16 + DX[i];

        if cx < 0 || cy < 0 {
            continue;
        }
        if cx >= w as i16 || cy >= h as i16 {
            continue;
        }

        let cy = cy as usize;
        let cx = cx as usize;
        match mp[cy][cx] {
            '.' => dfs(mp, w, h, flag, cy, cx),
            'g' => *flag = true,
            _ => {}
        }
    }
}
