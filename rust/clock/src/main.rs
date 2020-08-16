use clock::Clock;

fn main() {
	let c = Clock::new(8, 0);
	println!("clock:{}", c);
	c.add_minutes(20);
	//println!("clock:{}", c);
}

