use std::io::{self, BufRead};
//https://codeforces.com/contest/1841/problem/B
fn main() {
    let stdin = io::stdin();
    let mut buffer = String::new();
    stdin.read_line(&mut buffer).unwrap();
    let t: usize = buffer.trim().parse().unwrap();

    for _ in 0..t {
        buffer.clear();
        stdin.read_line(&mut buffer).unwrap();
        let q: usize = buffer.trim().parse().unwrap();

        buffer.clear();
        stdin.read_line(&mut buffer).unwrap();
        let queries: Vec<i32> = buffer
            .split_whitespace()
            .map(|x| x.parse().unwrap())
            .collect();

        let mut res = Vec::new();
        let mut count = 0;

        for i in 0..q {
            let new_count = count + (!res.is_empty() && res.last().unwrap() > &queries[i]) as i32;

            if new_count == 0 || (new_count == 1 && queries[i] <= res[0]) {
                res.push(queries[i]);
                count = new_count;
                print!("1");
            } else {
                print!("0");
            }
        }
        println!();
    }
}
