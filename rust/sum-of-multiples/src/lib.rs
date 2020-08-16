pub fn sum_of_multiples(limit: u32, factors: &[u32]) -> u32 {
    let mut sum: u32 = 0;

    for i in 1..limit {
        for f in factors.iter() {
            if (*f != 0) && (i % f == 0) {
                sum += i;
                break;
            }
        }
    }
    sum
}
