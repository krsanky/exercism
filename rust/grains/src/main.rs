use grains;

fn main() {
    println!("grains square({}):{}", 1, grains::square(1));
    //println!("grains square({}):{}", 3, grains::square(3));

    //assert_eq!(grains::total(), 18_446_744_073_709_551_615);
    println!("total:{}", grains::total());

    let v = (2..=10).fold(1, |acc, _| 2 * acc);
    println!("v:{} OR {}", v, grains::square(10));
}
