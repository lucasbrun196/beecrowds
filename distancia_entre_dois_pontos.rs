use std::io;

fn main(){

    let error_msg: &str = "Input error";
    let mut input : String = String::new();
    let values: Vec<&str>;

    io::stdin().read_line(&mut input).expect(error_msg);
    let split_str = input.split(' ');
    values = split_str.collect();
    let x1: f64 = values[0].trim().parse().expect(error_msg);
    let y1: f64 = values[1].trim().parse().expect(error_msg);
    
    let mut input2: String = String::new();
    let values2: Vec<&str>;
    io::stdin().read_line(&mut input2).expect(error_msg);
    let split_str2 = input2.split(' ');
    values2 = split_str2.collect();
    let x2: f64 = values2[0].trim().parse().expect(error_msg);
    let y2: f64 = values2[1].trim().parse().expect(error_msg);


    let ans: f64 = (((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1))).sqrt();

    println!("{:.4}", ans);

}