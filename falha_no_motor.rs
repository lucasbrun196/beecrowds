use std::io;

fn main(){
    let mut input: String = String::new();
    io::stdin().read_line(&mut input).expect("");
    let n: usize = input.trim().parse().expect("");
    input.clear();
    io::stdin().read_line(&mut input).expect("");
    let vec_str: Vec<&str> = input.trim().split(" ").collect();
    let iter = vec_str.iter(); 
    let vec_u32: Vec<u32> = iter.map(|e| e.parse().expect("")).collect();
    let mut ans: u32 = 0;
    for i in 1..n{
        if vec_u32[i] < vec_u32[i-1]{
            ans = (i+1) as u32;
            break;
        }
    }
    println!("{}", ans);
    
}