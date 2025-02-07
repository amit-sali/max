import FoodItems from "./FoodItems";

function ErrorMessage() {
  let foodItems = ["apple", "banana", "avacado"];

  return <>{ FoodItems.length === 0 && <h3>i am still hungery</h3>}</>;
}

export default ErrorMessage;
