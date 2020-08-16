pub fn nth(n: u32) -> u32 {
    let mut sieve_size = 10_000;
    let sieve_incr = 10_000;
    let mut primes: Vec<u32>;
    let mut safety = 100_000;

    loop {
        safety -= 1;
        if safety < 0 {
            break;
        }
        primes = sieve_of_eras(sieve_size);

        if (primes.len() as u32) <= n {
            //println!("need more primes; n:{} primes.len():{}", n, primes.len());
            sieve_size += sieve_incr;
        } else {
            //println!("the NTH[{}] primes:{}", n, primes[(n as usize)]);
            return primes[(n as usize)];
        }
    }

    1 // err
}

pub fn sieve_of_eras(n: usize) -> Vec<u32> {
    let mut primes = vec![true; n];

    let n_sqrt = ((n as f64).sqrt() as usize) + 1;
    //println!("n_sqrt:{}", n_sqrt);

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

    let mut ps: Vec<u32> = Vec::new();
    for (i, p) in primes.iter().enumerate() {
        if *p && (i != 0) && (i != 1) {
            //print!("p:{} ", i);
            ps.push(i as u32);
        }
    }
    ps
}
