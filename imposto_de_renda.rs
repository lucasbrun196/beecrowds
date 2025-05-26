use std::io;

fn main(){

    let mut input: String = String::new();
    let mut ans: f64 = 0.0;
    io::stdin().read_line(&mut input).expect("");
    let mut salary: f64 = input.trim().parse().expect("");
    let mut flag: bool = false;
    
    if salary > 4500.0{
        ans += (28.0  / 100.0) * (salary - 4500.0);
        salary = 4500.0;
    }
    if salary > 3000.0 {
        ans += (18.0 / 100.0) * (salary - 3000.0);
        salary = 3000.0;
    }
    if salary > 2000.0 {
        ans += (8.0 / 100.0) * (salary - 2000.0);
        flag = true;
    }
    if !flag{
        println!("Isento");
    }else{
        println!("R$ {:.2}", ans);
    }     
}