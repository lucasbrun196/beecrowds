use std::io;

const ARR : [u32; 10] = [6,2,5,5,4,5,6,3,7,6];

fn sum_leds(s: String) -> u32 {
    
    let mut x: u32 = 0;
    let chars: Vec<char> = s.chars().collect();
    let size = chars.len();
    
    for i in 0..size{
        let index: usize = chars[i].to_digit(10).unwrap() as usize;
        x += ARR[index];
    }
    x
}


fn main(){

    let mut input: String = String::new();
    io::stdin().read_line(&mut input).expect("");
    let n: u32 = input.trim().parse().expect("");
    for _ in 0..n{
        let mut s : String = String::new();
        io::stdin().read_line(&mut s).expect("");
        let ans: u32 = sum_leds(s.trim().to_string());
        println!("{} leds", ans);
    }
    
    
}