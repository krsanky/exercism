use reverse_string::reverse;

fn _main2() {
    let s = "asd123";
    let g = "uüu"; //"uüu");
    println!("reverse({}):{}", s, reverse(s));
    println!("reverse({}):{}", g, reverse(g));
}

fn main() {
    let s = "asd123";
    for c in s.chars() {
        println!("c:{}", c);
    }
    let _s2: String = s.chars().rev().collect();
    let s3 = s.chars().rev().collect::<String>();
    for c in s3.chars() {
        println!("--c:{}", c);
    }
    //"uu#u"
}
