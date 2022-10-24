use text_io::read;
fn main() {
    binarysearch();
}
fn binarysearch() {
    const N:usize = 5 ;
    let mut array: [i32; N] = [0; N];
    println!("Enter array elements:");
    for i in 0..N {
        let x:i32=read!();
        array[i] = x;
    }
    println!("Array complete");
    let (mut ll, mut ul) = (0, array.len() as i32);
    let mut mid = (ll + ul) / 2;
    let qu:i32 = read!();
    let mut flag = true;
    for _i in 0..N {
        if qu == array[mid as usize] {
            println!("element found at index {mid}");
            flag = false;
            break;
        } else if qu > array[mid as usize] {
            ll = mid as i32;
        } else if qu < array[mid as usize] {
            ul = mid as i32;
        }
        mid = (ll + ul) / 2;
    }
    if flag {
        println!("No Element Found");
    }
}
