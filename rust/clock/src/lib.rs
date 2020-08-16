use std::fmt;

#[derive(Debug)]
pub struct Clock {
	hours: i32,
	minutes: i32,
}
impl Clock {
    pub fn new(hours: i32, minutes: i32) -> Self {
		Clock {
            hours: hours,
            minutes: minutes, 
		}
    }

//	pub fn to_string(&self) -> String {
//		format!("0{}:0{}", self.hours, self.minutes)		
//	}

    pub fn add_minutes(mut self, minutes: i32) -> Self {
		self.minutes += minutes;
		self
    }
}
impl fmt::Display for Clock {
	fn fmt(&self, f: &mut fmt::Formatter <'_>) -> fmt::Result {
		write!(f, "0{}:0{}", self.hours, self.minutes)
	}
}
impl PartialEq for Clock {
	fn eq(&self, other: &Self) -> bool {
		(self.hours == other.hours) && (self.minutes == other.minutes)
	}
}
impl Eq for Clock {}




