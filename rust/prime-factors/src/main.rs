use prime_factors::{factors, sieve_of_eras};

fn _fact(n: u64) {
    println!("This should calculate the prime factors of {}", n);
    let primes = sieve_of_eras(n as usize);
    let mut pfs: Vec<u64> = vec![];
    for p in primes.iter() {
        if n % p == 0 {
            println!("prime factor:{}", p);
            pfs.push(*p);
        }
    }
}

fn main() {
    let n = 93_819_012_551;
    println!("factors({}):{:?}", n, factors(n));
}

