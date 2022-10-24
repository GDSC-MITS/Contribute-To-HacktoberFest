// Polynomial using Array
use text_io::read;
#[derive(Debug)]
struct Polynomial {
    coeff: i32,
    expo: i32,
}
impl Polynomial {
    fn new() -> Polynomial {
        Polynomial { coeff: 0, expo: 0 }
    }
}

fn main() {
    print!("Degree of polynomial: ");
    let n: usize = read!();
    let mut p1: Vec<Polynomial> = (0..n).map(|_| Polynomial::new()).collect();
    let mut i: usize = 0;
    println!("First");
    while i < n {
        print!("Coefficent: ");
        p1[i].coeff = read!();
        print!(r#"Exponent: "#);
        p1[i].expo = read!();
        i += 1;
    }
    println!();
    for j in 0..n {
        if p1[j].coeff == 0 {
            continue;
        } else if p1[j].expo == 0 {
            print!("{}", p1[j].coeff);
        } else if p1[j].expo == 1 {
            print!("{}x", p1[j].coeff);
        } else if p1[j].coeff == 1 {
            print!("x^{}", p1[j].expo);
        } else {
            print!("{}x^{}", p1[j].coeff, p1[j].expo);
        }
        if j < i - 1 {
            print!(" + ");
        }
    }
}
