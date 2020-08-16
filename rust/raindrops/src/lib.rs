pub fn raindrops(n: u32) -> String {
    let div_by_3 = (n % 3) == 0;
    let div_by_5 = (n % 5) == 0;
    let div_by_7 = (n % 7) == 0;

    let mut res: String = "".to_string();

    if div_by_3 {
        res.push_str("Pling");
    }
    if div_by_5 {
        res.push_str("Plang");
    }
    if div_by_7 {
        res.push_str("Plong");
    }
    if !(div_by_3 || div_by_5 || div_by_7) {
        res.push_str(&n.to_string());
    }

    res
}
