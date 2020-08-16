use sum_of_multiples::sum_of_multiples;

//If we list all the natural numbers below 20 that are multiples of 3 or 5,
//we get 3, 5, 6, 9, 10, 12, 15, and 18.
//The sum of these multiples is 78.

fn main() {
    //(3, sum_of_multiples(4, &[3, 0]))
    println!("sum of m:{}", sum_of_multiples(4, &[3, 0]));
}
