use std::io;

fn main() {
    let mut row = String::new();
    let mut column = String::new();

    println!("x : ");
    io::stdin().read_line(&mut column).expect("Failed to read line");
    let column: usize = column.trim().parse().expect("Please enter a number");

    println!("y : ");
    io::stdin().read_line(&mut row).expect("Failed to read line");
    let row: usize = row.trim().parse().expect("Please enter a number");

    let mut arr_1st: Vec<Vec<i32>> = vec![vec![0; column]; row];
    let mut arr_2nd: Vec<Vec<i32>> = vec![vec![0; column]; row];
    let mut arr_result: Vec<Vec<i32>> = vec![vec![0; column]; row];

    println!("\n[ First Matrix Input ]");
    for i in 0..row {
        for j in 0..column {
            let mut input = String::new();
            io::stdin().read_line(&mut input).expect("Failed to read line");
            arr_1st[i][j] = input.trim().parse().expect("Please enter a number");
        }
    }

    println!("\n[ Second Matrix Input ]");
    for i in 0..row {
        for j in 0..column {
            let mut input = String::new();
            io::stdin().read_line(&mut input).expect("Failed to read line");
            arr_2nd[i][j] = input.trim().parse().expect("Please enter a number");
        }
    }

    for i in 0..row {
        for j in 0..column {
            arr_result[i][j] = arr_1st[i][j] + arr_2nd[i][j];
        }
    }

    println!("\n\n------------------------------");

    println!("\n[ First matrix ]\n");
    for i in 0..row {
        for j in 0..column {
            print!("{}  ", arr_1st[i][j]);
        }
        println!();
    }

    println!("\n--------------------------------");

    println!("\n[ Second matrix ]\n");
    for i in 0..row {
        for j in 0..column {
            print!("{}  ", arr_2nd[i][j]);
        }
        println!();
    }

    println!("\n--------------------------------");

    println!("\n[ Result matrix ]\n");
    for i in 0..row {
        for j in 0..column {
            print!("{}  ", arr_result[i][j]);
        }
        println!();
    }
}

