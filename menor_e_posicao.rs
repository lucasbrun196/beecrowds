use std::io;

fn main(){
    let mut input: String = String::new();
    io::stdin().read_line(&mut input).expect("");

    let n: u32 = input.trim().parse().expect("");

    input.clear();
    io::stdin().read_line(&mut input).expect("");
    let vec: Vec<i32> = input.split_whitespace().map(|e| e.trim().parse::<i32>().expect("")).collect();
    let mut im : u32 = 0;
    let mut em : i32 = vec[0];
    for i in 1..n{
        if vec[i as usize] < em {
            em = vec[i as usize];
            im = i;
        } 
        
    }

    println!("Menor valor: {}\nPosicao: {}", em, im);
}