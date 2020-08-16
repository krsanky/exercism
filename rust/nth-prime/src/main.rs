//use nth_prime::sieve_of_eras;
use nth_prime::{nth, sieve_of_eras};

fn main() {
    //println!("Given a number n, determine what the nth prime is.");
    //println!("By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13,");
    //println!("  we can see that the 6th prime is 13.");
    println!(
        "prime numbers:\n2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97"
    );

    let ps = sieve_of_eras(100);
    for p in ps.iter() {
        print!("{} ", p);
    }
    println!();

    let ns = vec![0, 1, 10, 24, 25, 100, 1000, 10_000];
    for n in ns.iter() {
        println!("nth({}):{}", *n, nth(*n));
    }
    //nth(10_000), 104_743);
}
