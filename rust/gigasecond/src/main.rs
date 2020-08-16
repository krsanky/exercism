use gigasecond;

use chrono::{TimeZone, Utc};

fn main() {
    println!("giga...........");
    let start_date = Utc.ymd(2011, 4, 25).and_hms(0, 0, 0);

    let d1 = gigasecond::after(start_date);
    println!("d1:{}", d1);
}
