//https://codeforces.com/contest/1841/problem/A
use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut input = stdin.lock().lines().map(|line| line.unwrap());

    let t: i32 = input.next().unwrap().parse().unwrap();

    for _ in 0..t {
        let n: i32 = input.next().unwrap().parse().unwrap();

        if n <= 4 {
            println!("Bob");
        } else {
            println!("Alice");
        }
    }
}
