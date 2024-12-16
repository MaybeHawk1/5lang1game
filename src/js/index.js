// Region: Functions

/* *
 * * Function to generate a random number
 * * @param min minumim number
 * * @param max maximum number
 * * @return an int between the min and max
 */

function GenRandInt(min, max) {
	return Math.floor(Math.random() * max - min);
}
// End of region

// Region: Main
function main() {
	let random_num = GenRandInt(1, 100);
	let tries = 0;

	while (true) {
		let player_num = window.prompt("Please enter a number between 1 - 100")

		if (player_num > random_num) {
			window.alert("Number is too high");
			tries++;
		} else if (player_num < random_num) {
			window.alert("Number is too low");
			tries++;
		} else {
			window.alert(`YOU WIN!!!!!!\nTries: ${tries}\nNumber: ${random_num}`)
			break;
		}
	}

	window.alert("Thank you for playing!!!!!");
}
// End of region
main()
