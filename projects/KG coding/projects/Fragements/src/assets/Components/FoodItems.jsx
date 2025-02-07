import Item from "./Item";

function FoodItems() {
  let foodItems = ["apple", "banana", "avacado","grapes"];

  return (
    <>
      <ul className="list-group">
        {foodItems.map((items) => (
          <Item key={items} foodItem={items} />
          
        ))}
      </ul>
    </>
  );
}

export default  FoodItems;