use std::io;
use rand::Rng;

fn GenRandInt(min: u32, max: u32) -> u32 {
	let mut rng = rand::thread_rng();
	let random_num: u32 = rng.gen_range(min..max);
	return random_num;
}

fn main() {
	let random_num: u32 = GenRandInt(1, 100);
	let mut tries: u32 = 0;
	let mut player_input = String::new();

	print!("Please enter a number between 1 - 100: ");

	while true {
	
		io::stdin()
			.read_line(&mut player_input)
			.expect("Failed to read from stdin");

		let player_num: u32 = player_input.trim().parse().expect("Please enter a valid number");

		if player_num > random_num {
			println!("Number is too big");
			tries += 1;
		} else if player_num < random_num {
			println!("Number is too small");
			tries += 1;
		} else {
			println!("YOU HAVE WON!!!!!!!!\nTries: {}\nNumber: {}", tries, random_num);
		}
	}
}
