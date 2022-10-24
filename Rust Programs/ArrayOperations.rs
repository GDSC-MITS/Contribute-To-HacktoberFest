use text_io::read;

static mut ARRAY: [i32; 100] = [0; 100];
fn main() {
    println!("Enter the size of the array:");
    let mut n: i32 = read!();
    println!("Enter the elements of the array");
    unsafe {
        for i in 0..n {
            ARRAY[i as usize] = read!();
        }
    }
    while 10 < 20 {
        println!("-------------------");
        println!("Menu Driven Program");
        println!("-------------------");
        println!("1. Add an element to an array");
        println!("2. Delete an element from an array");
        println!("3. Display the sum of all elements in the array");
        println!("4. Display all elements in an array");
        println!("Input the choice");
        println!("-----------------");
        let ch: i32 = read!();
        println!("-----------------");
        if ch == 1 {
            add(&mut n);
        } else if ch == 2 {
            delete(&mut n);
        } else if ch == 3 {
            sum(n);
        } else if ch == 4 {
            display(n);
        } else {
            println!("Program Closed Succesfully");
            break;
        }
    }
}
fn add(n: &mut i32) {
    println!("Enter the Index to which the element is to be added");
    let indx: usize = read!();
    unsafe {
        for j in 0..*n as usize {
            let i = *n as usize - j;
            ARRAY[i] = ARRAY[i - 1];
            if i as usize == indx {
                ARRAY[i] = ARRAY[i - 1];
                print!("Enter Value:");
                let value = read!();
                ARRAY[indx] = value;
                break;
            }
        }
    }
    println!("{} Updated to {}", *n, *n + 1);
    *n += 1;
}
fn delete(n: &mut i32) {
    println!("Enter the Index to which the element is to be deleted");
    let indx: usize = read!();
    for i in indx..*n as usize {
        unsafe {
            ARRAY[i] = ARRAY[i + 1];
        }
    }
    println!("{} Updated to {}", *n, *n + 1);
    *n -= 1;
}
fn sum(n: i32) {
    let mut sum = 0;
    for i in 0..n as usize {
        unsafe {
            sum += ARRAY[i];
        }
    }
    println!("Sum of elements of the array is {sum}");
}
fn display(n: i32) {
    for i in 0..n as usize {
        unsafe {
            println!("{}", ARRAY[i]);
        }
    }
}
