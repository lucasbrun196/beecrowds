use std::io;

fn main(){
    let mut line1: String = String::new();
    let mut line2: String = String::new();
    io::stdin().read_line(&mut line1).expect("");
    let v: Vec<&str> = line1.trim().split(" ").collect();
    let it = v.iter();
    let line_parsed: Vec<i16> = it.map(|elem| elem.parse().expect("")).collect();
    io::stdin().read_line(&mut line2).expect("");
    let v2: Vec<&str> = line2.trim().split(" ").collect();
    let it2 = v2.iter();
    let line_parsed_2: Vec<i16> = it2.map(|e| e.parse().expect("")).collect();
    let mut flag: bool = true;
    let mut dif: i16;
    for i in 1..line_parsed[1]{
        dif = ((line_parsed_2[i as usize] - line_parsed_2[(i-1) as usize]) as i16).abs();
        if dif > line_parsed[0]{
            flag = false;
            break;
        }
    }
    if flag {
        println!("YOU WIN");
    }else{
        println!("GAME OVER");
    }
    
}