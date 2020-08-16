pub fn factors(n: u64) -> Vec<u64> {
    let pfs: Vec<u64> = vec![];
    pfs
}

pub fn factor_count(mut n: u64, fact: u64) -> u32 {
    let mut count: u32 = 0;
    //println!("{} % {} = {}", n, fact, n % fact);
    while n % fact == 0 {
        count += 1;
        n = n / fact;
    }
    count
}

pub fn sieve_of_eras(n: usize) -> Vec<u64> {
    let mut primes = vec![true; n];

    let n_sqrt = ((n as f64).sqrt() as usize) + 1;
    println!("in sieve n:{} ... n_sqrt:{}", n, n_sqrt);

    for i in 2..n_sqrt {
        if i > n_sqrt {
            break;
        }
        if primes[i] {
            for j in 0..n {
                let idx = i * i + i * j; // find all multiples out to n
                if idx < n {
                    primes[idx] = false;
                }
            }
        }
    }

    let mut ps: Vec<u64> = Vec::new();
    for (i, p) in primes.iter().enumerate() {
        if *p && (i != 0) && (i != 1) {
            //print!("p:{} ", i);
            ps.push(i as u64);
        }
    }
    ps
}
