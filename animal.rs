use std::io;


fn main(){
    const E: &str = "Input Error";
    let mut input: String = String::new();
    let mut vec: Vec<String> = Vec::new();
    for _i in 0..3{
        io::stdin().read_line(&mut input).expect(E);
        vec.push(input.clone());
        input.clear();
    }

    if vec[0].trim() == "vertebrado"{
        if vec[1].trim() == "ave"{
            if vec[2].trim() == "carnivoro"{
                println!("aguia");
            }else{
                println!("pomba");
            }
        }else{
            if vec[2].trim() == "onivoro"{
                println!("homem");
            }else{
                println!("vaca");
            }
        }
    }else {
        if vec[1].trim() == "inseto"{
            if vec[2].trim() == "hematofago"{
                println!("pulga");
            }else {
                println!("lagarta");
            }
        }else{
            if vec[2].trim() == "hematofago"{
                println!("sanguessuga");
            }else{
                println!("minhoca");
            }
        }
    }
}