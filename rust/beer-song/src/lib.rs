pub fn verse(n: i32) -> String {
    let mut a = format!("{} bottles of beer on the wall,", n);
    let mut b = format!("{} bottles of beer.", n);
    let mut c = "Take one down and pass it around,";
    let mut d = format!("{} bottles of beer on the wall.", n - 1);

    match n {
        0 => {
            a = "No more bottles of beer on the wall,".to_string();
            b = "no more bottles of beer.".to_string();
            d = "99 bottles of beer on the wall.".to_string();
            c = "Go to the store and buy some more,";
        }
        1 => {
            a = "1 bottle of beer on the wall,".to_string();
            b = "1 bottle of beer.".to_string();
            c = "Take it down and pass it around,";
            d = "no more bottles of beer on the wall.".to_string();
        }
        2 => {
            d = format!("{} bottle of beer on the wall.", n - 1);
        }
        _ => (),
    }

    format!("{} {}\n{} {}\n", a, b, c, d)
}

pub fn sing(start: i32, end: i32) -> String {
    let mut ret = verse(start);
    for i in (end..start).rev() {
        ret = format!("{}\n{}", ret, verse(i));
    }
    ret
}
