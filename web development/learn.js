// Prompt the user to enter the first number
var input1 = prompt("Enter the first number:");

// Prompt the user to enter the second number
var input2 = prompt("Enter the second number:");

// Convert the input strings to numbers
var number1 = parseFloat(input1); // Use parseFloat to handle decimal input
var number2 = parseFloat(input2);

// Check if the input is valid numbers
if (!isNaN(number1) && !isNaN(number2)) {
  // Calculate the sum
  var sum = number1 + number2;

  // Display the result to the user
  alert("The sum of " + number1 + " and " + number2 + " is: " + sum);
} else {
  // Handle invalid input
  alert("Invalid input. Please enter valid numbers.");
}
