use std::io;

fn main() {
    let mut inp : String = String::new();
    io::stdin().read_line(&mut inp).expect("");
    let n: u32 = inp.trim().parse().expect("");
    let mut last_i: usize;
    let mut stack: Vec<char> = Vec::new();
    let mut stack_aux: Vec<char> = Vec::new();
    let mut ans: u32;
    inp.clear();
    for _ in 0..n {
        io::stdin().read_line(&mut inp).expect("");
        inp.trim().chars().for_each(|e| {
            if e != '.' {
                stack.push(e);
            }
        });
        ans = 0;
        while !stack.is_empty(){
            last_i = (stack.len() - 1) as usize; 
            if stack[last_i] == '<'{
                stack.pop();
            }else{
                stack.pop();
                while !stack.is_empty() {
                    last_i = (stack.len() - 1) as usize;
                    if stack[last_i] == '<'{
                        stack.pop();
                        ans+=1;
                        break;
                    }else {
                        stack_aux.push(stack[last_i]);
                        stack.pop();
                    }
                    
                }
            }
            while !stack_aux.is_empty(){
                last_i = (stack_aux.len()-1) as usize;
                stack.push(stack_aux[last_i]);
                stack_aux.pop();
            }
        }
        println!("{}", ans); 
        stack.clear();
        stack_aux.clear();
        inp.clear();
    }
}
