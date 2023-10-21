use std::collections::BTreeMap;
use std::io;

#[derive(Debug)]
struct StuInfo {
    name: String,
    mid_score: i32,
    end_score: i32,
}

fn main() {
    let mut root: BTreeMap<String, StuInfo> = BTreeMap::new();

    println!("Student count: ");
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Failed to read line");
    let n: i32 = input.trim().parse().expect("Please enter a number");

    for _ in 0..n {
        let mut stu_info = StuInfo {
            name: String::new(),
            mid_score: 0,
            end_score: 0,
        };

        println!("Name: ");
        input.clear();
        io::stdin().read_line(&mut input).expect("Failed to read line");
        stu_info.name = input.trim().to_string();

        println!("Mid score: ");
        input.clear();
        io::stdin().read_line(&mut input).expect("Failed to read line");
        stu_info.mid_score = input.trim().parse().expect("Please enter a number");

        println!("End score: ");
        input.clear();
        io::stdin().read_line(&mut input).expect("Failed to read line");
        stu_info.end_score = input.trim().parse().expect("Please enter a number");

        if root.insert(stu_info.name.clone(), stu_info).is_none() {
            println!("\n[Registered Student Info]\n");
        } else {
            println!("\n[Error: Overlap same name]\n");
        }
    }

    println!("\n-------------------------------");
    println!("\n[Student Information]\n");

    for (name, info) in &root {
        println!(
            "Name: {}\nMid score: {}\nEnd score: {}\n",
            name, info.mid_score, info.end_score
        );
    }

    println!("\n-------------------------------");
}

